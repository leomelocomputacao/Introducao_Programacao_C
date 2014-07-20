//Importando bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//Constantes
#define ALTURA_MAIOR 2.4
#define ALTURA_MENOR 0.4 
#define MASCULINO 'M'
#define FEMININO 'F'
#define NUMERO_MINIMO_DE_PESSOAS_A_SEREM_CADASTRADAS 1
#define NUMERO_MAXIMO_DE_PESSOAS_A_SEREM_CADASTRADAS 50

//Método main - entry point
int main41()
{
	bool dadosDeEntradaValidos = true;
	float alturaDigitada = 0.0;
	char sexo;
	sexo = ' ';
	double maiorAltura = ALTURA_MENOR;
	double menorAltura = ALTURA_MAIOR;
	int numeroDeMulheres = 0;
	int numeroDeHomens = 0;
	float somaDaAlturaDasMulheres = 0.0;
	float mediaDaAlturaDasMulheres = 0.0;
	int numeroDePessoasASeremCadastradas = 0;

	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa Maior e Menor Altura,\nMedia da altura das Mulheres e numero>>");
	printf("\n\n ## Autor: Leonardo Melo");

	do{
		dadosDeEntradaValidos = true;

		printf("\n\n\n =>> Digite o numero de pessoas a serem cadastradas: ");
		scanf_s("%d", &numeroDePessoasASeremCadastradas);

		if (numeroDePessoasASeremCadastradas < NUMERO_MINIMO_DE_PESSOAS_A_SEREM_CADASTRADAS || numeroDePessoasASeremCadastradas > NUMERO_MAXIMO_DE_PESSOAS_A_SEREM_CADASTRADAS)
		{
			printf("\n\nEntrada Invalida!\nNumero minimo e maximo de pessoas a serem cadastradas: De %d ate %d", NUMERO_MINIMO_DE_PESSOAS_A_SEREM_CADASTRADAS, NUMERO_MAXIMO_DE_PESSOAS_A_SEREM_CADASTRADAS);

			dadosDeEntradaValidos = false;
		}

	} while (!dadosDeEntradaValidos);


	for (int contador = 1; contador <= numeroDePessoasASeremCadastradas; contador++)
	{
		do{
			dadosDeEntradaValidos = true;

			printf("\n\n\n =>> Digite a altura da pessoa %d: ", contador);
			scanf_s("%f", &alturaDigitada);

			if (alturaDigitada < ALTURA_MENOR || alturaDigitada > ALTURA_MAIOR)
			{
				printf("\n\nEntrada Invalida!\nA altura nao pode ser menor que %.2f ou maior que %.2f.", ALTURA_MENOR, ALTURA_MAIOR);

				dadosDeEntradaValidos = false;
			}
			else
			{
				if (maiorAltura < alturaDigitada)
				{
					maiorAltura = alturaDigitada;
				}

				if (menorAltura > alturaDigitada)
				{
					menorAltura = alturaDigitada;
				}
			}

		} while (!dadosDeEntradaValidos);

		do{
			dadosDeEntradaValidos = true;

			printf("\n\n\n =>> Digite %c para MASCULINO ou %c para FEMININO: ", MASCULINO, FEMININO);

			sexo = getchar(); 
			
			fflush(stdin);

			sexo = toupper(sexo);

			if (sexo != FEMININO && sexo != MASCULINO)
			{
				printf("\n\nEntrada Invalida!\nValores digitados sao diferentes de %c ou %c.", MASCULINO, FEMININO);

				dadosDeEntradaValidos = false;
			}
			else
			{
				if (sexo == MASCULINO)
				{
					numeroDeHomens++;
				}
				else
				{
					if (sexo == FEMININO)
					{
						numeroDeMulheres++;
						somaDaAlturaDasMulheres += alturaDigitada;
					}
				}
			}

		} while (!dadosDeEntradaValidos);
	}

	mediaDaAlturaDasMulheres = somaDaAlturaDasMulheres / (float)numeroDeMulheres;

	printf("\n\nMaior altura do grupo: %.2f", maiorAltura);
	printf("\n\nMenor altura do grupo: %.2f", menorAltura);
	printf("\n\nNumero de homens do grupo: %d", numeroDeHomens);
	printf("\n\nMedia da autura das mulheres: %.2f", mediaDaAlturaDasMulheres);

	//Pula linha e pausa a tela
	printf("\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}