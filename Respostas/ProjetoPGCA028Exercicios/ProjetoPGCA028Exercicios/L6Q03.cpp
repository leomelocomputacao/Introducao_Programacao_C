//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

//Constantes
#define TAMANHO_DA_STRING 1000

//Método Main - Entry Point do Programa
int main63()
{
	//Declaração de variáveis locais
	char palavra[TAMANHO_DA_STRING];

	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa palindromo>>");
	printf("\n\n ## Autor: Leonardo Melo");

	printf("\n\nDigite uma palavra: ");
	gets_s(palavra);

	int tamanho = strlen(palavra);

	int j = tamanho - 1;

	bool ehPalindro = true;

	for (int i = 0; i < tamanho; i++)
	{
		if (palavra[i] != palavra[j])
		{
			ehPalindro = false;
			break;
		}

		j--;
	}

	if (ehPalindro)
	{
		printf_s("\n\nE palindromo");
	}
	else
	{
		printf_s("\n\nNao e palindromo");
	}

	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}
