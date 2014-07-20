//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int* metade_final(int *vet, int n)
{
	//Retorna um vetor (ponteiro) de tamanho 1, &vet[3]
	return &vet[(int)(n / 2)];
}

//Método Main - Entry Point do Programa
int mainLEPF2B()
{
	int vet[6] = { 1, 2, 3, 4, 5, 6 };

	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa Vetor ponteiro 2 metade>>");
	printf("\n\n ## Autor: Leonardo Melo\n\n");

	int *v = metade_final(vet, 6);

	printf("Valor: %d \n", v[0]);

	//Será apresentado o valor 4, pois v[0] armazena 4.

	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}
