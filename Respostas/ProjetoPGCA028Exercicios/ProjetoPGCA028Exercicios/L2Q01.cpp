//Inclus�o de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>

//Constantes
#define MASCULINO 'M'
#define FEMININO 'F'
#define ALTURA_MINIMA 0.5
#define ALTURA_MAXIMA 2.6

//M�todo Main - Entry Point do Programa
int main21()
{
	//Declara��o e inicializa��o de Vari�veis locais
	float altura = 0;
	char sexo = ' ';
	double pesoIdeal = 0.0;
	bool dadosDeEntradaValidos = true;

	//T�tulo do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa Peso Ideal por Altura e Sexo>>");
	printf("\n\n ## Autor: Leonardo Melo");

	//Captura de dados do teclado
	printf("\n\n\n =>> Digite seu sexo (M ou F): ");
	sexo = getchar();

	printf("\n =>> Digite sua altura em Metros (Minina: %.2f e Maxima: %.2f): ", ALTURA_MINIMA, ALTURA_MAXIMA);
	scanf_s("%f", &altura);

	//convers�o para letra ma�scula
	sexo = toupper(sexo);

	//Valida��es 
	if (sexo != MASCULINO && sexo != FEMININO)
	{
		dadosDeEntradaValidos = false;
	}

	if (altura < ALTURA_MINIMA || altura > ALTURA_MAXIMA)
	{
		dadosDeEntradaValidos = false;
	}

	//C�lculo do Peso Ideal
	if (dadosDeEntradaValidos)
	{
		if (sexo == MASCULINO)
		{
			pesoIdeal = (72.7 * altura) - 58;
		}
		else
		{
			if (sexo == FEMININO)
			{
				pesoIdeal = (62.1 * altura) - 44.7;
			}
		}

		//Mostra o resultado na tela
		printf("\n\n # O seu peso ideal e: %.2lf", pesoIdeal);
	}
	else
	{
		//Mostra uma mensagem de exce��o
		printf("\n\n # Dado(s) de entrada invalido(s)!");
	}

	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do m�todo main
	return(EXIT_SUCCESS);
}