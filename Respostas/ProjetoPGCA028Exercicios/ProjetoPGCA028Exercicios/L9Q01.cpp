//Inclus�o de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	char nome[100];
	float preco;
	char fabricante[100];
} tipoProduto;

//M�todo Main - Entry Point do Programa
int main91()
{
	//T�tulo do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa estruct basico>>");
	printf("\n\n ## Autor: Leonardo Melo\n\n");

	tipoProduto produto;

	printf_s("\nDigite o NOME do produto: ");
	gets_s(produto.nome);
	fflush(stdin);

	printf_s("\nDigite o PRECO do produto: ");
	scanf_s("%f", &produto.preco);
	fflush(stdin);

	printf_s("\nDigite o FABRICANTE do produto: ");
	gets_s(produto.fabricante);
	fflush(stdin);

	printf_s("\n\nExibindo os dados do produto");

	printf_s("\n\n NOME do Produto: %s", produto.nome);
	printf_s("\n PRECO do Produto: %.2f", produto.preco);
	printf_s("\n FABRICANTE do Produto: %s", produto.fabricante);

	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do m�todo main
	return(EXIT_SUCCESS);
}
