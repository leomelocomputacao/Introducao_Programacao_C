//Inclus�o de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//M�todo Main - Entry Point do Programa
int main73b()
{
	//T�tulo do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa informe o resultado 2>>");
	printf("\n\n ## Autor: Leonardo Melo\n\n");

	int a;

	int *p = &a;
	
	*p = 10;
	
	// O valor de a neste momento � 10


	printf("%d", a);
	
	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do m�todo main
	return(EXIT_SUCCESS);
}
