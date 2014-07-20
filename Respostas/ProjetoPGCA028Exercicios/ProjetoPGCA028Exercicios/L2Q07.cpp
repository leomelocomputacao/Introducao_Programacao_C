//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//Constantes
#define TEXTO_CATEGORIA_DO_NADADOR_IDADE_5_A_7 "Infantil"
#define TEXTO_CATEGORIA_DO_NADADOR_IDADE_8_A_10 "Juvenil"
#define TEXTO_CATEGORIA_DO_NADADOR_IDADE_11_A_15 "Adolescente"
#define TEXTO_CATEGORIA_DO_NADADOR_IDADE_16_A_30 "Adulto"
#define TEXTO_CATEGORIA_DO_NADADOR_IDADE_ACIMA_DE_30 "Senior"

#define IDADE_MINIMA_NADADOR 5
#define IDADE_MAXIMA_NADADOR 65

//Método Main - Entry Point do Programa
int main27()
{
	//Declaração de variáveis locais
	int idadeDoNadador = 0;
	bool dadosDeEntradaValidos = true;

	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa Categoria do Nadador>>");
	printf("\n\n ## Autor: Leonardo Melo");

	//Captura de dados do teclado
	printf("\n\n\n =>> Digite a idade do nadador: ");
	scanf_s("%d", &idadeDoNadador);

	//validacoes
	if (idadeDoNadador < IDADE_MINIMA_NADADOR || idadeDoNadador > IDADE_MAXIMA_NADADOR)
	{
		dadosDeEntradaValidos = false;
	}

	//Calculo e Exibição de resposta
	if (dadosDeEntradaValidos)
	{
		if (idadeDoNadador >= 5 && idadeDoNadador <= 7)
		{
			printf("\n\n # Idade do Nadador: %d - Categoria do Nadador: %s", idadeDoNadador, TEXTO_CATEGORIA_DO_NADADOR_IDADE_5_A_7);
		}
		else
		{
			if (idadeDoNadador >= 8 && idadeDoNadador <= 10)
			{
				printf("\n\n # Idade do Nadador: %d - Categoria do Nadador: %s", idadeDoNadador, TEXTO_CATEGORIA_DO_NADADOR_IDADE_8_A_10);
			}
			else
			{
				if (idadeDoNadador >= 11 && idadeDoNadador <= 15)
				{
					printf("\n\n # Idade do Nadador: %d - Categoria do Nadador: %s", idadeDoNadador, TEXTO_CATEGORIA_DO_NADADOR_IDADE_11_A_15);
				}
				else
				{
					if (idadeDoNadador >= 16 && idadeDoNadador <= 30)
					{
						printf("\n\n # Idade do Nadador: %d - Categoria do Nadador: %s", idadeDoNadador, TEXTO_CATEGORIA_DO_NADADOR_IDADE_16_A_30);
					}
					else
					{
						printf("\n\n # Idade do Nadador: %d - Categoria do Nadador: %s", idadeDoNadador, TEXTO_CATEGORIA_DO_NADADOR_IDADE_ACIMA_DE_30);
					}
				}
			}
		}

	}
	else
	{
		//Mostra uma mensagem de exceção
		printf("\n\n # Dado(s) de entrada invalido(s)!");
	}

	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}
