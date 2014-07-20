//Importando bibliotecas
#include <stdio.h>
#include <stdlib.h>

//Método main - entry point
int main34()
{
	int antecessor = 0;
	int sucessor = 1;
	int soma = 0;

	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa Fibonacci>>");
	printf("\n\n ## Autor: Leonardo Melo");

	for (int contador = 1; contador <= 10; contador++)
	{
		printf("\n\n%d", antecessor);

		soma = antecessor + sucessor;
		antecessor = sucessor;
		sucessor = soma;
	}

	//Pula linha e pausa a tela
	printf("\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}