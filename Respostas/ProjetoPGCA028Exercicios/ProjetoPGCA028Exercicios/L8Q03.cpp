//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//Constantes
#define MEDIA_MENOR 0.0
#define MEDIA_MAIOR 10.0

char calculaConceito(float media)
{
	char conceito = ' ';

	if (media >= 0.0 && media < 5.0)
	{
		conceito = 'D';
	}
	else
	{
		if (media >= 5.0 && media < 7.0)
		{
			conceito = 'C';
		}
		else
		{
			if (media >= 7.0 && media < 9.0)
			{
				conceito = 'B';
			}
			else
			{
				if (media >= 9.0 && media <= 10.0)
				{
					conceito = 'A';
				}
			}
		}
	}

	return conceito;
}

//Método Main - Entry Point do Programa
int main83()
{
	//Declaração de variáveis
	float media = 0;
	bool dadosDeEntradaValidos = true;

	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa Media Final do Aluno>>");
	printf("\n\n ## Autor: Leonardo Melo\n\n");


	do{
		dadosDeEntradaValidos = true;

		printf_s("\nDigite a media final do aluno: ");
		scanf_s("%f", &media);

		//limpa o buffer do scanf
		fflush(stdin);

		if (media < MEDIA_MENOR || media > MEDIA_MAIOR)
		{
			printf("\n\nEntrada Invalida!\nA media nao pode ser menor que %.2f e maior que %.2f.\n", MEDIA_MENOR, MEDIA_MAIOR);

			dadosDeEntradaValidos = false;
		}

	} while (!dadosDeEntradaValidos);


	printf("Conceito: %c", calculaConceito(media));

	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}
