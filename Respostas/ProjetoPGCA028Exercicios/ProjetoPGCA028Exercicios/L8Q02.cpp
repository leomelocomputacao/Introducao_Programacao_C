//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//Constantes
#define V0 "Nao e triangulo"
#define V1 "Triangulo Equilatero"
#define V2 "Triangulo Escaleno"
#define V3 "Triangulo Isosceles"
#define MENOR_VALOR_DE_LADO 0.1


int verificaTriangulo(float x, float y, float z)
{
	int retorno = 0;

	if ((x < y + z) && (z < x + y) && (y < z + x))
	{
		if (x == y && y == z)
		{
			retorno = 1;
		}
		else
		{
			if (x != y && y != z)
			{
				retorno = 2;
			}
			else
			{
				if ((x == y && y != z) || (y == z && z != x) || (z == x && x != y))
				{
					retorno = 3;
				}
			}
		}
	}

	return retorno;
}


//Método Main - Entry Point do Programa
int main82()
{
	//Declaração de variáveis
	float x = 0;
	float y = 0;
	float z = 0;
	bool dadosDeEntradaValidos = true;

	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa triangulos>>");
	printf("\n\n ## Autor: Leonardo Melo\n\n");
	
	do{
		dadosDeEntradaValidos = true;

		printf_s("\nDigite o lado x: ");
		scanf_s("%f", &x);

		//limpa o buffer do scanf
		fflush(stdin);

		if (x < MENOR_VALOR_DE_LADO)
		{
			printf("\n\nEntrada Invalida!\nO menor valor de um lado nao pode ser menor que %.2f.\n", MENOR_VALOR_DE_LADO);

			dadosDeEntradaValidos = false;
		}

	} while (!dadosDeEntradaValidos);

	do{
		dadosDeEntradaValidos = true;

		printf_s("\nDigite o lado y: ");
		scanf_s("%f", &y);

		//limpa o buffer do scanf
		fflush(stdin);

		if (y < MENOR_VALOR_DE_LADO)
		{
			printf("\n\nEntrada Invalida!\nO menor valor de um lado nao pode ser menor que %.2f.\n", MENOR_VALOR_DE_LADO);

			dadosDeEntradaValidos = false;
		}

	} while (!dadosDeEntradaValidos);

	do{
		dadosDeEntradaValidos = true;

		printf_s("\nDigite o lado z: ");
		scanf_s("%f", &z);

		//limpa o buffer do scanf
		fflush(stdin);

		if (z < MENOR_VALOR_DE_LADO)
		{
			printf("\n\nEntrada Invalida!\nO menor valor de um lado nao pode ser menor que %.2f.\n", MENOR_VALOR_DE_LADO);

			dadosDeEntradaValidos = false;
		}

	} while (!dadosDeEntradaValidos);

	int resultado = verificaTriangulo(x, y, z);
	char *texto = " ";

	if (resultado == 1)
	{
		texto = V1;
	}
	else
	{
		if (resultado == 2)
		{
			texto = V2;
		}
		else
		{
			if (resultado == 3)
			{
				texto = V3;
			}
			else
			{
				if (resultado == 0)
				{
					texto = V0;
				}
			}
		}
	}

	printf_s("\n\nResposta da analise: %s", texto);

	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}
