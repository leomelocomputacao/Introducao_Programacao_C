//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>

#define QUANTIDADE_DE_MES 12
#define ZERO_ABSOLUTO -273.15
#define MAIOR_TEMPERATURA_REGISTRADA_NA_TERRA 70.0

//Método Main - Entry Point do Programa
int main53()
{
	char* meses[QUANTIDADE_DE_MES] = { "JANEIRO", "FEVEREIRO", "MARCO", "ABRIL", "MAIO", "JUNHO", "JULHO", "AGOSTO", "SETEMBRO", "OUTUBRO", "NOVEMBRO", "DEZEMBRO" };

	float temperaturaCelsiusMediaDosMeses[QUANTIDADE_DE_MES];

	bool dadosDeEntradaValidos;

	float maiorTemperatura = ZERO_ABSOLUTO;
	float menorTemperatura = MAIOR_TEMPERATURA_REGISTRADA_NA_TERRA;

	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa Temperatura Media dos Meses>>");
	printf("\n\n ## Autor: Leonardo Melo\n\n");

	for (int mes = 0; mes < QUANTIDADE_DE_MES; mes++)
	{
		//Ler Numero do aluno
		do{
			dadosDeEntradaValidos = true;

			printf("\nInforme a temperatura media (Celsius) do mes de %s: ", meses[mes]);

			scanf_s("%f", &temperaturaCelsiusMediaDosMeses[mes]);

			//limpa o buffer do scanf
			fflush(stdin);

			if (temperaturaCelsiusMediaDosMeses[mes] < ZERO_ABSOLUTO || temperaturaCelsiusMediaDosMeses[mes] > MAIOR_TEMPERATURA_REGISTRADA_NA_TERRA)
			{
				printf("\n\nEntrada Invalida!\nA temperatura media (Celsius) nao pode ser menor que %.2f (Zero Absoluto) ou maior que %.2f.\n", ZERO_ABSOLUTO, MAIOR_TEMPERATURA_REGISTRADA_NA_TERRA);

				dadosDeEntradaValidos = false;
			}

		} while (!dadosDeEntradaValidos);


		if (temperaturaCelsiusMediaDosMeses[mes] > maiorTemperatura)
		{
			maiorTemperatura = temperaturaCelsiusMediaDosMeses[mes];
		}

		if (temperaturaCelsiusMediaDosMeses[mes] < menorTemperatura)
		{
			menorTemperatura = temperaturaCelsiusMediaDosMeses[mes];
		}
	}

	printf_s("\n\nMenor temperatura media: %.2f\n", menorTemperatura);
	printf_s("Mese(s) com menor tempetatura media: \n");

	for (int mes = 0; mes < QUANTIDADE_DE_MES; mes++)
	{
		if (temperaturaCelsiusMediaDosMeses[mes] == menorTemperatura)
		{
			printf_s("\n%d - %s", mes + 1, meses[mes]);
		}
	}

	printf_s("\n\nMaior temperatura media: %.2f\n", maiorTemperatura);
	printf_s("Mese(s) com maior tempetatura media: \n");

	for (int mes = 0; mes < QUANTIDADE_DE_MES; mes++)
	{
		if (temperaturaCelsiusMediaDosMeses[mes] == maiorTemperatura)
		{
			printf_s("\n%d - %s", mes + 1, meses[mes]);
		}
	}

	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}