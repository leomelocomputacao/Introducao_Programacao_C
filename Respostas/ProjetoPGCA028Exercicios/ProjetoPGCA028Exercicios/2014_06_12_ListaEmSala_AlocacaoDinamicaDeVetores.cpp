//Inclus�o de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

//M�todo Main - Entry Point do Programa
int main126014adv()
{
	//Declara��o de vari�veis locais

	//T�tulo do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa alocacao dinamica de vetores>>");
	printf("\n\n ## Autor: Leonardo Melo\n\n");

	int t;

	printf("\nTamanho do vetor: ");
	scanf("%d", &t);

	int *v;
	v = (int *)malloc(t * sizeof(int));
	printf("\nAlocou v\n");

	for (int i = 0; i < t; i++)
	{
		printf("\nv[%d]: ", i);
		scanf("%d", &v[i]);
	}

	printf("\n\nVetor v:\n\n");

	for (int i = 0; i < t; i++)
	{
		if (i == 0)
        {
			printf("|");
        }

		printf(" %d |", v[i]);
	}

	free(v);
	printf("\n\nLiberou v\n");

	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do m�todo main
	return(EXIT_SUCCESS);
}
