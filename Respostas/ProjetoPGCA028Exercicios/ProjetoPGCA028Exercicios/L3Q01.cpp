//Importando bibliotecas
#include <stdio.h>
#include <stdlib.h>

#define GRAU_INICIAL_FAHRENHEIT 50
#define GRAU_FINAL_FAHRENHEIT 150

//M�todo main - entry point
int main31()
{
	//T�tulo do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa Fahrenheit - Centigrados>>");
	printf("\n\n ## Autor: Leonardo Melo");

	double grausC = 0.0;

	for (int grausFahrenheit = GRAU_INICIAL_FAHRENHEIT; grausFahrenheit <= GRAU_FINAL_FAHRENHEIT; grausFahrenheit++)
	{
		grausC = 5.0 / 9.0 * ((float)grausFahrenheit - 32.0);

		printf("\n\nFAHRENHEIT: %d <==> CELSIUS: %.2lf", grausFahrenheit, grausC);
	}

	//Pula linha e pausa a tela
	printf("\n\n");
	system("pause");

	//Retorno do m�todo main
	return(EXIT_SUCCESS);
}
