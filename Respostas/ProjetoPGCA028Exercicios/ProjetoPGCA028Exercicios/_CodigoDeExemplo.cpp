//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

//Constantes
#define TAMANHO_DA_STRING 1000

//Método Main - Entry Point do Programa
int mainExemplo()
{
	//Declaração de variáveis locais

	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa exemplo>>");
	printf("\n\n ## Autor: Leonardo Melo\n\n");

	int vet[] = { 4, 5, 6 };
	
	int j, *ptr;
	
	ptr = vet;
	
	for (j = 0; j < 3; j++)
	{
		printf("%d ", (*ptr++) + 1);
	}

	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}
