#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

struct lista
{
	float info;
	struct lista *prox;
};

typedef struct lista Lista;

Lista *concatena(Lista *l1, Lista *l2)
{
	if (l1 != NULL){
	
		lista *p = l1;

		while (p->prox != NULL)
		{
			p = p->prox;
		}

		p->prox = l2;
	}
	else
	{
		l1 = l2;
	}

	return l1;
}

lista *criaCelulaL(float info)
{
	lista *celula = (lista *)malloc(sizeof(lista));
	celula->info = info;
	celula->prox = NULL;

	return celula;
}

int mainl11q2()
{
	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa funcao concatena_lista_encadeada>>");
	printf("\n\n ## Autor: Leonardo Melo\n\n");

	Lista *lista1 = NULL;
	Lista *lista2 = NULL;

	lista *a = criaCelulaL(2.1);
	lista *b = criaCelulaL(4.5);
	lista *c = criaCelulaL(1.0);
	
	lista *d = criaCelulaL(7.2);
	lista *e = criaCelulaL(9.8);

	lista1 = a;
	a->prox = b;
	b->prox = c;

	lista2 = d;
	d->prox = e;

	printf("\n\nLISTA 1\n\n");

	for (lista *p = lista1; p != NULL; p = p->prox)
	{
		printf("%.1f ", p->info);
	}

	printf("\n\nLISTA 2\n\n");

	for (lista *p = lista2; p != NULL; p = p->prox)
	{
		printf("%.1f ", p->info);
	}

	printf("\n\nConcatenando...\n\n");

	Lista *lista3 = concatena(lista1, lista2);

	printf("\n\nLISTA 1\n\n");

	for (lista *p = lista1; p != NULL; p = p->prox)
	{
		printf("%.1f ", p->info);
	}

	printf("\n\nLISTA 2\n\n");

	for (lista *p = lista2; p != NULL; p = p->prox)
	{
		printf("%.1f ", p->info);
	}

	printf("\n\nLISTA 3 (Concatenada)\n\n");

	for (lista *p = lista3; p != NULL; p = p->prox)
	{
		printf("%.1f ", p->info);
	}

	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}