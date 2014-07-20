//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

//Constantes
#define TAMANHO_DA_STRING 1000

//Método Main - Entry Point do Programa
int main65()
{
	//Declaração de variáveis locais
	char string1[TAMANHO_DA_STRING];
	char string2[TAMANHO_DA_STRING];
	bool ehIgual;

	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa comparar strings>>");
	printf("\n\n ## Autor: Leonardo Melo\n\n");


	printf("\n\nDigite o valor da string 1: ");
	gets_s(string1);

	printf("\n\nDigite o valor da string 2: ");
	gets_s(string2);

	ehIgual = false;

	for (int i = 0; string1[i] == string2[i]; ++i)
	{
		if (string1[i] == 0)
		{
			ehIgual = true;
		}
	}

	if (ehIgual)
	{
		printf_s("\n\nAs strings sao iguais.");
	}
	else
	{
		printf_s("\n\nAs strings sao diferentes.");
	}

	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}