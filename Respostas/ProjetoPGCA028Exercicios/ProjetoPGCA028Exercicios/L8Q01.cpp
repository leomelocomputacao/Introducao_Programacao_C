//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//Constantes
#define PI 3.14

float calculaVolume(float raio)
{
	return 4.0 / 3.0 * PI * pow(raio, 3);
}

//Método Main - Entry Point do Programa
int main81()
{
	//Declaração de variáveis
	float raio = 0;

	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa calculo do volume da esfera>>");
	printf("\n\n ## Autor: Leonardo Melo\n\n");

	printf_s("\nDigite o raio: ");
	scanf_s("%f", &raio);

	printf("Volume da esfera: %f", calculaVolume(raio));

	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}
