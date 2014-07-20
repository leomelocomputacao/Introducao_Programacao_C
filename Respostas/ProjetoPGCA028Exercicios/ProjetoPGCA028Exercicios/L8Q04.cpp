//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//Constantes
#define LIMITE_MINIMO 0

int somatorio(int n)
{
	int somatorio = 0;

	for (int i = 1; i <= n; i++)
	{
		somatorio += i;
	}

	return somatorio;
}

//Método Main - Entry Point do Programa
int main84()
{
	//Declaração de variáveis
	int n = 0;
	bool dadosDeEntradaValidos = true;

	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa somatorio de 0 a n>>");
	printf("\n\n ## Autor: Leonardo Melo\n\n");

	do{
		dadosDeEntradaValidos = true;

		printf_s("\nDigite o valor de n: ");
		scanf_s("%d", &n);

		//limpa o buffer do scanf
		fflush(stdin);

		if (n < LIMITE_MINIMO)
		{
			printf("\n\nEntrada Invalida!\nO valor de n nao pode ser menor que %d.\n", LIMITE_MINIMO);

			dadosDeEntradaValidos = false;
		}

	} while (!dadosDeEntradaValidos);

	printf("\n\nO somatorio de %d: %d", n, somatorio(n));

	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}
