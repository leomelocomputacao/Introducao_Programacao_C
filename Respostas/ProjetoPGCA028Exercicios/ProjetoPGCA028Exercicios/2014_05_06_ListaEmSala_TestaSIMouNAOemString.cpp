//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//Constantes
#define TAMANHO_DA_STRING_DE_LEITURA 30
#define TEXTO_1 "SIM"
#define TEXTO_2 "NAO"
#define VALOR_1 1
#define VALOR_2 0

//Método Main - Entry Point do Programa
int mainSCSN()
{
	//Declaração de variáveis locais
	char stringDigitada[TAMANHO_DA_STRING_DE_LEITURA];

	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa Comparacao SIM ou NAO em String>>");
	printf("\n\n ## Autor: Leonardo Melo");

	printf("\n\nDigite uma palavra: ");
	gets_s(stringDigitada);

	_strupr_s(stringDigitada);

	if (strcmp(stringDigitada, TEXTO_1) == 0)
	{
		printf("\n%d\n", VALOR_1);
	}
	else {

		if (strcmp(stringDigitada, TEXTO_2) == 0)
		{
			printf("\n%d\n", VALOR_2);
		}
	}

//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
printf("\n\n\n");
system("pause");

//Retorno do método main
return(EXIT_SUCCESS);
}
