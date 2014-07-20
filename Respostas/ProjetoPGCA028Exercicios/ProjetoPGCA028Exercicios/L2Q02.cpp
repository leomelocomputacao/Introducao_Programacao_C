//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//Constantes
#define SALARIO_MINIMO 724.0
#define PERCENTUAL_DE_AUMENTO_1 35.0
#define PERCENTUAL_DE_AUMENTO_2 15.0
#define VALOR_LIMITE_DO_PERCENTUAL_AUMENTO_1 1000.0
#define DENOMINADOR_DE_TRANSFORMACAO_PERCENTUAL_PARA_DECIMAL 100.0

//Método Main - Entry Point do Programa
int main22()
{
	//Declaração de variáveis locais e iniciaização
	float salario = 0.0;
	double salarioComReajuste = 0.0;
	bool dadosDeEntradaValidos = true;

	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa Calculo de Reajuste Salarial>>");
	printf("\n\n ## Autor: Leonardo Melo");

	//Captura de dados do teclado
	printf("\n\n\n =>> Digite seu salario (minimo: %.2f ): ", SALARIO_MINIMO);
	scanf_s("%f", &salario);

	//validacoes
	if (salario < SALARIO_MINIMO)
	{
		dadosDeEntradaValidos = false;
	}

	//Calculos de reajuste salarial
	if (dadosDeEntradaValidos)
	{
		salarioComReajuste = salario;

		if (salario <= VALOR_LIMITE_DO_PERCENTUAL_AUMENTO_1)
		{
			salarioComReajuste += salario * (PERCENTUAL_DE_AUMENTO_1 / DENOMINADOR_DE_TRANSFORMACAO_PERCENTUAL_PARA_DECIMAL);

			//Mostra o resultado na tela
			printf("\n\n # O seu salario com reajuste de %.0f%% e: %.2lf", PERCENTUAL_DE_AUMENTO_1, salarioComReajuste);
		}
		else
		{
			salarioComReajuste += salario * (PERCENTUAL_DE_AUMENTO_2 / DENOMINADOR_DE_TRANSFORMACAO_PERCENTUAL_PARA_DECIMAL);

			//Mostra o resultado na tela
			printf("\n\n # O seu salario com reajuste de %.0f%% e: %.2lf", PERCENTUAL_DE_AUMENTO_2, salarioComReajuste);
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