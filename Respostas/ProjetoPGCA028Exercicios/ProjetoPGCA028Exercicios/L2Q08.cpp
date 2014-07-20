//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//Constantes
#define PERCENTUAL_IMPOSTO_ESTADO_1 35.0
#define PERCENTUAL_IMPOSTO_ESTADO_2 25.0
#define PERCENTUAL_IMPOSTO_ESTADO_3 15.0
#define PERCENTUAL_IMPOSTO_ESTADO_4 5.0
#define PERCENTUAL_IMPOSTO_ESTADO_5 0.0

#define PRECO_DO_QUILO_PARA_CODIGO_DE_CARGA_DE_10_A_20 100.0
#define PRECO_DO_QUILO_PARA_CODIGO_DE_CARGA_DE_21_A_30 250.0
#define PRECO_DO_QUILO_PARA_CODIGO_DE_CARGA_DE_31_A_40 340.0

#define CODIGO_MAXIMO_DE_ESTADO 5 
#define CODIGO_MINIMO_DE_ESTADO 1

#define CODIGO_MAXIMO_DE_CARGA 40 
#define CODIGO_MINIMO_DE_CARGA 10

#define PESO_MINIMO_DA_CARGA_DO_CAMINHAO 0

#define MULTIPLICADOR_PARA_TRANSFORMAR_TONELADAS_EM_QUILOS 1000

#define DENOMINADOR_DE_TRANSFORMACAO_PERCENTUAL_PARA_DECIMAL 100.0

//Método Main - Entry Point do Programa
int main28()
{
	//Declaração de variáveis locais
	int codigoEstadoDaCarga = 0;
	int codigoDaCarga = 0;
	float pesoDaCargaEmToneladas = 0.0;
	float pesoDaCargaEmQuilos = 0.0;
	float precoDaCarga = 0.0;
	double valorDoImposto = 0.0;
	double precoTotalDaCarga = 0.0;
	bool dadosDeEntradaValidos = true;

	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa Carga de Caminhao>>");
	printf("\n\n ## Autor: Leonardo Melo");

	//Captura de dados do teclado
	printf("\n\n\n =>> Digite o codigo do estado de origem da carga do caminhao: ");
	scanf_s("%d", &codigoEstadoDaCarga);

	//Captura de dados do teclado
	printf("\n\n\n =>> Digite o digite o peso da carga do caminhão (toneladas): ");
	scanf_s("%f", &pesoDaCargaEmToneladas);

	//Captura de dados do teclado
	printf("\n\n\n =>> Digite o digite o codigo da carga do caminhao: ");
	scanf_s("%d", &codigoDaCarga);

	//validacoes
	if (codigoEstadoDaCarga < CODIGO_MINIMO_DE_ESTADO || codigoEstadoDaCarga > CODIGO_MAXIMO_DE_ESTADO)
	{
		dadosDeEntradaValidos = false;
	}

	//validacoes
	if (pesoDaCargaEmToneladas < PESO_MINIMO_DA_CARGA_DO_CAMINHAO)
	{
		dadosDeEntradaValidos = false;
	}

	//validacoes
	if (codigoDaCarga < CODIGO_MINIMO_DE_CARGA || codigoDaCarga > CODIGO_MAXIMO_DE_CARGA)
	{
		dadosDeEntradaValidos = false;
	}

	//Calculo e Exibição de resposta
	if (dadosDeEntradaValidos)
	{
		pesoDaCargaEmQuilos = pesoDaCargaEmToneladas * MULTIPLICADOR_PARA_TRANSFORMAR_TONELADAS_EM_QUILOS;

		printf("\n\n # Peso da carga em KG: %.2f", pesoDaCargaEmQuilos);

		if (codigoDaCarga >= 10 && codigoDaCarga <= 20)
		{
			precoDaCarga = pesoDaCargaEmQuilos * (float)PRECO_DO_QUILO_PARA_CODIGO_DE_CARGA_DE_10_A_20;
		}
		else
		{
			if (codigoDaCarga >= 21 && codigoDaCarga <= 30)
			{
				precoDaCarga = pesoDaCargaEmQuilos * (float)PRECO_DO_QUILO_PARA_CODIGO_DE_CARGA_DE_21_A_30;
			}
			else
			{
				precoDaCarga = pesoDaCargaEmQuilos * (float)PRECO_DO_QUILO_PARA_CODIGO_DE_CARGA_DE_31_A_40;
			}
		}

		printf("\n\n # Preco da carga: R$ %.2f", precoDaCarga);

		switch (codigoEstadoDaCarga)
		{
		case 1:
			valorDoImposto = precoDaCarga * (PERCENTUAL_IMPOSTO_ESTADO_1 / DENOMINADOR_DE_TRANSFORMACAO_PERCENTUAL_PARA_DECIMAL);
			break;
		case 2:			
			valorDoImposto = precoDaCarga * (PERCENTUAL_IMPOSTO_ESTADO_2 / DENOMINADOR_DE_TRANSFORMACAO_PERCENTUAL_PARA_DECIMAL);
			break;
		case 3:
			valorDoImposto = precoDaCarga * (PERCENTUAL_IMPOSTO_ESTADO_3 / DENOMINADOR_DE_TRANSFORMACAO_PERCENTUAL_PARA_DECIMAL);
			break;
		case 4:
			valorDoImposto = precoDaCarga * (PERCENTUAL_IMPOSTO_ESTADO_4 / DENOMINADOR_DE_TRANSFORMACAO_PERCENTUAL_PARA_DECIMAL);
			break;
		case 5:
			valorDoImposto = precoDaCarga * (PERCENTUAL_IMPOSTO_ESTADO_5 / DENOMINADOR_DE_TRANSFORMACAO_PERCENTUAL_PARA_DECIMAL);
			break;
		}

		printf("\n\n # Valor do imposto: R$ %.2lf", valorDoImposto);

		precoTotalDaCarga = precoDaCarga + valorDoImposto;

		printf("\n\n # Preco total da Carga: R$ %.2lf", precoTotalDaCarga);

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
