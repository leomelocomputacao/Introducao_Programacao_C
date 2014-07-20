//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

//Constantes
#define TAMANHO_DA_STRING 1000

//Método Main - Entry Point do Programa
int main61()
{
	//Declaração de variáveis locais
	char A[TAMANHO_DA_STRING];
	char B[TAMANHO_DA_STRING];
	char RESULTADO[TAMANHO_DA_STRING];
	char AUXILIAR[TAMANHO_DA_STRING];

	int posicaoDeInsercaoDeAEmB = 0;
	
	int tamanhoDoTextoA;
	int tamanhoDoTextoB;

	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa inserir string A em B>>");
	printf("\n\n ## Autor: Leonardo Melo");

	printf("\n\nDigite o valor da string A: ");
	gets_s(A);

	printf("\n\nDigite o valor da string B: ");
	gets_s(B);

	printf("\n\nDigite um indice de B para inserir A: ");
	scanf_s("%d", &posicaoDeInsercaoDeAEmB);

	tamanhoDoTextoA = strlen(A);
	tamanhoDoTextoB = strlen(B);


	if (posicaoDeInsercaoDeAEmB <= 0)
	{
		posicaoDeInsercaoDeAEmB = 0;
	}

	if (posicaoDeInsercaoDeAEmB >= tamanhoDoTextoB)
	{
		posicaoDeInsercaoDeAEmB = tamanhoDoTextoB;
	}


	strncpy_s(RESULTADO, B, posicaoDeInsercaoDeAEmB);
	strcat_s(RESULTADO, A);

	
	int j = 0;

	for (int i = posicaoDeInsercaoDeAEmB; i < tamanhoDoTextoA; i++)
	{
		AUXILIAR[j] = B[i];
		j++;
	}

	AUXILIAR[j] = '\0';

	strcat_s(RESULTADO, AUXILIAR);

	puts("\nString A: ");
	puts(A);

	puts("\nString B: ");
	puts(B);

	puts("\nString concatenada: ");
	puts(RESULTADO);
	
	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}
