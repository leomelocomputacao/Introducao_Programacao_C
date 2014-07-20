//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//Constantes
#define TAMANHO_MAXIMO_DO_VETOR 30

//Método Main - Entry Point do Programa
int mainBEV()
{
	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa Busca em Vetores>>");
	printf("\n\n ## Autor: Leonardo Melo");

	int vetor[TAMANHO_MAXIMO_DO_VETOR];
	int n;
	bool elementoEncontrado = false;

	printf("\n\nDigite o numero a ser pesquisado: ");
	scanf_s("%d", &n);

	for (int contador = 0; contador < TAMANHO_MAXIMO_DO_VETOR; contador++)
	{
			printf("\n\nDigite o elemento [%d] do vetor: ", contador);
			scanf_s("%d", &vetor[contador]);
	}

	for (int contador = 0; contador < TAMANHO_MAXIMO_DO_VETOR; contador++)
	{
		if (n == vetor[contador])
		{
			elementoEncontrado = true;
			printf("\n\n %d foi encontrado na posicao [%d] do vetor pesquisado.", n, contador);
		}
	}

	if (!elementoEncontrado)
	{
		printf("\n\n O numero %d nao existe no vetor pesquisado.", n);
	}
	
	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}
