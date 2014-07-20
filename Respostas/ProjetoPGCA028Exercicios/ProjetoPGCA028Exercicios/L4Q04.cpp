//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>

//Constantes
#define SEXO_MASCULINO 'M'
#define SEXO_FEMININO 'F'

#define NUMERO_MINIMO_DE_PESSOAS_A_SEREM_CADASTRADAS 1

#define IDADE_MAIOR 130
#define IDADE_MENOR 0 

#define SALARIO_MENOR 0.1
#define SALARIO_MAIOR 1000000


//Método Main - Entry Point do Programa
int main44()
{
	//Declaração de variáveis locais
	bool dadosDeEntradaValidos = true;
	bool sairDoCadastro = false;

	int idadeDigitada = 0;
	char sexoDigitado = ' ';
	float salarioDigitado = 0.0;

	float mediaSalarialDoGrupo = 0.0;
	int maiorIdadeDoGrupo = IDADE_MENOR;
	int menorIdadeDoGrupo = IDADE_MAIOR;
	float menorSalarioDoGrupo = SALARIO_MAIOR;
	int quantidadeDeMulheresComSalarioAte1500 = 0;
	int idadeDaPessoaComMenorSalario = 0;
	char sexoDaPessoaComMenorSalario = ' ';

	float somaSalarialDoGrupo = 0.0;

	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa Pesquisa de habitantes de uma regiao>>");
	printf("\n\n ## Autor: Leonardo Melo");

	int contador = 1;

	do{
		do{
			dadosDeEntradaValidos = true;

			printf("\n\n\n =>> Digite a idade da pessoa %d: ", contador);
			scanf_s("%d", &idadeDigitada);

			if (idadeDigitada < IDADE_MENOR)
			{
				printf("\n\nVoce digitou uma idade negativa e o programa saira do cadastro.");
	
				if (contador == 1)
				{
					menorIdadeDoGrupo = 0;
				}

				sairDoCadastro = true;
				break;
			}
			else
			{
				if (idadeDigitada > IDADE_MAIOR)
				{
					dadosDeEntradaValidos = false;
					printf("\n\nEntrada Invalida!\nA idade nao pode ser maior que %d.", IDADE_MAIOR);
				}
			}

		} while (!dadosDeEntradaValidos);

		if (sairDoCadastro)
		{
			break;
		}

		do{
			dadosDeEntradaValidos = true;

			printf("\n\n\n =>> Digite %c para MASCULINO ou %c para FEMININO: ", SEXO_MASCULINO, SEXO_FEMININO);

			sexoDigitado = getchar();

			fflush(stdin);

			sexoDigitado = toupper(sexoDigitado);

			if (sexoDigitado != SEXO_FEMININO && sexoDigitado != SEXO_MASCULINO)
			{
				printf("\n\nEntrada Invalida!\nValores digitados sao diferentes de %c ou %c.", SEXO_MASCULINO, SEXO_FEMININO);

				dadosDeEntradaValidos = false;
			}

		} while (!dadosDeEntradaValidos);

		do{
			dadosDeEntradaValidos = true;

			printf("\n\n\n =>> Digite o salario da pessoa %d: ", contador);
			scanf_s("%f", &salarioDigitado);

			if (salarioDigitado < SALARIO_MENOR || salarioDigitado > SALARIO_MAIOR)
			{
				printf("\n\nEntrada Invalida!\nSalario nao pode ser menor que %.2f e maior que %.2f.", SALARIO_MENOR, SALARIO_MAIOR);

				dadosDeEntradaValidos = false;
			}

		} while (!dadosDeEntradaValidos);


		somaSalarialDoGrupo += salarioDigitado;


		if (idadeDigitada < menorIdadeDoGrupo)
		{
			menorIdadeDoGrupo = idadeDigitada;
		}

		if (idadeDigitada > maiorIdadeDoGrupo)
		{
			maiorIdadeDoGrupo = idadeDigitada;
		}

		if (salarioDigitado < menorSalarioDoGrupo)
		{
			menorSalarioDoGrupo = salarioDigitado;

			idadeDaPessoaComMenorSalario = idadeDigitada;
			sexoDaPessoaComMenorSalario = sexoDigitado;
		}

		if (sexoDigitado == SEXO_FEMININO && salarioDigitado <= 1500.0)
		{
			quantidadeDeMulheresComSalarioAte1500++;
		}

		contador++;

	} while (true);

	mediaSalarialDoGrupo = (float)somaSalarialDoGrupo / (float)contador;

	printf_s("\n\n\nMedia dos salarios do grupo: %.2f", mediaSalarialDoGrupo);
	printf_s("\n\nMaior idade do grupo: %d", maiorIdadeDoGrupo);
	printf_s("\n\nMenor idade do grupo: %d", menorIdadeDoGrupo);
	printf_s("\n\nQuantidade de mulheres com salario ate 1500: %d", quantidadeDeMulheresComSalarioAte1500);
	printf_s("\n\nIdade da pessoa com o menor salario do grupo: %d", idadeDaPessoaComMenorSalario);
	printf_s("\n\nSexo da pessoa com o menor salario do grupo: %c", sexoDaPessoaComMenorSalario);

	//Pula linha e pausa a tela
	printf("\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}
