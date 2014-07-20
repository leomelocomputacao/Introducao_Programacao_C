#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <Windows.h>

#define LISTA_ENCADEADA_COM_CABECA 1
#define LISTA_ENCADEADA_SEM_CABECA 2

#define OPCAO_MAX 5
#define OPCAO_MIN 0

typedef struct posicao
{
	posicao() :x(-1), y(-1) {}
	int x, y;
	operator bool() const { return x >= 0 && y >= 0; }
};

posicao obterCursor()
{
	posicao pos;
	CONSOLE_SCREEN_BUFFER_INFO con;
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);

	if (hcon != INVALID_HANDLE_VALUE && GetConsoleScreenBufferInfo(hcon, &con))
	{
		pos.x = con.dwCursorPosition.X;
		pos.y = con.dwCursorPosition.Y;
	}

	return pos;
}

void moveCursor(int linha, int coluna)
{
	COORD c;

	c.X = coluna - 1;
	c.Y = linha - 1;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void exibeCabecalho()
{
	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa Lista Encadeada>>");
	printf("\n\n ## Autor: Leonardo Melo\n\n\n");
}

void pausa()
{
	printf("\n");
	system("pause");
}

typedef struct celula
{
	int conteudo;
	celula *seg;
};

void desenhaCelula(celula *p, int linha, int coluna, bool retorno, bool ultima)
{
	moveCursor(linha, coluna);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 201, 205, 205, 205, 205, 205, 205, 205, 205, 205, 203, 205, 205, 187);
	moveCursor(linha + 1, coluna);
	printf("%c%9d%c %c%c%c%c>", 186, p->conteudo, 186, 254, 206, 205, 205);
	moveCursor(linha + 2, coluna);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 200, 205, 205, 205, 205, 205, 205, 205, 205, 205, 202, 205, 205, 188);
	moveCursor(linha + 3, coluna);
	printf("   %x", p);

	if (!ultima){

		if (retorno)
		{
			moveCursor(linha + 1, coluna + 16);
			printf("%c", 187);
			moveCursor(linha + 2, coluna + 16);
			printf("%c", 186);
			moveCursor(linha + 3, coluna + 16);
			printf("%c", 186);
			moveCursor(linha + 4, coluna + 16);
			printf("%c", 186);
			moveCursor(linha + 5, coluna + 16);
			printf("%c", 188);

			moveCursor(linha + 5, coluna - 57);
			for (int i = 0; i < 73; i++)
			{
				printf("%c", 205);
			}

			moveCursor(linha + 5, coluna - 58);
			printf("%c", 201);

			moveCursor(linha + 6, coluna - 58);
			printf("%c", 186);

			moveCursor(linha + 7, coluna - 58);
			printf("%c", 186);

			moveCursor(linha + 8, coluna - 58);
			printf("%c", 186);

			moveCursor(linha + 9, coluna - 58);
			printf("%c%c>", 200, 205);
		}

	}
	else
	{
		moveCursor(linha + 1, coluna + 13);
		printf("%c   ", 186);
	}
}

void imprime(celula *lst)
{
	if (lst == NULL)
	{
		printf("\n\nLista vazia.\n\n");
	}
	else
	{
		printf("\n\n\n");

		posicao pos = obterCursor();
		int linha = pos.y;
		int refInicialLinha = linha;
		int coluna = 6;
		int contador = 0;
		int pagina = 1;

		celula *p;
		for (p = lst; p != NULL; p = p->seg)
		{
			if (contador == 3 && p->seg != NULL)
			{
				desenhaCelula(p, linha, coluna, true, false);
			}
			else
			{
				if (p->seg == NULL)
				{
					desenhaCelula(p, linha, coluna, false, true);
				}
				else
				{
					desenhaCelula(p, linha, coluna, false, false);
				}
			}

			contador++;
			coluna += 18;

			if (contador == 4)
			{
				contador = 0;
				coluna = 6;
				linha += 8;

				if (p->seg != NULL)
				{
					pagina++;
				}
			}
		}

		moveCursor(refInicialLinha + (8 * pagina), 6);
	}
}

void imprime_comCabeca(celula *lst)
{
	imprime(lst->seg);
}

celula* cria()
{
	celula *lst;
	lst = NULL;

	return lst;
}

celula* cria_comCabeca()
{
	celula *lst;
	lst = (celula *)malloc(sizeof(celula));
	lst->seg = NULL;

	return lst;
}

celula* busca(int x, celula *lst)
{
	celula *p;
	p = lst;

	while (p != NULL && p->conteudo != x)
	{
		p = p->seg;
	}

	return p;
}

celula* busca_comCabeca(int x, celula *lst)
{
	return busca(x, lst->seg);
}

celula* buscaRecursiva(int x, celula *lst)
{
	if (lst == NULL || lst->conteudo == x)
	{
		return lst;
	}

	return buscaRecursiva(x, lst->seg);
}

celula* buscaRecursiva_comCabeca(int x, celula *lst)
{
	return buscaRecursiva(x, lst->seg);
}

void remove_comCabeca(celula *p)
{
	celula *lixo;

	lixo = p->seg;
	p->seg = lixo->seg;

	free(lixo);
}

void remove(celula **pp)
{
	celula *lixo;

	lixo = *pp;
	*pp = lixo->seg;

	free(lixo);
}

