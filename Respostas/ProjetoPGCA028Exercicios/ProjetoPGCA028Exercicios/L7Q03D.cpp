//Inclus�o de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//M�todo Main - Entry Point do Programa
int main73D()
{
	//T�tulo do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa informe o resultado 4>>");
	printf("\n\n ## Autor: Leonardo Melo\n\n");

	int vetor[] = { 10, 20, 30, 40, 50 };

	int *p1, *p2;

	int i = 100;

	p1 = &vetor[2];
	printf("%d\n", *p1); // sa�da: 30
	
	p2 = &i;
	printf("%d\n", *p2); // sa�da: 100
	
	p2 = p1;
	printf("%d\n", *p2); // sa�da: 30

	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do m�todo main
	return(EXIT_SUCCESS);
}
