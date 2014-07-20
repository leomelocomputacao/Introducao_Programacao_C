//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define ENDERECO_1 "arquivo1.txt"
#define ENDERECO_2 "arquivo2.txt"
#define ENDERECO_3 "arquivo3.txt"
#define ENDERECO_4 "arquivo4.txt"
#define ENDERECO_5 "arquivo5.txt"
#define ENDERECO_6 "arquivo6.txt"

#define M_ABRE_LEITURA "r"
#define M_ABRE_LEITURA_ESCRITA "r+"

#define M_ANEXA_ESCRITA "a"
#define M_ANEXA_ESCRITA_LEITURA "a+"

#define M_SOBRESCREVE_ESCRITA "w"
#define M_SOBRESCREVE_ESCRITA_LEITURA "w+"

//Método Main - Entry Point do Programa
int main63at()
{
	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa Arquivo de Texto>>");
	printf("\n\n ## Autor: Leonardo Melo\n\n");

	char buffer[100];

	//--------------------------------------------------------------
	printf("\n\nModo: %s\n\n", M_ABRE_LEITURA);
	//--------------------------------------------------------------

	FILE *arquivo1;
	arquivo1 = fopen(ENDERECO_1, M_ABRE_LEITURA);

	if (arquivo1 == NULL)
	{
		printf("\n%s nao existe", ENDERECO_1);
	}
	else
	{
		printf("\n%ld\n", ftell(arquivo1));

		//Lê palavra por palavra
		while (!feof(arquivo1))
		{
			strcpy(buffer, "");
			//pega uma palavra
			fscanf(arquivo1, "%s", &buffer);

			if (!strcmp(buffer, "") == 0)
			{
				printf("%s\n", buffer);
			}

			printf("\n%ld\n", ftell(arquivo1));
		}

		strcpy(buffer, "");
		fgets(buffer, 15, arquivo1);
		printf("\n\n%s\n", buffer);

		rewind(arquivo1);

		strcpy(buffer, "");
		fgets(buffer, 15, arquivo1);
		printf("%s\n", buffer);

		rewind(arquivo1);

		while (!feof(arquivo1))
		{
			char c = fgetc(arquivo1);
			printf("%c", c);
		}

		fseek(arquivo1, 3, SEEK_SET);
		char c = fgetc(arquivo1);
		printf("\n%c", c);

		fclose(arquivo1);
	}

	//--------------------------------------------------------------


	//--------------------------------------------------------------
	printf("\n\nModo: %s\n\n", M_ABRE_LEITURA_ESCRITA);
	//--------------------------------------------------------------

	FILE *arquivo2;
	arquivo2 = fopen(ENDERECO_2, M_ABRE_LEITURA_ESCRITA);

	if (arquivo2 == NULL)
	{
		printf_s("\n%s nao existe", ENDERECO_2);
	}
	else
	{
		fprintf(arquivo2, "%s ", "aaaaa1");
		fprintf(arquivo2, "%s\n", "aaaaa2");
		fprintf(arquivo2, "%s ", "aaaaa3");
		fprintf(arquivo2, "%s", "aaaaa4");

		rewind(arquivo2);

		printf("\n%ld\n", ftell(arquivo2));

		//Lê palavra por palavra
		while (!feof(arquivo2))
		{
			strcpy(buffer, "");
			//pega uma palavra
			fscanf(arquivo2, "%s", &buffer);

			if (!strcmp(buffer, "") == 0)
			{
				printf("%s\n", buffer);
			}

			printf("\n%ld\n", ftell(arquivo2));
		}

		strcpy(buffer, "");
		fgets(buffer, 15, arquivo2);
		printf("\n\n%s\n", buffer);

		rewind(arquivo2);
		fputs("puts1", arquivo2);

		rewind(arquivo2);

		strcpy(buffer, "");
		fgets(buffer, 15, arquivo2);
		printf("%s\n", buffer);

		rewind(arquivo2);

		while (!feof(arquivo2))
		{
			char c = fgetc(arquivo2);
			printf("%c", c);
		}

		rewind(arquivo2);

		fprintf(arquivo2, "%s ", "aabbb1");
		fprintf(arquivo2, "%s\n", "aabbb2");
		fprintf(arquivo2, "%s ", "aabbb3");
		fprintf(arquivo2, "%s", "aabbb4");

		fseek(arquivo2, 3, SEEK_SET);
		char c = fgetc(arquivo2);
		printf("\n%c", c);

		fclose(arquivo2);
	}

	//--------------------------------------------------------------

	//--------------------------------------------------------------
	printf("\n\nModo: %s\n\n", M_ANEXA_ESCRITA);
	//--------------------------------------------------------------

	FILE *arquivo3;

	remove(ENDERECO_3);
	
	arquivo3 = fopen(ENDERECO_3, M_ANEXA_ESCRITA);
	
	printf("\n%ld\n", ftell(arquivo3));
	fprintf(arquivo3, "%s ", "aaaaa1");

	printf("\n%ld\n", ftell(arquivo3));
	fprintf(arquivo3, "%s\n", "aaaaa2");

	printf("\n%ld\n", ftell(arquivo3));
	fprintf(arquivo3, "%s ", "aaaaa3");

	printf("\n%ld\n", ftell(arquivo3));
	fprintf(arquivo3, "%s\n", "aaaaa4");

	rewind(arquivo3);

	printf("\n%ld\n", ftell(arquivo3));
	fprintf(arquivo3, "%s ", "bbbbb1");

	printf("\n%ld\n", ftell(arquivo3));
	fprintf(arquivo3, "%s\n", "bbbbb2");

	printf("\n%ld\n", ftell(arquivo3));
	fprintf(arquivo3, "%s ", "bbbbb3");

	printf("\n%ld\n", ftell(arquivo3));
	fprintf(arquivo3, "%s", "bbbbb4");

	printf("\n%ld\n", ftell(arquivo3));

	fclose(arquivo3);

	//--------------------------------------------------------------

	//--------------------------------------------------------------
	printf("\n\nModo: %s\n\n", M_ANEXA_ESCRITA_LEITURA);
	//--------------------------------------------------------------

	FILE *arquivo4;

	remove(ENDERECO_4);

	arquivo4 = fopen(ENDERECO_4, M_ANEXA_ESCRITA_LEITURA);

	printf("\n%ld\n", ftell(arquivo4));
	fprintf(arquivo4, "%s ", "aaaaa1");

	printf("\n%ld\n", ftell(arquivo4));
	fprintf(arquivo4, "%s\n", "aaaaa2");

	printf("\n%ld\n", ftell(arquivo4));
	fprintf(arquivo4, "%s ", "aaaaa3");

	printf("\n%ld\n", ftell(arquivo4));
	fprintf(arquivo4, "%s\n", "aaaaa4");

	printf("\n%ld\n", ftell(arquivo1));

	rewind(arquivo4);

	//Lê palavra por palavra
	while (!feof(arquivo4))
	{
		strcpy(buffer, "");
		//pega uma palavra
		fscanf(arquivo4, "%s", &buffer);

		if (!strcmp(buffer, "") == 0)
		{
			printf("%s\n", buffer);
		}

		printf("\n%ld\n", ftell(arquivo4));
	}

	rewind(arquivo4);

	strcpy(buffer, "");
	fgets(buffer, 15, arquivo4);
	printf("\n\n%s\n", buffer);

	printf("\n%ld\n", ftell(arquivo4));
	fprintf(arquivo4, "%s ", "bbbbb1");

	printf("\n%ld\n", ftell(arquivo4));
	fprintf(arquivo4, "%s\n", "bbbbb2");

	printf("\n%ld\n", ftell(arquivo4));
	fprintf(arquivo4, "%s ", "bbbbb3");

	printf("\n%ld\n", ftell(arquivo4));
	fprintf(arquivo4, "%s", "bbbbb4");

	printf("\n%ld\n", ftell(arquivo4));

	rewind(arquivo4);
	fputs("fputs1", arquivo4);

	rewind(arquivo4);

	//Lê palavra por palavra
	while (!feof(arquivo4))
	{
		strcpy(buffer, "");
		//pega uma palavra
		fscanf(arquivo4, "%s", &buffer);

		if (!strcmp(buffer, "") == 0)
		{
			printf("%s\n", buffer);
		}

		printf("\n%ld\n", ftell(arquivo4));
	}

	fclose(arquivo4);

	//--------------------------------------------------------------

	//--------------------------------------------------------------
	printf("\n\nModo: %s\n\n", M_SOBRESCREVE_ESCRITA);
	//--------------------------------------------------------------

	FILE *arquivo5;

	arquivo5 = fopen(ENDERECO_5, M_SOBRESCREVE_ESCRITA);

	printf("\n%ld\n", ftell(arquivo5));
	fprintf(arquivo5, "%s ", "aaaaa1");

	printf("\n%ld\n", ftell(arquivo5));
	fprintf(arquivo5, "%s\n", "aaaaa2");

	printf("\n%ld\n", ftell(arquivo5));
	fprintf(arquivo5, "%s ", "aaaaa3");

	printf("\n%ld\n", ftell(arquivo5));
	fprintf(arquivo5, "%s\n", "aaaaa4");

	rewind(arquivo5);

	printf("\n%ld\n", ftell(arquivo5));
	fprintf(arquivo5, "%s ", "bbbbb1");

	printf("\n%ld\n", ftell(arquivo5));
	fprintf(arquivo5, "%s\n", "bbbbb2");

	printf("\n%ld\n", ftell(arquivo5));
	fprintf(arquivo5, "%s ", "bbbbb3");

	printf("\n%ld\n", ftell(arquivo5));
	fprintf(arquivo5, "%s", "bbbbb4");

	printf("\n%ld\n", ftell(arquivo5));

	fclose(arquivo5);

	//--------------------------------------------------------------

	//--------------------------------------------------------------
	printf("\n\nModo: %s\n\n", M_SOBRESCREVE_ESCRITA_LEITURA);
	//--------------------------------------------------------------

	FILE *arquivo6;

	arquivo6 = fopen(ENDERECO_6, M_SOBRESCREVE_ESCRITA_LEITURA);

	printf("\n%ld\n", ftell(arquivo6));
	fprintf(arquivo6, "%s ", "aaaaa1");

	printf("\n%ld\n", ftell(arquivo6));
	fprintf(arquivo6, "%s\n", "aaaaa2");

	printf("\n%ld\n", ftell(arquivo6));
	fprintf(arquivo6, "%s ", "aaaaa3");

	printf("\n%ld\n", ftell(arquivo6));
	fprintf(arquivo6, "%s\n", "aaaaa4");

	rewind(arquivo6);

	//Lê palavra por palavra
	while (!feof(arquivo6))
	{
		strcpy(buffer, "");
		//pega uma palavra
		fscanf(arquivo6, "%s", &buffer);

		if (!strcmp(buffer, "") == 0)
		{
			printf("%s\n", buffer);
		}

		printf("\n%ld\n", ftell(arquivo6));
	}

	rewind(arquivo6);

	strcpy(buffer, "");
	fgets(buffer, 15, arquivo6);
	printf("\n\n%s\n", buffer);

	printf("\n%ld\n", ftell(arquivo6));
	fprintf(arquivo6, "%s ", "bbbbb1");

	printf("\n%ld\n", ftell(arquivo6));
	fprintf(arquivo6, "%s\n", "bbbbb2");

	printf("\n%ld\n", ftell(arquivo6));
	fprintf(arquivo6, "%s ", "bbbbb3");

	printf("\n%ld\n", ftell(arquivo6));
	fprintf(arquivo6, "%s", "bbbbb4");

	printf("\n%ld\n", ftell(arquivo6));

	rewind(arquivo6);
	fputs("fputs1", arquivo6);

	rewind(arquivo6);

	//Lê palavra por palavra
	while (!feof(arquivo6))
	{
		strcpy(buffer, "");
		//pega uma palavra
		fscanf(arquivo6, "%s", &buffer);

		if (!strcmp(buffer, "") == 0)
		{
			printf("%s\n", buffer);
		}

		printf("\n%ld\n", ftell(arquivo6));
	}

	fclose(arquivo6);

	//--------------------------------------------------------------


	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}

