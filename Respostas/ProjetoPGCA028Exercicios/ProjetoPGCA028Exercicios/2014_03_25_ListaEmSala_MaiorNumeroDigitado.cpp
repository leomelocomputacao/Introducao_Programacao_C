//Importando bibliotecas
#include <stdio.h>
#include <stdlib.h>

//Método main - entry point
int mainMaiorNumeroDigitado()
{
	//Declaração e inicialização de Variáveis locais
	int numeroDeValoresASeremCapturados = 0;
	float valorPositivoCapiturado = 0.0;
	float maiorValor = 0.0;
	bool dadosDeEntradaValidos = true;

	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa Maior Numero Digitado>>");
	printf("\n\n ## Autor: Leonardo Melo");

	//Entrada de dados
	printf("\n\n # Entre o numero de valores de entrada: ");
	scanf_s("%d", &numeroDeValoresASeremCapturados);

	for (int i = 1; i <= numeroDeValoresASeremCapturados; i++)
	{
		//Entrada de dados
		printf("\n\n # Entre com o valor da entrada %d: ", i);
		scanf_s("%f", &valorPositivoCapiturado);

		if (valorPositivoCapiturado <= 0)
		{
			//Mostra uma mensagem de exceção
			printf("\n\n # Dado(s) de entrada invalido(s)!");
			i--;
		}
		else
		{
			if (valorPositivoCapiturado > maiorValor)
			{
				maiorValor = valorPositivoCapiturado;
			}
		}
	}

	printf("\n\n # O maior valor digitado foi %.2f: ", maiorValor);

	//Pula linha e pausa a tela
	printf("\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}