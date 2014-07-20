//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define TAMANHO_DO_VETOR 5

//Método Main - Entry Point do Programa
int mainBS()
{
	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa Bubble Sort>>");
	printf("\n\n ## Autor: Leonardo Melo");

	//Declaração de variáveis locais
	int vetor1[TAMANHO_DO_VETOR] = { 1, 2, 3, 4, 5 };
	int vetor2[TAMANHO_DO_VETOR] = { 5, 4, 3, 2, 1 };
	int vetor3[TAMANHO_DO_VETOR] = { 1, 4, 3, 2, 5 };
	int vetor[TAMANHO_DO_VETOR];

	for (int i = 0; i < 3; i++)
	{
		if (i == 0)
        {
			for (int i = 0; i < TAMANHO_DO_VETOR; i++)
			{
				vetor[i] = vetor1[i];
			}
        }
		else
        {
			if (i == 1)
			{
				for (int i = 0; i < TAMANHO_DO_VETOR; i++)
				{
					vetor[i] = vetor2[i];
				}
			}
			else
            {
				if (i == 2)
				{
					for (int i = 0; i < TAMANHO_DO_VETOR; i++)
					{
						vetor[i] = vetor3[i];
					}
				}
            }
        }

		int auxiliar;
		int quantidadeTotalDeInversoes = 0;
		int quantidadeTotalDeIteracoes = 0;

		printf("\n\n------------------------------------------------------------------------");
		printf("\n\n |  %d  |  %d  |  %d  |  %d  |  %d  | <- Vetor antes da ordencao (CASO %d)\n", vetor[0], vetor[1], vetor[2], vetor[3], vetor[4], i + 1);

		//i de 5 até 1
		for (int i = TAMANHO_DO_VETOR - 1; i > 0; i--)
		{
			int quantidadeDeInversoes = 0;

			//j de 0 até (i - 1)
			for (int j = 0; j < i; j++)
			{
				//se antecessor > sucessor entao inverta
				if (vetor[j] > vetor[j + 1])
				{
					//inversao de 
					auxiliar = vetor[j];
					vetor[j] = vetor[j + 1];
					vetor[j + 1] = auxiliar;

					quantidadeDeInversoes++;
					quantidadeTotalDeInversoes++;
				}

				quantidadeTotalDeIteracoes++;

				printf("\n\n |  %d  |  %d  |  %d  |  %d  |  %d  | <- Ordenacao", vetor[0], vetor[1], vetor[2], vetor[3], vetor[4]);
			}

			printf(" - Quantidade de invesoes: %d\n", quantidadeDeInversoes);
		}

		printf("\nQuantidade total de invesoes: %d\n", quantidadeTotalDeInversoes);
		printf("\nQuantidade total de iteracoes: %d\n", quantidadeTotalDeIteracoes);
	}

	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}
