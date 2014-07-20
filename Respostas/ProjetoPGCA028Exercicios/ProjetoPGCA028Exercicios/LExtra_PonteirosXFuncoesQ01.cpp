//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void mostraPonteiro(int *a, int *b, char *nome, char *nome2)
{
	printf_s("\n\nEndereco de &%s: %x", nome, &a);
	printf_s("\nEndereco apontado por %s: %x", nome, a);
	printf_s("\nValor apontado por *%s: %d\n\n", nome, *a);

	printf_s("---------------------------------------------------------------------\n\n");
	printf_s("   ----------------------               ----------------------       \n");
	printf_s("     %x                  ----|        %d                        \n", a, *a);
	printf_s("   ----------------------        |      ----------------------       \n");
	printf_s("     %x                      |---->   %x     \n\n", &a, a);
	printf_s("---------------------------------------------------------------------");

	printf_s("\n\nEndereco de &%s: %x", nome2, &b);
	printf_s("\nEndereco apontado por %s: %x", nome2, b);
	printf_s("\nValor apontado por *%s: %d\n\n", nome2, *b);

	printf_s("---------------------------------------------------------------------\n\n");
	printf_s("   ----------------------               ----------------------       \n");
	printf_s("     %x                  ----|        %d                        \n", b, *b);
	printf_s("   ----------------------        |      ----------------------       \n");
	printf_s("     %x                      |---->   %x     \n\n", &b, b);
	printf_s("---------------------------------------------------------------------");
}

void misterio(int *p, int *q)
{
	mostraPonteiro(p, q, "p", "q");
	
	printf_s("\nint *temp;\n");
	int *temp;

	printf_s("\ntemp = p;\n");
	// *temp = *p; errado
	temp = p; //possivel solução

	mostraPonteiro(temp, p, "temp", "p");

	printf_s("\n*p = *q;\n");
	*p = *q;
	
	mostraPonteiro(p, q, "p", "q");

	printf_s("\n*q = *temp;\n");
	*q = *temp;

	mostraPonteiro(q, temp, "q", "temp");
}

//Método Main - Entry Point do Programa
int mainLEPF1()
{
	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa funcao misterio>>");
	printf("\n\n ## Autor: Leonardo Melo\n\n");

	int a = 6;
	int *i = &a;

	int b = 10;
	int *j = &b;

	misterio(i, j);
	
	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}
