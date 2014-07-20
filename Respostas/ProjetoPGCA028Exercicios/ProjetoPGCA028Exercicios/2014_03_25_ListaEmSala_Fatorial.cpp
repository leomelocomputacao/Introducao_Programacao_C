//Importando bibliotecas
#include <stdio.h>
#include <stdlib.h>

//Método main - entry point
int mainFatorial()
{
	//Declaração e inicialização de Variáveis locais
	int valorDeEntrada, contador, fatorial;

	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa Fatorial>>");
	printf("\n\n ## Autor: Leonardo Melo");

	//Entrada de dados
	printf("Entre com um valor:  ");
	scanf_s("%d", &valorDeEntrada);

	//Validação de número negativo
	if (valorDeEntrada < 0)
	{
		printf("\n\nNumero invalido. (Negativo)");
	}
	else
	{
		//Lógica do fatorial
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

	//Retorno do método main
	return(EXIT_SUCCESS);
}