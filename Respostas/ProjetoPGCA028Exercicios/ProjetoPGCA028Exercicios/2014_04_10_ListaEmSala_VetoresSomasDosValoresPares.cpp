//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//Constantes
#define TAMANHO_MAXIMO_DO_VETOR 8

//Método Main - Entry Point do Programa
int mainVSVP()
{
	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa Vetores Captura e Mostrar Soma de Pares>>");
	printf("\n\n ## Autor: Leonardo Melo");

	int vetorDeInteiros[TAMANHO_MAXIMO_DO_VETOR];
	int somaDoVetor = 0;

	for (int contador = 0; contador < TAMANHO_MAXIMO_DO_VETOR; contador++)
	{
		printf("\n\nDigite o valor [%d]: ", contador + 1);
		scanf_s("%d", &vetorDeInteiros[contador]);

		if (vetorDeInteiros[contador] % 2 == 0)
		{
			somaDoVetor += vetorDeInteiros[contador];
		}
	}

	printf("\n\nSoma dos valores pares do vetor: %d", somaDoVetor);

	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}
