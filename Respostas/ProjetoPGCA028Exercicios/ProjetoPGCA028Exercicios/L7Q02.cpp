//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//Método Main - Entry Point do Programa
int main72()
{
	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa encontre o erro>>");
	printf("\n\n ## Autor: Leonardo Melo\n\n");

	int x, *p;

	x = 100;
	//p = x; errado pois p e um ponteiro e deve receber o endereço de memoria de x e não o seu valor
	p = &x; // <==== correto

	printf("Valor de p : %d.\n", *p);

	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}
