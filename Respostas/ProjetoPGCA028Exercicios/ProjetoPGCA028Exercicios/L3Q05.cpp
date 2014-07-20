//Importando bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Método main - entry point
int main35()
{
	int numeroDigitado = 0;
	double X = 0.0;
	bool dadosDeEntradaValidos = true;
	double ResultadoDaSoma = 1.0;

	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa Funcao Dinamica>>");
	printf("\n\n ## Autor: Leonardo Melo");

	do{
		dadosDeEntradaValidos = true;

		//Captura de dados do teclado
		printf("\n\n\n =>> Digite um numero intero e positivo para quantidade de operacoes (n): ");
		scanf_s("%d", &numeroDigitado);

		//Captura de dados do teclado
		printf("\n\n\n =>> Digite o valor de X : ");
		scanf_s("%lf", &X);

		if (numeroDigitado <= 0)
		{
			//Mostra uma mensagem de exceção
			printf("\n\n # Dado(s) de entrada invalido(s)!");

			dadosDeEntradaValidos = false;
		}

	} while (!dadosDeEntradaValidos);

	int fatorial;
	int contador;

	for (int i = 2; i <= numeroDigitado; i++)
	{
		//Lógica do fatorial
		fatorial = 1;
		contador = i + 1;;

		while (contador > 1)
		{
			fatorial = fatorial * contador;
			contador--;
		}

		//Par
		if (i % 2 == 0)
		{
			ResultadoDaSoma += pow(X,i) / (double)fatorial;
		}
		else //Impar
		{
			ResultadoDaSoma -= pow(X, i) / (double)fatorial;
		}
	}

	printf("\n\n\n Resultado da soma: %.6lf", ResultadoDaSoma);

	//Pula linha e pausa a tela
	printf("\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}