//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define END_ENTRADA "L9Q04Entrada.txt"
#define END_SAIDA "L9Q04Saida.txt"

#define M_ABRE_LEITURA "r"
#define M_ABRE_LEITURA_ESCRITA "r+"

#define M_ANEXA_ESCRITA "a"
#define M_ANEXA_ESCRITA_LEITURA "a+"

#define M_SOBRESCREVE_ESCRITA "w"
#define M_SOBRESCREVE_ESCRITA_LEITURA "w+"

//Método Main - Entry Point do Programa
int main94()
{
	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa Arquivo Notas>>");
	printf("\n\n ## Autor: Leonardo Melo\n\n");

	FILE *arqE;
	arqE = fopen(END_ENTRADA, M_ABRE_LEITURA);

	if (arqE == NULL)
	{
		printf("Arquivo nao encontrado ou nao pode ser aberto.");
	}
	else
	{
		int qtdLinhas = 0;
		fscanf(arqE, "%d", &qtdLinhas);

		FILE *arqS;
		arqS = fopen(END_SAIDA, M_SOBRESCREVE_ESCRITA);

		for (int i = 0; i < qtdLinhas; i++)
		{
			int matricula = 0;
			float nota1 = 0.0;
			float nota2 = 0.0;
			float nota3 = 0.0;
			float media = 0.0;
			char *texto;

			fscanf(arqE, "%d", &matricula);
			fscanf(arqE, "%f", &nota1);
			fscanf(arqE, "%f", &nota2);
			fscanf(arqE, "%f", &nota3);

			media = (nota1 + nota2 + nota3) / 3;

			if (media >= 7.0)
			{
				texto = "APROVADO";
			}
			else
			{
				texto = "REPROVADO";
			}

			fprintf(arqS, "%d %.1f %s\n", matricula, media, texto);
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
