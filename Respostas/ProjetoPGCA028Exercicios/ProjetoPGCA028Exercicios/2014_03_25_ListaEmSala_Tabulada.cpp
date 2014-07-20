//Importando bibliotecas
#include <stdio.h>
#include <stdlib.h>

//Método main - entry point
int mainTabuada()
{
	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa Tabuada>>");
	printf("\n\n ## Autor: Leonardo Melo");

	for (int linha = 1; linha <= 5; linha++)
	{
		printf("\n\n Tabuada de %d", linha);

		for (int coluna = 1; coluna <= 10; coluna++)
		{
			printf("\n\n %d x %d = %d", linha, coluna, linha*coluna);
		}
	}

	//Pula linha e pausa a tela
	printf("\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}
