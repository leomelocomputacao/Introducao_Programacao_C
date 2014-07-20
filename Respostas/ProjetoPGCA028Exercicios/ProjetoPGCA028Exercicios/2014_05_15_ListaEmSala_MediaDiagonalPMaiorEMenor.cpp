//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO_DA_LINHA 10
#define TAMANHO_DA_COLUNA 10

int mainmmdp()
{
	int matriz[TAMANHO_DA_LINHA][TAMANHO_DA_COLUNA];
	float media = 0;
	int maiorNumero = -9999999999999;
	int menorNumero = 9999999999999;

	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa Media da Diagonal Principal e Maior/Menor>>");
	printf("\n\n ## Autor: Leonardo Melo\n\n");

	for (int linha = 0; linha < TAMANHO_DA_LINHA; linha++)
	{
		for (int coluna = 0; coluna < TAMANHO_DA_COLUNA; coluna++)
		{
			printf_s("\nDigite um numero para a linha %d e coluna %d: ", linha, coluna);
			scanf_s("%d", &matriz[linha][coluna]);

			if (linha == coluna)
			{
				media += matriz[linha][coluna];

				if (matriz[linha][coluna] > maiorNumero)
				{
					maiorNumero = matriz[linha][coluna];
				}

				if (matriz[linha][coluna] < menorNumero)
				{
					menorNumero = matriz[linha][coluna];
				}
			}
		}
	}

	media = media / TAMANHO_DA_LINHA;

	printf_s("\nMatriz\n");

	for (int linha = 0; linha < TAMANHO_DA_LINHA; linha++)
	{
		for (int coluna = 0; coluna < TAMANHO_DA_COLUNA; coluna++)
		{
			printf_s(" %4d ", matriz[linha][coluna]);
		}

		printf_s("\n");
	}

	printf_s("\nMedia da diagonal principal: %.2f", media);
	printf_s("\nMaior elemento da diagonal: %d", maiorNumero);
	printf_s("\nMenor elemento da diagonal: %d", menorNumero);

	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}