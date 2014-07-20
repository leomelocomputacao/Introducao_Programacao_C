//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//Método Main - Entry Point do Programa
int main71()
{
	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa resultado de X,Y e P >>");
	printf("\n\n ## Autor: Leonardo Melo\n\n");

	int x, y, *p;

	y = 0;
	p = &y;
	
	x = *p;
	
	x = 4;
	
	(*p)++;
	
	--x;
	
	(*p) += x;

	//x: 3, y: 4 e p:&y (contém o endereço de y).

	printf_s("X: %d, Y : %d e P: %x", x, y, p);
	
	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}
