//Inclus�o de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

//M�todo Main - Entry Point do Programa
int main64()
{
	//T�tulo do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa alfabeto>>");
	printf("\n\n ## Autor: Leonardo Melo\n\n");

	for (int i = 0; i < 26; i++)
	{
		printf_s("%c ", i + 97);
	}

	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do m�todo main
	return(EXIT_SUCCESS);
}