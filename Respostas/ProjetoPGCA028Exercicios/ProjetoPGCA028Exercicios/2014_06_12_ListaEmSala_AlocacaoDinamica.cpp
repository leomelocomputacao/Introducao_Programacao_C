//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

//Método Main - Entry Point do Programa
int main126014ad()
{
	//Declaração de variáveis locais

	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa alocacao dinamica>>");
	printf("\n\n ## Autor: Leonardo Melo\n\n");

	int *p;
	p = (int *)malloc(sizeof(int));

	if (p == NULL)
	{
		printf("\nNao alocou p\n");
	}
	else
	{
		printf("\nAlocou p\n");

		free(p);
		printf("\nLiberou p\n");

	}

	printf("\n----------------------\n");

	char *c;
	c = (char *)malloc(sizeof(char));
	printf("\nAlocou c\n");


	printf("\nDigite o valor de c (tipo char): ");
	scanf("%c", &c);
	fflush(stdin);

	printf("\nDigite o valor de c: %c\n", c);

	free(p);
	printf("\nLiberou c\n");

	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}
