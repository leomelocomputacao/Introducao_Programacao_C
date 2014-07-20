//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//Constantes
#define SALDO_MINIMO_PARA_CONCESSAO_DE_CREDITO 0.0
#define DENOMINADOR_DE_TRANSFORMACAO_PERCENTUAL_PARA_DECIMAL 100.0

enum percentualDeDesconto
{
	ACIMA_DE_4000_00 = 30,
	DE_3000_01_ATE_4000_00 = 25,
	DE_2000_01_ATE_3000_00 = 20,
	ATE_2000_00 = 10
};

typedef enum percentualDeDesconto tipoPercentualDeDesconto;

//Método Main - Entry Point do Programa
int main23()
{
	//Declaração de variáveis locais e iniciaização
	float saldoMedio = 0.0;
	double valorDoCreditoEspecialConcedido = 0.0;
	bool dadosDeEntradaValidos = true;
	tipoPercentualDeDesconto percentualDeDesconto = ACIMA_DE_4000_00;

	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa Concessao de Credito Especial (Considerando o salario Medio)>>");
	printf("\n\n ## Autor: Leonardo Melo");

	//Captura de dados do teclado
	printf("\n\n\n =>> Digite seu saldo medio do ultimo ano: ");
	scanf_s("%f", &saldoMedio);

	//validacoes
	if (saldoMedio < SALDO_MINIMO_PARA_CONCESSAO_DE_CREDITO)
	{
		dadosDeEntradaValidos = false;
	}

	//Calculo da concessão de desconto
	if (dadosDeEntradaValidos)
	{
		if (saldoMedio >= SALDO_MINIMO_PARA_CONCESSAO_DE_CREDITO && saldoMedio <= 2000.0)
		{
			percentualDeDesconto = ATE_2000_00;
		}
		else
		{
			if (saldoMedio > 2000.0 && saldoMedio <= 3000.0)
			{
				percentualDeDesconto = DE_2000_01_ATE_3000_00;
			}
			else
			{
				if (saldoMedio > 3000.0 && saldoMedio <= 4000.0)
				{
					percentualDeDesconto = DE_3000_01_ATE_4000_00;
				}
				else
				{
					if (saldoMedio > 4000.0)
					{
						percentualDeDesconto = ACIMA_DE_4000_00;
					}
				}
			}
		}

		switch (percentualDeDesconto)
		{
		case ACIMA_DE_4000_00:
			valorDoCreditoEspecialConcedido = saldoMedio * (((float)ACIMA_DE_4000_00) / DENOMINADOR_DE_TRANSFORMACAO_PERCENTUAL_PARA_DECIMAL);
			printf_s("\n\n # Valor do credito especial concedido considerando o percentual de %d%% e: %.2lf", ACIMA_DE_4000_00, valorDoCreditoEspecialConcedido);
			break;
		case DE_3000_01_ATE_4000_00:
			valorDoCreditoEspecialConcedido = saldoMedio * (((float)DE_3000_01_ATE_4000_00) / DENOMINADOR_DE_TRANSFORMACAO_PERCENTUAL_PARA_DECIMAL);
			printf_s("\n\n # Valor do credito especial concedido considerando o percentual de %d%% e: %.2lf", DE_3000_01_ATE_4000_00, valorDoCreditoEspecialConcedido);
			break;
		case DE_2000_01_ATE_3000_00:
			valorDoCreditoEspecialConcedido = saldoMedio * (((float)DE_2000_01_ATE_3000_00) / DENOMINADOR_DE_TRANSFORMACAO_PERCENTUAL_PARA_DECIMAL);
			printf_s("\n\n # Valor do credito especial concedido considerando o percentual de %d%% e: %.2lf", DE_2000_01_ATE_3000_00, valorDoCreditoEspecialConcedido);
			break;
		case ATE_2000_00:
			valorDoCreditoEspecialConcedido = saldoMedio * (((float)ATE_2000_00) / DENOMINADOR_DE_TRANSFORMACAO_PERCENTUAL_PARA_DECIMAL);
			printf_s("\n\n # Valor do credito especial concedido considerando o percentual de %d%% e: %.2lf", ATE_2000_00, valorDoCreditoEspecialConcedido);
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
