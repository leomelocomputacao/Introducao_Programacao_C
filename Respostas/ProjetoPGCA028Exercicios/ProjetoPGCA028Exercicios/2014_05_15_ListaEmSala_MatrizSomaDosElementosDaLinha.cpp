//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO_DA_LINHA 20
#define TAMANHO_DA_COLUNA 20

int mainec()
{
	float matriz[TAMANHO_DA_LINHA][TAMANHO_DA_COLUNA];
	float vetorResultante[TAMANHO_DA_LINHA];

	for (int linha = 0; linha < TAMANHO_DA_LINHA; linha++)
	{
		vetorResultante[linha] = 0.0;
	}

	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa Soma dos Elementos da Linha da Matriz>>");
	printf("\n\n ## Autor: Leonardo Melo\n\n");

	for (int linha = 0; linha < TAMANHO_DA_LINHA; linha++)
	{
		for (int coluna = 0; coluna < TAMANHO_DA_COLUNA; coluna++)
		{
			printf_s("\nDigite um numero para a linha %d e coluna %d: ", linha, coluna);
			scanf_s("%f", &matriz[linha][coluna]);

			vetorResultante[linha] += matriz[linha][coluna];
		}
	}

	printf_s("\nMatriz\n");

	for (int linha = 0; linha < TAMANHO_DA_LINHA; linha++)
	{
		for (int coluna = 0; coluna < TAMANHO_DA_COLUNA; coluna++)
		{
			printf_s(" %5.2f ", matriz[linha][coluna]);
		}

		printf_s("\n");
	}

	printf_s("\nVetor Resultante\n");

	for (int linha = 0; linha < TAMANHO_DA_LINHA; linha++)
	{
			printf_s("(Linha %d - Soma: %.2f)\n",linha, vetorResultante[linha]);
	}

	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}