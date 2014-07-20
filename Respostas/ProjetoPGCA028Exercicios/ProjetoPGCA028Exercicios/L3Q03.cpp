//Importando bibliotecas
#include <stdio.h>
#include <stdlib.h>

//Método main - entry point
int main33()
{
	int X = 0;
	int Y = 0;
	int soma = 0;
	bool dadosDeEntradaValidos = true;

	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa Somatorio de Intervalo>>");
	printf("\n\n ## Autor: Leonardo Melo");

	//Captura de dados do teclado
	printf("\n\n\n =>> Digite um numero inicial: ");
	scanf_s("%d", &X);

	do{
		dadosDeEntradaValidos = true;

		//Captura de dados do teclado
		printf("\n\n\n =>> Digite um numero final: ");
		scanf_s("%d", &Y);

		if (Y <= X)
		{
			//Mostra uma mensagem de exceção
			printf("\n\n # Numero final menor ou igual ao numero inicial.");

			dadosDeEntradaValidos = false;
		}

	} while (!dadosDeEntradaValidos);

	for (int contador = X; contador <= Y; contador++)
	{
		soma += contador;
	}
	
	printf("\n\n\n =>> Resultado da Soma: %d", soma);

	//Pula linha e pausa a tela
	printf("\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}