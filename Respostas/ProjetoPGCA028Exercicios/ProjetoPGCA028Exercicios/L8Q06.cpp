//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//Constantes
#define QUANTIDADE_DE_LINHAS 9
#define QUANTIDADE_DE_COLUNAS 9

float somaElementosEmLinhasPares(float matriz[QUANTIDADE_DE_LINHAS][QUANTIDADE_DE_COLUNAS])
{
	float soma = 0.0;

	for (int i = 0; i < QUANTIDADE_DE_LINHAS; i++)
	{
		for (int j = 0; j < QUANTIDADE_DE_COLUNAS; j++)
		{
			if (i % 2 == 0)
			{
				soma += matriz[i][j];
			}
		}
	}

	return soma;
}

//Método Main - Entry Point do Programa
int main86()
{
	//Declaração de variáveis
	float m[QUANTIDADE_DE_LINHAS][QUANTIDADE_DE_COLUNAS];
	
	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa soma dos elementos das linhas pares da matriz>>");
	printf("\n\n ## Autor: Leonardo Melo\n\n");

	for (int i = 0; i < QUANTIDADE_DE_LINHAS; i++)
	{
		for (int j = 0; j < QUANTIDADE_DE_COLUNAS; j++)
		{
			printf_s("\nDigite o valor da linha %d e coluna %d da matriz: ", i, j);
			scanf_s("%f", &m[i][j]);

			//limpa o buffer do scanf
			fflush(stdin);
		}
	}

	printf("\n\nSoma dos elementos das linhas pares: %.2f", somaElementosEmLinhasPares(m));

	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}
