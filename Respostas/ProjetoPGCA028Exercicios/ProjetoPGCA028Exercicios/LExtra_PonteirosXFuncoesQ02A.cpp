//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void imprime_primeiro(int *vet)
{
	//&vet[2] parado para *vet cria um vetor com uma posição

	printf("Valor: %d\n", vet[0]);
}

//Método Main - Entry Point do Programa
int mainLEPF2A()
{
	int vet[5] = { 1, 2, 3, 4, 5 };

	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa Vetor ponteiro imprime primeiro>>");
	printf("\n\n ## Autor: Leonardo Melo\n\n");

	imprime_primeiro(&vet[2]);

	//Imprime o valor 3
	
	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}