void insere_comCabeca(int y, celula *p)
{
	celula *nova;

	nova = (celula *)malloc(sizeof(celula));

	nova->conteudo = y;
	nova->seg = p->seg;
	p->seg = nova;
}

void insere(int y, celula *p)
{
	insere_comCabeca(y, p);
}

void insere_primeira_posicao(int y, celula **p)
{
	celula *nova;

	nova = (celula *)malloc(sizeof(celula));

	nova->conteudo = y;
	nova->seg = *p;
	*p = nova;
}

void buscaERemove_comCabeca(int x, celula *lst)
{
	celula *p, *q;
	
	p = lst;
	q = lst->seg; 

	while (q != NULL && q->conteudo != x)
	{
		p = q;
		q = q->seg;
	}

	if (q != NULL)
	{
		p->seg = q->seg;
		free(q);
	}
}

void buscaEInsere_comCabeca(int y, int x, celula *lst)
{
	celula *p, *q, *nova;

	nova = (celula *)malloc(sizeof(celula));

	nova->conteudo = y;

	p = lst;
	q = lst->seg;

	while (q != NULL && q->conteudo != x)
	{
		p = q;
		q = q->seg;
	}

	nova->seg = q;
	p->seg = nova;
}

//Método Main - Entry Point do Programa
int main()
{
	int tipoLista;

	do{
		system("cls");
		exibeCabecalho();

		printf("\nTIPO DE LISTA ENCADEADA\n");
		printf("\n%d - Com Cabeca", LISTA_ENCADEADA_COM_CABECA);
		printf("\n%d - Sem Cabeca", LISTA_ENCADEADA_SEM_CABECA);

		printf("\n\nDigite sua opcao: ");
		scanf("%d", &tipoLista);
		fflush(stdin);

		if (tipoLista != LISTA_ENCADEADA_COM_CABECA && tipoLista != LISTA_ENCADEADA_SEM_CABECA)
		{
			printf("\n\nOpcao invalida.\nDigite %d ou %d.\n\n", LISTA_ENCADEADA_COM_CABECA, LISTA_ENCADEADA_SEM_CABECA);
			pausa();
		}
		else
		{
			break;
		}

	} while (true);

	celula *lst = NULL;

	switch (tipoLista)
	{
	case 1:
		lst = cria_comCabeca();
		break;
	case 2:
		lst = cria();
		break;
	}

	int escolha = -1;

	do
	{
		system("cls");
		exibeCabecalho();

		if (tipoLista == LISTA_ENCADEADA_COM_CABECA)
		{
			printf("\nMENU - LISTA ENCADEADA COM CABECA\n");
		}
		else
		{
			if (tipoLista == LISTA_ENCADEADA_SEM_CABECA)
			{
				printf("\nMENU - LISTA ENCADEADA SEM CABECA\n");
			}
		}

		printf("\n1 - Inserir");
		printf("\n2 - Alterar");
		printf("\n3 - Excluir");
		printf("\n4 - Busca");
		printf("\n5 - Imprimir");
		printf("\n0 - Sair");

		printf("\n\nDigite sua opcao: ");
		scanf("%d", &escolha);
		fflush(stdin);

		if (escolha > OPCAO_MAX || tipoLista < OPCAO_MIN)
		{
			printf("\n\nOpcao invalida.\nDigite um numero entre %d ou %d.\n\n", OPCAO_MIN, OPCAO_MAX);
			pausa();
		}

		celula *p = NULL;

		switch (escolha)
		{
		case 1:
			int valorDaCelulaAnterior;

			printf("Digite o valor da celula anterior: ");
			scanf("%d", &valorDaCelulaAnterior);

			int valorDaNovaCelula;

			printf("Digite o valor da nova celula: ");
			scanf("%d", &valorDaNovaCelula);

			switch (tipoLista)
			{
			case 1:
				p = buscaRecursiva_comCabeca(valorDaCelulaAnterior, lst);

				if (p == NULL)
				{
					insere_comCabeca(valorDaNovaCelula, lst);
				}
				else
				{
					insere_comCabeca(valorDaNovaCelula, p);
				}

				imprime_comCabeca(lst);
				break;
			case 2:
				p = buscaRecursiva(valorDaCelulaAnterior, lst);

				if (p == NULL)
				{
					insere_primeira_posicao(valorDaNovaCelula, &lst);
				}
				else
				{
					insere(valorDaNovaCelula, p);
				}

				imprime(lst);
				break;
			}

			pausa();
			break;
		case 2:

			break;
		case 3:

			break;
		case 4:
			int valorDaCelula;
			printf("Digite o valor da celula procurada: ");
			scanf("%d", &valorDaCelula);

			switch (tipoLista)
			{
			case 1:
				p = buscaRecursiva_comCabeca(valorDaCelula, lst);
				break;
			case 2:
				p = buscaRecursiva(valorDaCelula, lst);
				break;
			}

			if (p == NULL)
			{
				printf("\n\nCelula inexistente.\n\n");
			}
			else
			{
				printf("\n\nEndereco: %x Conteudo: %d\n\n", p, p->conteudo);
			}

			pausa();
			break;
		case 5:
			switch (tipoLista)
			{
			case 1:
				imprime_comCabeca(lst);
				break;
			case 2:
				imprime(lst);
				break;
			}

			pausa();
			break;
		}

	} while (escolha != 0);

	printf("\n\nFinalizando o programa...\n\n");

	pausa();

	//Retorno do método main
	return(EXIT_SUCCESS);
}
