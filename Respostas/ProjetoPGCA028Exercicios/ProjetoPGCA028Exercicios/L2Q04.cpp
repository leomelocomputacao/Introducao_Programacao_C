//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//Constantes
#define VALOR_MINIMO_VEICULAR 1000
#define DENOMINADOR_DE_TRANSFORMACAO_PERCENTUAL_PARA_DECIMAL 100.0

enum percentualDoDistribuidor
{
	PD_ACIMA_DE_40000_00 = 15,
	PD_DE_30000_01_ATE_40000_00 = 10,
	PD_ATE_30000_00 = 5
};

typedef enum percentualDoDistribuidor tipoPercentualDoDistribuidor;

enum percentualDoImposto
{
	PI_ACIMA_DE_40000_00 = 20,
	PI_DE_30000_01_ATE_40000_00 = 15,
	PI_ATE_30000_00 = 0
};

typedef enum percentualDoImposto tipoPercentualDoImposto;


//Método Main - Entry Point do Programa
int main24()
{
	//Declaração de variáveis locais
	float custoDeFabrica = 0.0;
	double custoAoConsumidor = 0.0;
	double valorPagoAoDistribuidor = 0.0;
	double valorDoImposto = 0.0;
	tipoPercentualDoDistribuidor percentualDoDistribuidor = PD_ACIMA_DE_40000_00;
	tipoPercentualDoImposto percentualDoImposto = PI_ACIMA_DE_40000_00;
	bool dadosDeEntradaValidos = true;

	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa Custo do Veiculo ao Consumidor>>");
	printf("\n\n ## Autor: Leonardo Melo");

	//Captura de dados do teclado
	printf("\n\n\n =>> Digite o custo de fabrica do veiculo: ");
	scanf_s("%f", &custoDeFabrica);

	//validacoes
	if (custoDeFabrica < VALOR_MINIMO_VEICULAR)
	{
		dadosDeEntradaValidos = false;
	}

	//Calculo da concessão de desconto
	if (dadosDeEntradaValidos)
	{
		if (custoDeFabrica >= VALOR_MINIMO_VEICULAR && custoDeFabrica <= 30000.0)
		{
			percentualDoDistribuidor = PD_ATE_30000_00;
			percentualDoImposto = PI_ATE_30000_00;
		}
		else
		{
			if (custoDeFabrica > 30000.0 && custoDeFabrica <= 40000.0)
			{
				percentualDoDistribuidor = PD_DE_30000_01_ATE_40000_00;
				percentualDoImposto = PI_DE_30000_01_ATE_40000_00;
			}
			else
			{
				if (custoDeFabrica > 40000.0)
				{
					percentualDoDistribuidor = PD_ACIMA_DE_40000_00;
					percentualDoImposto = PI_ACIMA_DE_40000_00;
				}
			}
		}

		switch (percentualDoDistribuidor)
		{
		case PD_ACIMA_DE_40000_00:
			valorPagoAoDistribuidor = custoDeFabrica * ((float)PD_ACIMA_DE_40000_00 / DENOMINADOR_DE_TRANSFORMACAO_PERCENTUAL_PARA_DECIMAL);
			valorDoImposto = custoDeFabrica * ((float)PI_ACIMA_DE_40000_00 / DENOMINADOR_DE_TRANSFORMACAO_PERCENTUAL_PARA_DECIMAL);
			custoAoConsumidor = custoDeFabrica + valorPagoAoDistribuidor + valorDoImposto;
			printf_s("\n\n # Custo ao consumidor (Distribuidor = %d%% e Imposto = %d%%): %.2lf", PD_ACIMA_DE_40000_00, PI_ACIMA_DE_40000_00, custoAoConsumidor);
			break;
		case PD_DE_30000_01_ATE_40000_00:
			valorPagoAoDistribuidor = custoDeFabrica * ((float)PD_DE_30000_01_ATE_40000_00 / DENOMINADOR_DE_TRANSFORMACAO_PERCENTUAL_PARA_DECIMAL);
			valorDoImposto = custoDeFabrica * ((float)PI_DE_30000_01_ATE_40000_00 / DENOMINADOR_DE_TRANSFORMACAO_PERCENTUAL_PARA_DECIMAL);
			custoAoConsumidor = custoDeFabrica + valorPagoAoDistribuidor + valorDoImposto;
			printf_s("\n\n # Custo ao consumidor (Distribuidor = %d%% e Imposto = %d%%): %.2lf", PD_DE_30000_01_ATE_40000_00, PI_DE_30000_01_ATE_40000_00, custoAoConsumidor);
			break;
		case PD_ATE_30000_00:
			valorPagoAoDistribuidor = custoDeFabrica * ((float)PD_ATE_30000_00 / DENOMINADOR_DE_TRANSFORMACAO_PERCENTUAL_PARA_DECIMAL);
			valorDoImposto = custoDeFabrica * ((float)PI_ATE_30000_00 / DENOMINADOR_DE_TRANSFORMACAO_PERCENTUAL_PARA_DECIMAL);
			custoAoConsumidor = custoDeFabrica + valorPagoAoDistribuidor + valorDoImposto;
			printf_s("\n\n # Custo ao consumidor (Distribuidor = %d%% e Imposto = %d%%): %.2lf", PD_ATE_30000_00, PI_ATE_30000_00, custoAoConsumidor);
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
