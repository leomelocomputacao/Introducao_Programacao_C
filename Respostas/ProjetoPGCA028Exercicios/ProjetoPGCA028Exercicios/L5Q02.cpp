//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>

#define QUANTIDADE_DE_QUESTOES 10
#define QUANTIDADE_DE_ALUNOS 15
#define VALOR_POR_QUESTAO_CORRETA 1.0
#define NOTA_MINIMA_PARA_APROVACAO 7.0
#define MENOR_NUMERO_DE_IDENTIFICACAO_DE_ALUNO 1

#define RESPOSTA_A 'A'
#define RESPOSTA_B 'B'
#define RESPOSTA_C 'C'
#define RESPOSTA_D 'D'
#define RESPOSTA_E 'E'

//Método Main - Entry Point do Programa
int main52()
{
	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa Correcao de Provas>>");
	printf("\n\n ## Autor: Leonardo Melo\n\n");

	//Declaração de variáveis locais
	char gabarito[QUANTIDADE_DE_QUESTOES];

	int numeroDosAlunos[QUANTIDADE_DE_ALUNOS];

	char provasDosAlunos[QUANTIDADE_DE_ALUNOS][QUANTIDADE_DE_QUESTOES];

	bool dadosDeEntradaValidos;

	int quantidadeDeAlunosAprovados = 0;

	//Ler gabarito
	for (int numeroDaQuestao = 0; numeroDaQuestao < QUANTIDADE_DE_QUESTOES; numeroDaQuestao++)
	{
		do{
			dadosDeEntradaValidos = true;

			printf("\nInforme o gabarito da questao <<< %2d >>> (Opcoes => %c, %c, %c, %c ou %c): ", numeroDaQuestao + 1, RESPOSTA_A, RESPOSTA_B, RESPOSTA_C, RESPOSTA_D, RESPOSTA_E);
			gabarito[numeroDaQuestao] = getchar();

			fflush(stdin);

			gabarito[numeroDaQuestao] = toupper(gabarito[numeroDaQuestao]);

			if (gabarito[numeroDaQuestao] != RESPOSTA_A && gabarito[numeroDaQuestao] != RESPOSTA_B && gabarito[numeroDaQuestao] != RESPOSTA_C && gabarito[numeroDaQuestao] != RESPOSTA_D && gabarito[numeroDaQuestao] != RESPOSTA_E)
			{
				printf("\n\nEntrada Invalida!\nO gabarito nao pode ser diferente de %c, %c, %c, %c e %c.\n", RESPOSTA_A, RESPOSTA_B, RESPOSTA_C, RESPOSTA_D, RESPOSTA_E);

				dadosDeEntradaValidos = false;
			}
			
		} while (!dadosDeEntradaValidos);

	}

	//Ler respostas dos alunos
	for (int numeroDoAluno = 0; numeroDoAluno < QUANTIDADE_DE_ALUNOS; numeroDoAluno++)
	{
		//Ler Numero do aluno
		do{
			dadosDeEntradaValidos = true;

			printf("\nInforme o numero de identificacao do aluno <<< %2d >>>: ", numeroDoAluno + 1);

			scanf_s("%d", &numeroDosAlunos[numeroDoAluno]);

			//limpa o buffer do scanf
			fflush(stdin);

			if (numeroDosAlunos[numeroDoAluno] < MENOR_NUMERO_DE_IDENTIFICACAO_DE_ALUNO)
			{
				printf("\n\nEntrada Invalida!\nO numero nao pode ser menor que %d.\n", MENOR_NUMERO_DE_IDENTIFICACAO_DE_ALUNO);

				dadosDeEntradaValidos = false;
			}

		} while (!dadosDeEntradaValidos);


		for (int numeroDaQuestao = 0; numeroDaQuestao < QUANTIDADE_DE_QUESTOES; numeroDaQuestao++)
		{
			do{
				dadosDeEntradaValidos = true;

				printf("\nInforme a resposta da questao <<< %2d >>> do aluno <<< %2d >>>: ", numeroDaQuestao + 1, numeroDoAluno + 1);

				provasDosAlunos[numeroDoAluno][numeroDaQuestao] = getchar();

				fflush(stdin);

				provasDosAlunos[numeroDoAluno][numeroDaQuestao] = toupper(provasDosAlunos[numeroDoAluno][numeroDaQuestao]);

				if (provasDosAlunos[numeroDoAluno][numeroDaQuestao] != RESPOSTA_A && provasDosAlunos[numeroDoAluno][numeroDaQuestao] != RESPOSTA_B && provasDosAlunos[numeroDoAluno][numeroDaQuestao] != RESPOSTA_C && provasDosAlunos[numeroDoAluno][numeroDaQuestao] != RESPOSTA_D && provasDosAlunos[numeroDoAluno][numeroDaQuestao] != RESPOSTA_E)
				{
					printf("\n\nEntrada Invalida!\nA questao nao pode ser diferente de %c, %c, %c, %c e %c.\n", RESPOSTA_A, RESPOSTA_B, RESPOSTA_C, RESPOSTA_D, RESPOSTA_E);

					dadosDeEntradaValidos = false;
				}

			} while (!dadosDeEntradaValidos);

		}

		printf("\n");
	}

	for (int numeroDoAluno = 0; numeroDoAluno < QUANTIDADE_DE_ALUNOS; numeroDoAluno++)
	{
		printf_s("\n\nAluno <<%d>>\n", numeroDoAluno + 1);
		printf_s("Numero de identficacao: %d\n", numeroDosAlunos[numeroDoAluno]);
		
		float nota = 0.0;

		for (int numeroDaQuestao = 0; numeroDaQuestao < QUANTIDADE_DE_QUESTOES; numeroDaQuestao++)
		{
			if (provasDosAlunos[numeroDoAluno][numeroDaQuestao] == gabarito[numeroDaQuestao])
			{
				nota += VALOR_POR_QUESTAO_CORRETA;
			}
		}

		if (nota >= NOTA_MINIMA_PARA_APROVACAO)
		{
			quantidadeDeAlunosAprovados++;
		}

		printf_s("Nota: %.2f", nota);
	}

	printf_s("\n\nPercentual de alunos aprovados: %.2lf%%", (100.0 * (double)quantidadeDeAlunosAprovados) / (double)QUANTIDADE_DE_ALUNOS);

	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)

    printf("\n\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);

}
