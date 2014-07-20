//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//Método Main - Entry Point do Programa
int main73E()
{
	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa informe o resultado 4>>");
	printf("\n\n ## Autor: Leonardo Melo\n\n");

	int valores[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	
	int i, j;
	
	int *iptr;
	
	iptr = &valores[0][0];
	
	for (i = 0; i < 3; i++) 
	{
		for (j = 0; j < 3; j++) 
		{	
			printf("%d ", *iptr);
			
			iptr++;
		}

		printf("\n");
	}

	//Saída: 1 2 3
	//       4 5 6
	//       7 8 9

	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}
