//Importando bibliotecas
#include <stdio.h>
#include <stdlib.h>

//M�todo main - entry point
int mainFatorial()
{
	//Declara��o e inicializa��o de Vari�veis locais
	int valorDeEntrada, contador, fatorial;

	//T�tulo do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa Fatorial>>");
	printf("\n\n ## Autor: Leonardo Melo");

	//Entrada de dados
	printf("Entre com um valor:  ");
	scanf_s("%d", &valorDeEntrada);

	//Valida��o de n�mero negativo
	if (valorDeEntrada < 0)
	{
		printf("\n\nNumero invalido. (Negativo)");
	}
	else
	{
		//L�gica do fatorial
		fatorial = 1;
		contador = valorDeEntrada;

		while (contador > 1)
		{
			fatorial = fatorial * contador;
			contador--;
		}

		//Imprime resultado
		printf("\n\nCalculo do Fatorial e: %d ", fatorial);
	}

	//Pula linha e pausa a tela
	printf("\n\n");
	system("pause");

	//Retorno do m�todo main
	return(EXIT_SUCCESS);
}