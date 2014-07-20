//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

//Método Main - Entry Point do Programa
int mainaddm1206()
{
	//Declaração de variáveis locais

	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa alocacao dinamica de matrizes>>");
	printf("\n\n ## Autor: Leonardo Melo\n\n");

	int l;
	printf("\nQuantidade de linhas: ");
	scanf("%d", &l);

	int c;
	printf("\nQuantidade de colunas: ");
	scanf("%d", &c);

	int **m;
	m = (int **)malloc(l *sizeof(int));
	printf("\nAlocou linhas de m\n");


	for (int i = 0; i < l; i++)
	{
		m[i] = (int *)malloc(c * sizeof(int));
	}

	printf("\nAlocou colunas de m\n");


	for (int i = 0; i < l; i++)
	{
		for (int j = 0; j < c; j++)
		{
			printf("\nm[%d][%d]: ", i, j);
			scanf("%d", &m[i][j]);
		}
	}

	printf("\n\nMatriz m:\n\n");

	for (int i = 0; i < l; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (j == 0)
			{
				printf("|");
			}

			printf(" %d |", m[i][j]);
		}

		printf("\n");
	}

	free(m);
	printf("\n\nLiberou m\n");

	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}
