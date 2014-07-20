//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define TAMANHO_DO_VETOR 10
#define QUANTIDADE_MINIMA_DE_PECAS_VENDIDAS 1
#define PRECO_MINIMO_DE_UMA_PECA_A_SER_VENDIDA 0.01

//Método Main - Entry Point do Programa
int main51()
{
	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa Vendedores>>");
	printf("\n\n ## Autor: Leonardo Melo\n\n");

	//Declaração de variáveis locais
	int quantidadeDePecasVendidas[TAMANHO_DO_VETOR];
	double precoDaPecaVendida[TAMANHO_DO_VETOR];
	double valorTotalDaVenda[TAMANHO_DO_VETOR];
	bool dadosDeEntradaValidos;
	int quantidadeTotalDePecasVendidasPorTodosVendedores = 0;

	for (int i = 0; i < TAMANHO_DO_VETOR; i++)
	{
		do{
			dadosDeEntradaValidos = true;

			printf("\nInforme a quantidade de pecas vendidas pelo vendedor %d: ", i + 1);
			scanf_s("%d", &quantidadeDePecasVendidas[i]);

			if (quantidadeDePecasVendidas[i] < QUANTIDADE_MINIMA_DE_PECAS_VENDIDAS)
			{
				printf("\n\nEntrada Invalida!\nA quantidade de pecas vendidas nao pode ser menor que %d.\n", QUANTIDADE_MINIMA_DE_PECAS_VENDIDAS);

				dadosDeEntradaValidos = false;
			}

		} while (!dadosDeEntradaValidos);

		do{
			dadosDeEntradaValidos = true;

			printf("\nInforme o preco da peca vendida pelo vendedor %d: ", i + 1);
			scanf_s("%lf", &precoDaPecaVendida[i]);

			if (precoDaPecaVendida[i] < PRECO_MINIMO_DE_UMA_PECA_A_SER_VENDIDA)
			{
				printf("\n\nEntrada Invalida!\nO preco de uma peca a ser vendida nao pode ser menor que %.2lf.\n", PRECO_MINIMO_DE_UMA_PECA_A_SER_VENDIDA);

				dadosDeEntradaValidos = false;
			}


		} while (!dadosDeEntradaValidos);

		quantidadeTotalDePecasVendidasPorTodosVendedores += quantidadeDePecasVendidas[i];

		valorTotalDaVenda[i] = quantidadeDePecasVendidas[i] * precoDaPecaVendida[i];
	}

	printf_s("\n\n\nQuantidade total de pecas vendidas por todos vendedores: %d\n", quantidadeTotalDePecasVendidasPorTodosVendedores);

	for (int i = 0; i < TAMANHO_DO_VETOR; i++)
	{
		printf_s("\nVendedor %4d, valor total da sua venda: R$ %.2lf ", i + 1, valorTotalDaVenda[i]);
	}

	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);

}
