#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

struct lst
{
	float info;
	struct lst *prox;
};

typedef struct lst Lista;

lst *criaCelulaLst(float info)
{
	lst *celula = (lst *)malloc(sizeof(lst));
	celula->info = info;
	celula->prox = NULL;

	return celula;
}

Lista *retira_prefixo(Lista *l, int n)
{
	Lista *lr = NULL;

	int cont = 0;

	for (lst *p = l; p != NULL; p = p->prox)
	{
		if (cont == n)
		{
			lr = p;
		}

		cont++;
	}

	return lr;
}

int mainl11q4()
{
	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa remove n elementos da list. encad.>>");
	printf("\n\n ## Autor: Leonardo Melo\n\n");

	Lista *lista = NULL;

	lst *a = criaCelulaLst(2.1);
	lst *b = criaCelulaLst(4.5);
	lst *c = criaCelulaLst(1.0);
	lst *d = criaCelulaLst(7.2);
	lst *e = criaCelulaLst(9.8);

	lista = a;
	a->prox = b;
	b->prox = c;
	c->prox = d;
	d->prox = e;

	printf("\n\nLISTA\n\n");

	for (lst *p = lista; p != NULL; p = p->prox)
	{
		printf("%.1f ", p->info);
	}

	int numero;

	printf("\n\nInforme o numero de elementos que deseja remover: ");
	scanf("%d", &numero);

	Lista *listaResultante = retira_prefixo(lista, numero);

	printf("\n\nLISTA RESULTANTE\n\n");

	for (lst *p = listaResultante; p != NULL; p = p->prox)
	{
		printf("%.1f ", p->info);
	}

	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}