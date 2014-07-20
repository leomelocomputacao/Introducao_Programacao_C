//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define END_ENTRADA "L9Q03Entrada.txt"
#define END_SAIDA "L9Q03Saida.txt"

#define M_ABRE_LEITURA "r"
#define M_ABRE_LEITURA_ESCRITA "r+"

#define M_ANEXA_ESCRITA "a"
#define M_ANEXA_ESCRITA_LEITURA "a+"

#define M_SOBRESCREVE_ESCRITA "w"
#define M_SOBRESCREVE_ESCRITA_LEITURA "w+"

//Método Main - Entry Point do Programa
int main93()
{
	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa Arquivo com Numeros Positivos e Negativos>>");
	printf("\n\n ## Autor: Leonardo Melo\n\n");

	FILE *arqE;
	arqE = fopen(END_ENTRADA, M_ABRE_LEITURA);

	if (arqE == NULL)
	{
		printf("Arquivo nao encontrado ou nao pode ser aberto.");
	}
	else
	{
		int qtdNumeros = 0;
		fscanf(arqE, "%d", &qtdNumeros);

		FILE *arqS;
		arqS = fopen(END_SAIDA, M_SOBRESCREVE_ESCRITA);

		int numero = 0;
		
		for (int i = 0; i < qtdNumeros; i++)
		{
			fscanf(arqE, "%d", &numero);

			char *texto;
			
			if (numero > 0)
			{
				texto = "POSITIVO";
			}
			else
			{
				if (numero < 0)
				{
					texto = "NEGATIVO";
				}
				else
				{
					texto = "ZERO";
				}
			}

			fprintf(arqS, "%3d -> %s\n", numero, texto);
		}

		fclose(arqE);
		fclose(arqS);
	}

	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}
