//Importando bibliotecas
#include <stdio.h>
#include <stdlib.h>

//Método main - entry point
int main32()
{
	int numeroDigitado = 0;
	bool dadosDeEntradaValidos = true;
	double ResultadoDaSoma = 0.0;

	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa Algoritmo Soma>>");
	printf("\n\n ## Autor: Leonardo Melo");

	do{
		dadosDeEntradaValidos = true;

		//Captura de dados do teclado
		printf("\n\n\n =>> Digite um numero intero e positivo: ");
		scanf_s("%d", &numeroDigitado);

		if (numeroDigitado <= 0)
		{
			//Mostra uma mensagem de exceção
			printf("\n\n # Dado(s) de entrada invalido(s)!");

			dadosDeEntradaValidos = false;			
		}

	} while (!dadosDeEntradaValidos);
	
	for (int i = 1; i <= numeroDigitado; i++)
	{
		ResultadoDaSoma += (1 / (double)i);
	}

	printf("\n\n\n Resultado da soma: %.2lf", ResultadoDaSoma);

	//Pula linha e pausa a tela
	printf("\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}