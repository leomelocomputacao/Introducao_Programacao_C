//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//Constantes
#define TAMANHO_MAXIMO_DO_VETOR 10
#define MAIOR_NOTA 10
#define MENOR_NOTA 0

//Método Main - Entry Point do Programa
int mainNMV()
{
	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa Vetores Notas e Medias>>");
	printf("\n\n ## Autor: Leonardo Melo");

	float notas[TAMANHO_MAXIMO_DO_VETOR];
	float somaDoVetor = 0;
	bool dadosDeEntradaValidos = true;

	for (int contador = 0; contador < TAMANHO_MAXIMO_DO_VETOR; contador++)
	{ 
		do{
			dadosDeEntradaValidos = true;

			printf("\n\nDigite a nota [%d]: ", contador + 1);
			scanf_s("%f", &notas[contador]);

			if (notas[contador] < MENOR_NOTA || notas[contador] > MAIOR_NOTA)
			{
				printf("\n\nEntrada Invalida!\nA nota nao pode ser menor que %d ou maior que %d.", MENOR_NOTA, MAIOR_NOTA);

				dadosDeEntradaValidos = false;
			}
			else
			{
				somaDoVetor += notas[contador];
			}

		}while(!dadosDeEntradaValidos);
	}

	float media = somaDoVetor / (float)TAMANHO_MAXIMO_DO_VETOR;

	printf("\n\nMedia das notas do vetor: %.2f", media);

	printf("\n\nNotas acima da media: ");

	for (int contador = 0; contador < TAMANHO_MAXIMO_DO_VETOR; contador++)
	{
		if (media < notas[contador])
		{
			printf("\n\nNota [%d]: %.2f", contador + 1, notas[contador]);
		}
	}

	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}
