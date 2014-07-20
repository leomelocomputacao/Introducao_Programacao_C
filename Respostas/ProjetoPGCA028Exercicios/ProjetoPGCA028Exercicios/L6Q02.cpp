//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

//Constantes
#define TAMANHO_DA_STRING 1000

#define EXCLAMACAO '!'
#define INTERROGACAO '?'
#define VIRGULA ','
#define PONTO '.'


//Método Main - Entry Point do Programa
int main62()
{
	//Declaração de variáveis locais
	char frase[TAMANHO_DA_STRING];
	
	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa contador de sinais de texto>>");
	printf("\n\n ## Autor: Leonardo Melo");

	printf("\n\nDigite uma frase (com ou sem pontuacao): ");
	gets_s(frase);

	int tamanho = strlen(frase);

	int contadorInterrogacao = 0;
	int contadorExclamacao = 0;
	int contadorVirgula = 0;
	int contadorPonto = 0; 

	for (int i = 0; i < tamanho; i++)
	{
		if (frase[i] == VIRGULA)
		{
			contadorVirgula++;
		}

		if (frase[i] == PONTO)
		{
			contadorPonto++;
		}

		if (frase[i] == EXCLAMACAO)
		{
			contadorExclamacao++;
		}

		if (frase[i] == INTERROGACAO)
		{
			contadorInterrogacao++;
		}
	}

	printf_s("\n\nQuantidade de interrogacoes: %d", contadorInterrogacao);
	printf_s("\n\nQuantidade de exclamacoes: %d", contadorExclamacao);
	printf_s("\n\nQuantidade de virgulas: %d", contadorVirgula);
	printf_s("\n\nQuantidade de pontos: %d", contadorPonto);

	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}
