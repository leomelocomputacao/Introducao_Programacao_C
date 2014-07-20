//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//Constantes
#define TAMANHO_MAXIMO_DO_VETOR 10

//Método Main - Entry Point do Programa
int mainTV()
{
	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa tranformacao de vetores>>");
	printf("\n\n ## Autor: Leonardo Melo");

	int vetorA[TAMANHO_MAXIMO_DO_VETOR];
	int vetorB[TAMANHO_MAXIMO_DO_VETOR];
	bool elementoEncontrado = false;

	for (int contador = 0; contador < TAMANHO_MAXIMO_DO_VETOR; contador++)
	{
		printf("\n\nDigite o elemento de indice [%d] do vetor A: ", contador);
		scanf_s("%d", &vetorA[contador]);
	}

	for (int contador = 0; contador < TAMANHO_MAXIMO_DO_VETOR; contador++)
	{
		//se indice par
		if (contador % 2 == 0)
		{
			vetorB[contador] = vetorA[contador] * 5;
		}
		else //indice impar
		{
			vetorB[contador] = vetorA[contador] + 5;
		}
	}

	for (int contador = 0; contador < TAMANHO_MAXIMO_DO_VETOR; contador++)
	{
		printf("\n\n Vetor A na posicao [%d] = %5d    (===)    Vetor B na posicao [%d] = %5d", contador, vetorA[contador], contador, vetorB[contador]);
	}

	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}
