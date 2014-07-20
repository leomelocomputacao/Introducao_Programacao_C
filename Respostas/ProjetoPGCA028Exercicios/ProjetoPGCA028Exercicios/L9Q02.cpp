//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define tamanho 1000

typedef struct
{
	char nome[100];
	float peso;
	float altura;
	bool acimaDoPeso;
} tipoPessoa;

//Método Main - Entry Point do Programa
int main92()
{
	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa IMC>>");
	printf("\n\n ## Autor: Leonardo Melo\n\n");

	tipoPessoa pessoas[tamanho];
	float IMC;

	for (int i = 0; i < tamanho; i++)
	{
		printf_s("\nDigite o NOME: ");
		gets_s(pessoas[i].nome);
		fflush(stdin);

		printf_s("\nDigite o PESO: ");
		scanf_s("%f", &pessoas[i].peso);
		fflush(stdin);

		printf_s("\nDigite o ALTURA: ");
		scanf_s("%f", &pessoas[i].altura);
		fflush(stdin);

		IMC = pessoas[i].peso / pow(pessoas[i].altura, 2);

		if (IMC > 30)
		{
			pessoas[i].acimaDoPeso = true;
		}
		else
		{
			pessoas[i].acimaDoPeso = false;
		}
	}

	printf_s("\n\nPessoas acima do PESO:\n");

	for (int i = 0; i < tamanho; i++)
	{
		if (pessoas[i].acimaDoPeso){
			printf_s("\n%s", pessoas[i].nome);
		}
	}

	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}
