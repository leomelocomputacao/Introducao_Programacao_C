//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

#define tamanhoVetor 10

void trataMemoriaNaoSuficiente(int *ponteiro)
{
	if (ponteiro == NULL){

		printf("\n\nNao existe memoria suficiente.\nEncerrando programa.\n\n");

		printf("\n");
		system("pause");

		exit(EXIT_FAILURE);
	}
}

int* valores_entre(int *v, int n, int min, int max, int *qtd)
{
	*qtd = 0;
	int *vr;

	for (int i = 0; i < n; i++)
	{
		if (v[i] >= min && v[i] <= max)
		{
			(*qtd)++;
		}
	}
	
	if (*qtd > 0)
	{
		vr = (int *)malloc((*qtd) * sizeof(int));
		trataMemoriaNaoSuficiente(vr);

		int j = 0;

		for (int i = 0; i < n; i++)
		{
			if (v[i] >= min && v[i] <= max)
			{
				vr[j] = v[i];
				j++;
			}
		}

		return vr;
	}
	else
	{
		return NULL;
	}
}

//Método Main - Entry Point do Programa
int mainl10q01()
{
	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa funcao valores_entre>>");
	printf("\n\n ## Autor: Leonardo Melo\n\n");

	int vetorPrincipal[tamanhoVetor] = { 1, 2, 3, 4, 5, 0, 7, 8, 9, 10 };
	
	printf("\n\nVetor principal:\n\n");

	for (int i = 0; i < tamanhoVetor; i++)
	{
		if (i == 0)
		{
			printf("|");
		}

		printf(" %d |", vetorPrincipal[i]);
	}

	int min;
	int max;

	do{
		printf("\n\n\nDigite o valor minimo: ");
		scanf("%d", &min);
		fflush(stdin);

		printf("\nDigite o valor maximo: ");
		scanf("%d", &max);
		fflush(stdin);

		if (min > max)
		{
			printf("\n\nO valor minimo nao pode ser maior que o valor maximo.\n\n");
		}
		else
		{
			break;
		}

	} while (true);

	int tamanhoVetorResultante;
	int *vetorResultante = valores_entre(vetorPrincipal, tamanhoVetor, min, max, &tamanhoVetorResultante);

	printf("\n\n\nVetor resultante:\n\n");

	for (int i = 0; i < tamanhoVetorResultante; i++)
	{
		if (i == 0)
		{
			printf("|");
		}

		printf(" %d |", vetorResultante[i]);
	}

	free(vetorResultante);

	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n"); 
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}
