#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

struct list
{
	int info;
	struct list *prox;
};

typedef struct list Lista;

Lista *constroi(int n, int *v)
{
	Lista * lista = NULL;
	list *celulaAnt = NULL;
	
	for (int i = 0; i < n; i++)
	{
		list *celula = (list *)malloc(sizeof(list));
		celula->info = v[i];
		celula->prox = NULL;

		if (i == 0)
		{
			lista = celula;
		}
		else
		{
			celulaAnt->prox = celula;
		}

		celulaAnt = celula;
	}

	return lista;
}

int mainl11q3()
{
	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa funcao constroi lista encad.>>");
	printf("\n\n ## Autor: Leonardo Melo\n\n");

	int vetor[5] = { 3, 8, 1, 7, 2 };

	printf("\n\nVETOR\n\n");

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", vetor[i]);
	}

	Lista *lista = constroi(5, vetor);

	printf("\n\nLISTA\n\n");

	for (list *p = lista; p != NULL; p = p->prox)
	{
		printf("%d ", p->info);
	}

	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}