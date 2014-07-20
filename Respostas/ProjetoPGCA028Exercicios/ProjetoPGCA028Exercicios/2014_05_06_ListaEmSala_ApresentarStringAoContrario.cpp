//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

//Constantes
#define TAMANHO_DA_STRING_DE_LEITURA 100

//Método Main - Entry Point do Programa
int mainESC()
{
	//Declaração de variáveis locais
	char nomeDigitado[TAMANHO_DA_STRING_DE_LEITURA];
	int tamanhoDaString;

	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa Apresentar String ao Contrario>>");
	printf("\n\n ## Autor: Leonardo Melo");
	
	printf("\n\nDigite um texto: ");

	gets_s(nomeDigitado);
	puts(nomeDigitado);

	tamanhoDaString = strlen(nomeDigitado);

	for (int i = tamanhoDaString - 1; i >= 0; i--){	
		printf("%c", nomeDigitado[i]);
	}

	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}
