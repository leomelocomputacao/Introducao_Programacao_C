//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>

#define TAMANHO_VETOR_1 10
#define TAMANHO_VETOR_2 5
#define TAMANHO_VETOR_RESULTANTE_1 10
#define TAMANHO_VETOR_RESULTANTE_2 10

#define MENOR_NUMERO_DO_TIPO_INTEIRO -858993460 

//Método Main - Entry Point do Programa
int main54()
{
	int vetor1[TAMANHO_VETOR_1];
	int vetor2[TAMANHO_VETOR_2];

	int vetorResultante1[TAMANHO_VETOR_RESULTANTE_1];
	int vetorResultante2[TAMANHO_VETOR_RESULTANTE_2];

	int somaDosElementosDoVetor2 = 0;

	bool dadosDeEntradaValidos;

	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa Calculo Sobre Vetores>>");
	printf("\n\n ## Autor: Leonardo Melo\n\n");

	for (int i = 0; i < TAMANHO_VETOR_1; i++)
	{
		do{
			dadosDeEntradaValidos = true;

			printf("\nInforme um numero inteiro para o vetor (1) na posicao (%d): ", i);

			scanf_s("%d", &vetor1[i]);

			//limpa o buffer do scanf
			fflush(stdin);

			if (vetor1[i] == MENOR_NUMERO_DO_TIPO_INTEIRO)
			{
				printf("\n\nEntrada Invalida!\nDigite somente numeros.\n\n");

				dadosDeEntradaValidos = false;
			}

		} while (!dadosDeEntradaValidos);
	}

	printf_s("\n\n");

	for (int i = 0; i < TAMANHO_VETOR_2; i++)
	{
		do{
			dadosDeEntradaValidos = true;

			printf("\nInforme um numero inteiro para o vetor (2) na posicao (%d): ", i);

			scanf_s("%d", &vetor2[i]);

			//limpa o buffer do scanf
			fflush(stdin);

			if (vetor2[i] == MENOR_NUMERO_DO_TIPO_INTEIRO)
			{
				printf("\n\nEntrada Invalida!\nDigite somente numeros.\n\n");

				dadosDeEntradaValidos = false;
			}

		} while (!dadosDeEntradaValidos);

		somaDosElementosDoVetor2 += vetor2[i];
	}

	int contadorVetorResultante1 = 0;
	int contadorVetorResultante2 = 0;

	for (int i = 0; i < TAMANHO_VETOR_1; i++)
	{
		
		if (vetor1[i] % 2 == 0) //elemento de vetor1 é par
		{
			vetorResultante1[contadorVetorResultante1] = vetor1[i] + somaDosElementosDoVetor2;
			contadorVetorResultante1++;
		}
		else //elemento de vetor1 é ímpar
		{
			vetorResultante2[contadorVetorResultante2] = vetor1[i] + somaDosElementosDoVetor2;
			contadorVetorResultante2++;
		}
	}

	printf_s("\n\nElementos do VetorResultante1:\n\n");

	for (int i = 0; i < TAMANHO_VETOR_RESULTANTE_1; i++)
	{
		if (vetorResultante1[i] != MENOR_NUMERO_DO_TIPO_INTEIRO)
		{
			printf_s("%d\n", vetorResultante1[i]);
		}
		else
		{
			printf_s("POSICAO DO VETOR VAZIA\n");
		}
	}

	printf_s("\n\nElementos do VetorResultante2:\n\n");

	for (int i = 0; i < TAMANHO_VETOR_RESULTANTE_2; i++)
	{
		if (vetorResultante2[i] != MENOR_NUMERO_DO_TIPO_INTEIRO)
		{
			printf_s("%d\n", vetorResultante2[i]);
		}
		else
		{
			printf_s("POSICAO DO VETOR VAZIA\n");
		}
	}

	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}