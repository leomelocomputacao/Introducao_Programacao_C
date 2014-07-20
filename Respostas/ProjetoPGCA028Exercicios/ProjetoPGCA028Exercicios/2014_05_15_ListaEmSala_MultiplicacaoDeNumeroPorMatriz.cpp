//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO_DA_LINHA 4
#define TAMANHO_DA_COLUNA 4

int mainnpm()
{
	int matriz[TAMANHO_DA_LINHA][TAMANHO_DA_COLUNA];
	int matrizResultante[TAMANHO_DA_LINHA][TAMANHO_DA_COLUNA];
	int numeroDigitado;

	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa Multiplicar Matriz por Numero>>");
	printf("\n\n ## Autor: Leonardo Melo\n\n");

	printf_s("Digite o numero que ira multiplicar a matriz: ");
	scanf_s("%d", &numeroDigitado);

	for (int linha = 0; linha < TAMANHO_DA_LINHA; linha++)
	{
		for (int coluna = 0; coluna < TAMANHO_DA_COLUNA; coluna++)
		{
			printf_s("\nDigite um numero para a linha %d e coluna %d: ", linha, coluna);
			scanf_s("%d", &matriz[linha][coluna]);

			matrizResultante[linha][coluna] = matriz[linha][coluna] * numeroDigitado;
		}
	}

	printf_s("\nMatriz\n");

	for (int linha = 0; linha < TAMANHO_DA_LINHA; linha++)
	{
		for (int coluna = 0; coluna < TAMANHO_DA_COLUNA; coluna++)
		{
			printf_s(" %4d ", matriz[linha][coluna]);
		}

		printf_s("\n");
	}

	printf_s("\nMatriz Resultante\n");

	for (int linha = 0; linha < TAMANHO_DA_LINHA; linha++)
	{
		for (int coluna = 0; coluna < TAMANHO_DA_COLUNA; coluna++)
		{
			printf_s(" %4d ", matrizResultante[linha][coluna]);
		}

		printf_s("\n");
	}

	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}