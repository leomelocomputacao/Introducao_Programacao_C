#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Celula
{
	int conteudo;
	Celula *prox;
};

typedef Celula Lista;

Lista *criaLista()
{
	Lista *lst;
	lst = NULL;

	return lst;
}

Celula *criaCelula(int cont)
{
	Celula *celula = (Celula *)malloc(sizeof(Celula));
	celula->conteudo = cont;
	celula->prox = NULL;

	return celula;
}

Lista *separa(Lista *l, int n)
{
	Celula *c;
	Lista *l2 = NULL;

	for (c = l; c != NULL; c = c->prox)
	{
		if (c->conteudo == n)
		{
			l2 = c->prox;
			c->prox = NULL;
			break;
		}
	}

	return l2;
}

int mainl11q1()
{
	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa funcao separa_lista_encadeada>>");
	printf("\n\n ## Autor: Leonardo Melo\n\n");

	Lista *lista = criaLista();

	Celula *a = criaCelula(3);
	lista = a;

	Celula *b = criaCelula(17);
	a->prox = b;

	Celula *c = criaCelula(5);
	b->prox = c;

	Celula *d = criaCelula(12);
	c->prox = d;

	Celula *e = criaCelula(1);
	d->prox = e;

	printf("\n\nLISTA\n\n");

	for (Celula *p = lista; p != NULL; p = p->prox)
	{
		printf("%d ", p->conteudo);
	}

	printf("\n\nSeparando...\n\n");

	Lista *lista2 = separa(lista, 5);

	printf("\n\nLISTA\n\n");

	for (Celula *p = lista; p != NULL; p = p->prox)
	{
		printf("%d ", p->conteudo);
	}

	printf("\n\nLISTA 2\n\n");

	for (Celula *p = lista2; p != NULL; p = p->prox)
	{
		printf("%d ", p->conteudo);
	}

	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}