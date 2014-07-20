//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

//Constantes
#define QUANTIDADE_DE_LINHAS 8
#define QUANTIDADE_DE_COLUNAS 8

float buscaMaiorElementoDaDiagonalPrincipal(float matriz[QUANTIDADE_DE_LINHAS][QUANTIDADE_DE_COLUNAS])
{
	float maiorValor = matriz[0][0];

	for (int i = 0; i < QUANTIDADE_DE_LINHAS; i++)
	{
		for (int j = 0; j < QUANTIDADE_DE_COLUNAS; j++)
		{
			if (i == 0 && j == 0)
			{
				++j;
			}

			if (i == j)
			{
				if (maiorValor < matriz[i][j])
				{
					maiorValor = matriz[i][j];
				}
			}
		}
	}

	return maiorValor;
}

void divideMatrizPorNumero(float matriz[QUANTIDADE_DE_LINHAS][QUANTIDADE_DE_COLUNAS], float numero)
{
	for (int i = 0; i < QUANTIDADE_DE_LINHAS; i++)
	{
		for (int j = 0; j < QUANTIDADE_DE_COLUNAS; j++)
		{
			matriz[i][j] /= numero;
		}
	}
}

//Método Main - Entry Point do Programa 
int main87()
{
	//Declaração de variáveis
	float a[QUANTIDADE_DE_LINHAS][QUANTIDADE_DE_COLUNAS];
	
	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa encontra maior elemento da diagonal principal matriz e divide todos os elementos por esse valor>>");
	printf("\n\n ## Autor: Leonardo Melo\n\n");

	for (int i = 0; i < QUANTIDADE_DE_LINHAS; i++)
	{
		for (int j = 0; j < QUANTIDADE_DE_COLUNAS; j++)
		{
			printf_s("\nDigite o valor da linha %d e coluna %d da matriz: ", i, j);
			scanf_s("%f", &a[i][j]);

			//limpa o buffer do scanf
			fflush(stdin);
		}
	}

	printf("\n\nMatriz original\n\n");

	for (int i = 0; i < QUANTIDADE_DE_LINHAS; i++)
	{
		for (int j = 0; j < QUANTIDADE_DE_COLUNAS; j++)
		{
			printf_s("%.2f ", a[i][j]);
		}
		printf_s("\n");
	}

	divideMatrizPorNumero(a, buscaMaiorElementoDaDiagonalPrincipal(a));

	printf("\n\nMatriz resultante\n\n");

	for (int i = 0; i < QUANTIDADE_DE_LINHAS; i++)
	{
		for (int j = 0; j < QUANTIDADE_DE_COLUNAS; j++)
		{
			printf_s("%.2f ", a[i][j]);
		}
		printf_s("\n");
	}

	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}
