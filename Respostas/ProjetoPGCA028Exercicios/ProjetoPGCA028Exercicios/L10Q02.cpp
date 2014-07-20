//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define QTD_MIN_NUM_APOSTA 1
#define QTD_MAX_NUM_APOSTA 20

#define NUM_APOSTA_MIN 0
#define NUM_APOSTA_MAX 100

#define QTD_NUM_SORTEADOS 20

void trataMemoriaInsuficiente(int *ponteiro)
{
	if (ponteiro == NULL){

		printf("\n\nNao existe memoria suficiente.\nEncerrando programa.\n\n");

		printf("\n");
		system("pause");

		exit(EXIT_FAILURE);
	}
}

void ordenaVetor(int n, int* v)
{
	int aux;

	for (int i = n - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			//se antecessor > sucessor entao inverta
			if (v[j] > v[j + 1])
			{
				//inversao de 
				aux = v[j];
				v[j] = v[j + 1];
				v[j + 1] = aux;
			}
		}
	}
}

int inteiroAleatorio(int a, int b)
{
	double r, x, R = RAND_MAX;
	int i;
	
	r = rand();  
	x = r / (R + 1);
	i = x * (b - a + 1);

	return a + i;
}

void mostraVetor(int *v, int tam)
{
	for (int i = 0; i < tam; i++)
	{
		if (i == 0)
		{
			printf("|");
		}

		printf(" %3d |", v[i]);

		if ((i + 1) % 10 == 0)
		{
			printf("\n|");
		}
	}
}

bool validaQtdNumApostados(int n)
{
	if (n >= QTD_MIN_NUM_APOSTA && n <= QTD_MAX_NUM_APOSTA)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool validaNumApostado(int n)
{
	if (n >= NUM_APOSTA_MIN && n <= NUM_APOSTA_MAX)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool existeElementoVetor(int n, int tam, int *v)
{
	for (int i = 0; i < tam; i++)
	{
		if (v[i] == n)
		{
			return true;
		}
	}

	return false;
}

void ler_aposta(int *aposta, int n)
{
	for (int i = 0; i < n; i++)
	{
		do{
			printf("\n\nDigite o %d%c numero apostado (entre %d e %d): ", i + 1, 167, NUM_APOSTA_MIN, NUM_APOSTA_MAX);
			scanf("%d", &aposta[i]);
			fflush(stdin);

			if (validaNumApostado(aposta[i]))
			{
				if (!existeElementoVetor(aposta[i], i, aposta))
				{
					break;
				}
				else
				{
					printf("\n\nEscolha um numero diferente.\nNumeros ja apostados:\n");
					mostraVetor(aposta, i);
				}
			}
			else
			{
				printf("\n\nNumero invalido.\nDigite um numero entre %d e %d.\n\n", NUM_APOSTA_MIN, NUM_APOSTA_MAX);
			}

		} while (true);
	}
}

void sorteia_valores(int *sorteio, int n)
{
	srand(time(NULL));

	for (int i = 0; i < n; i++)
	{
		do{
			sorteio[i] = inteiroAleatorio(NUM_APOSTA_MIN, NUM_APOSTA_MAX);

			if (!existeElementoVetor(sorteio[i], i, sorteio))
			{
				break;
			}

		} while (true);
	}
}

int* compara_aposta(int *aposta, int *sorteio, int *qtdacertos, int na, int ns)
{
	*qtdacertos = 0;
	int *acertos = NULL;

	for (int i = 0; i < na; i++)
	{
		if (existeElementoVetor(aposta[i], ns, sorteio))
		{
			(*qtdacertos)++;
		}
	}

	if (*qtdacertos > 0)
	{
		acertos = (int *)malloc((*qtdacertos) * sizeof(int));
		trataMemoriaInsuficiente(acertos);

		if (acertos != NULL){

			int j = 0;

			for (int i = 0; i < na; i++)
			{
				if (existeElementoVetor(aposta[i], ns, sorteio))
				{
					acertos[j] = aposta[i];
					j++;
				}
			}
		}
	}

	return acertos;
}

//Método Main - Entry Point do Programa
int mainl10q02()
{
	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa Bingo>>");
	printf("\n\n ## Autor: Leonardo Melo\n\n");

	int qtdNumApostados;

	do{

		printf("\nInforme a quantidade de numeros a serem apostados (entre %d e %d): ", QTD_MIN_NUM_APOSTA, QTD_MAX_NUM_APOSTA);
		scanf("%d", &qtdNumApostados);
		fflush(stdin);

		if (validaQtdNumApostados(qtdNumApostados))
		{
			break;
		}
		else
		{
			printf("\n\nQuantidade invalida.\nDigite um numero entre %d e %d.\n\n", QTD_MIN_NUM_APOSTA, QTD_MAX_NUM_APOSTA);
		}

	} while (true);

	int *numerosApostados = (int *)malloc(qtdNumApostados * sizeof(int));
	trataMemoriaInsuficiente(numerosApostados);

	ler_aposta(numerosApostados, qtdNumApostados);

	int *numerosSorteados = (int *)malloc(QTD_NUM_SORTEADOS * sizeof(int));
	trataMemoriaInsuficiente(numerosSorteados);

	printf("\n\nSorteando...\n\n");
	sorteia_valores(numerosSorteados, QTD_NUM_SORTEADOS);

	int quantidadeAcertos;

	int *numerosAcertados = compara_aposta(numerosApostados, numerosSorteados, &quantidadeAcertos, qtdNumApostados, QTD_NUM_SORTEADOS);
	

	printf("\n\nRESULTADO\n");
	printf("\nNumeros apostados:\n");

	ordenaVetor(qtdNumApostados, numerosApostados);
	mostraVetor(numerosApostados, qtdNumApostados);

	printf("\n\nNumeros sorteados:\n");
	
	ordenaVetor(QTD_NUM_SORTEADOS, numerosSorteados);
	mostraVetor(numerosSorteados, QTD_NUM_SORTEADOS);

	printf("\n\nQuantidade de acertos: %d\n", quantidadeAcertos);

	if (quantidadeAcertos > 0){
		printf("\nNumeros acertados:\n");

		ordenaVetor(quantidadeAcertos, numerosAcertados);
		mostraVetor(numerosAcertados, quantidadeAcertos);
	}

	free(numerosApostados);
	free(numerosSorteados);
	free(numerosAcertados);
	
	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}
