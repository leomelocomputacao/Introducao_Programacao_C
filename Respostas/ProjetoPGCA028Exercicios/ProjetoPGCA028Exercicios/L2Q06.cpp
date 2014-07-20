//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//Constantes
#define TEXTO_CATEGORIA_DE_PRODUTO_1 "Alimento Nao-Perecivel"
#define TEXTO_CATEGORIA_DE_PRODUTO_2_3_4 "Alimento Perecivel"
#define TEXTO_CATEGORIA_DE_PRODUTO_5_6 "Vetuario"
#define TEXTO_CATEGORIA_DE_PRODUTO_7 "Higiene pessoal"
#define TEXTO_CATEGORIA_DE_PRODUTO_8_A_15 "Limpeza e Utensilios Domesticos"

//Método Main - Entry Point do Programa
int main26()
{
	//Declaração de variáveis locais
	int codigoDoProduto = 0;
	bool dadosDeEntradaValidos = true;

	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa Classificacao do Produto>>");
	printf("\n\n ## Autor: Leonardo Melo");

	//Captura de dados do teclado
	printf("\n\n\n =>> Digite o codigo do produto: ");
	scanf_s("%d", &codigoDoProduto);

	//validacoes
	if (codigoDoProduto < 1 || codigoDoProduto > 15)
	{
		dadosDeEntradaValidos = false;
	}

	//Calculo e Exibição de resposta
	if (dadosDeEntradaValidos)
	{
		switch (codigoDoProduto)
		{
		case 1:
			printf("\n\n # Codigo do Produto: %d - Categoria do Produto: %s", codigoDoProduto, TEXTO_CATEGORIA_DE_PRODUTO_1);
			break;
		case 2: case 3: case 4:
			printf("\n\n # Codigo do Produto: %d - Categoria do Produto: %s", codigoDoProduto, TEXTO_CATEGORIA_DE_PRODUTO_2_3_4);
			break;
		case 5: case 6:
			printf("\n\n # Codigo do Produto: %d - Categoria do Produto: %s", codigoDoProduto, TEXTO_CATEGORIA_DE_PRODUTO_5_6);
			break;
		case 7:
			printf("\n\n # Codigo do Produto: %d - Categoria do Produto: %s", codigoDoProduto, TEXTO_CATEGORIA_DE_PRODUTO_7);
			break;
		default:
			printf("\n\n # Codigo do Produto: %d - Categoria do Produto: %s", codigoDoProduto, TEXTO_CATEGORIA_DE_PRODUTO_8_A_15);
			break;
		}
	}
	else
	{
		//Mostra uma mensagem de exceção
		printf("\n\n # Dado(s) de entrada invalido(s)!");
	}

	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}
