//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//Contantes
#define TAMANHO_DA_STRING_DE_LEITURA 100

//Método Main - Entry Point do Programa
int mainrfh()
{
	//Declaração de variáveis locais
	char first[TAMANHO_DA_STRING_DE_LEITURA];
	char last[TAMANHO_DA_STRING_DE_LEITURA];

	strcpy_s(first, " Rutherford ");
	strcpy_s(last, "Hayes");

	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa Varias Comparacoes em String>>");
	printf("\n\n ## Autor: Leonardo Melo");

	printf_s("\n----------------------------------------------------------\n");

	printf_s("\n\nCOMANDO: int n = strlen(first);\n");
	int n = strlen(first);
	printf_s("RESULTADO -> n: %d\n", n);
	
	printf_s("\n----------------------------------------------------------\n");

	printf_s("\nCOMANDO: strcpy_s(first, last);\n");
	strcpy_s(first, last);
	printf_s("\nRESULTADO -> first: %s e last: %s\n", first, last);

	printf_s("\n----------------------------------------------------------\n");

	printf_s("\nCOMANDO: strncpy_s(first, last, 3);\n");
	strncpy_s(first, last, 3);
	printf_s("\nRESULTADO -> first: %s e last: %s\n", first, last);

	printf_s("\n----------------------------------------------------------\n");

	printf_s("\nCOMANDO: strcat_s(first, last);");
	strcat_s(first, last);
	printf_s("\nRESULTADO -> first: %s e last: %s\n", first, last);

	printf_s("\n----------------------------------------------------------\n");

	printf_s("\nCOMANDO: strncat_s(first, last, 3);\n");
	strncat_s(first, last, 3);
	printf_s("\nRESULTADO -> first: %s e last: %s\n", first, last);

	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}
