//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//Método Main - Entry Point do Programa
int main73c()
{
	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa informe o resultado 3>>");
	printf("\n\n ## Autor: Leonardo Melo\n\n");

	int *v[5];
	
	int i;
	
	int k = 7;
	
	for (i = 0; i < 5; i++)
	{
		v[i] = &i;
	}

	v[2] = &k;
	
	for (i = 0; i < 5; i++)
	{
		printf("%d ", *v[i]);
	}

	//resultado da saída na tela: 0 1 7 3 4
	
	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}
