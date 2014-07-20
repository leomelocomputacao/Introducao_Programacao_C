//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//Constantes
#define TAMANHO_DO_VETOR 100
#define MEDIA_MENOR 0.0
#define MEDIA_MAIOR 10.0

float mediaPonderada(float v[], int tamanho)
{
	float mediaPonderada = 0.0;
	int peso = 0;
	int somatorioDosPesos = 0;

	for (int i = 0; i < tamanho; i++)
	{
		peso = i + 1;
		mediaPonderada += v[i] * peso;
		somatorioDosPesos += peso;
	}

	mediaPonderada /= somatorioDosPesos;

	return mediaPonderada;
}

//Método Main - Entry Point do Programa
int main85()
{
	//Declaração de variáveis
	float vetor[TAMANHO_DO_VETOR];
	bool dadosDeEntradaValidos = true;

	for (int i = 0; i < TAMANHO_DO_VETOR; i++)
	{
		vetor[i] = 0.0;
	}

	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa media ponderada em vetor por indice>>");
	printf("\n\n ## Autor: Leonardo Melo\n\n");

	for (int i = 0; i < TAMANHO_DO_VETOR; i++)
	{
		do{
			dadosDeEntradaValidos = true;

			printf_s("\nDigite o valor da posicao %d/%d do vetor: ", i + 1, TAMANHO_DO_VETOR);
			scanf_s("%f", &vetor[i]);

			//limpa o buffer do scanf
			fflush(stdin);

			if (vetor[i] < MEDIA_MENOR || vetor[i] > MEDIA_MAIOR)
			{
				printf("\n\nEntrada Invalida!\nA media nao pode ser menor que %.2f e maior que %.2f.\n", MEDIA_MENOR, MEDIA_MAIOR);

				dadosDeEntradaValidos = false;
			}
		} while (!dadosDeEntradaValidos);
	}

	printf("\n\nMedia ponderada: %.2f", mediaPonderada(vetor, TAMANHO_DO_VETOR));

	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}