//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>

//Constantes
#define NUMERO_MINIMO_DE_PESSOAS_NA_SALA_CINEMA 1
#define NUMERO_MAXIMO_DE_PESSOAS_NA_SALA_CINEMA 150
#define IDADE_MAIOR 130
#define IDADE_MENOR 0 
#define OPINIAO_OTIMO 'A'
#define OPINIAO_BOM 'B'
#define OPINIAO_REGULAR 'C'
#define OPINIAO_RUIM 'D'
#define OPINIAO_PESSIMO 'E'

//Método Main - Entry Point do Programa
int main42()
{
	//Declaração de variáveis locais
	int numeroDePessoasASeremCadastradas = 0;
	int idadeDigitada = 0;
	bool dadosDeEntradaValidos = true;
	char opiniao = ' ';

	int numeroDeRespostasOtimo = 0;
	int numeroDeRespostasBom = 0;
	int numeroDeRespostasRegular = 0;
	int numeroDeRespostasRuim = 0;
	int numeroDeRespostasPessimo = 0;

	int somaDasIdadesDaOpcaoRuim = 0;
	double porcentagemDaOpcaoPessimo = 0.0;
	float mediaDeIdadeDaOpcaoRuim = 0.0;

	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa Estatistica no Cinema>>");
	printf("\n\n ## Autor: Leonardo Melo");

	do{
		dadosDeEntradaValidos = true;

		printf("\n\n\n =>> Digite o numero de pessoas a serem cadastradas: ");
		scanf_s("%d", &numeroDePessoasASeremCadastradas);

		if (numeroDePessoasASeremCadastradas < NUMERO_MINIMO_DE_PESSOAS_NA_SALA_CINEMA || numeroDePessoasASeremCadastradas > NUMERO_MAXIMO_DE_PESSOAS_NA_SALA_CINEMA)
		{
			printf("\n\nEntrada Invalida!\nNumero minimo e maximo de pessoas a serem cadastradas: De %d ate %d", NUMERO_MINIMO_DE_PESSOAS_NA_SALA_CINEMA, NUMERO_MAXIMO_DE_PESSOAS_NA_SALA_CINEMA);

			dadosDeEntradaValidos = false;
		}

	} while (!dadosDeEntradaValidos);

	for (int contador = 1; contador <= numeroDePessoasASeremCadastradas; contador++)
	{
		do{
			dadosDeEntradaValidos = true;

			printf("\n\n\n =>> Digite a idade da pessoa %d: ", contador);
			scanf_s("%d", &idadeDigitada);

			if (idadeDigitada < IDADE_MENOR || idadeDigitada > IDADE_MAIOR)
			{
				printf("\n\nEntrada Invalida!\nA idade nao pode ser menor que %d ou maior que %d.", IDADE_MENOR, IDADE_MAIOR);

				dadosDeEntradaValidos = false;
			}

		} while (!dadosDeEntradaValidos);

		do{
			dadosDeEntradaValidos = true;

			printf("\n\n\n =>> Digite sua opiniao em relacao ao filme: ");

			opiniao = getchar();

			fflush(stdin);

			opiniao = toupper(opiniao);

			if (opiniao != OPINIAO_OTIMO && opiniao != OPINIAO_BOM && opiniao != OPINIAO_REGULAR && opiniao != OPINIAO_RUIM && opiniao != OPINIAO_PESSIMO)
			{
				printf("\n\nEntrada Invalida!\nValores digitados sao diferentes: %c, %c, %c, %c e %c.", OPINIAO_OTIMO, OPINIAO_BOM, OPINIAO_REGULAR, OPINIAO_RUIM, OPINIAO_PESSIMO);

				dadosDeEntradaValidos = false;
			}
			else
			{
				switch (opiniao)
				{
				case OPINIAO_OTIMO:
					numeroDeRespostasOtimo++;
					break;
				case OPINIAO_BOM:
					numeroDeRespostasBom++;
					break;
				case OPINIAO_REGULAR:
					numeroDeRespostasRegular++;
					break;
				case OPINIAO_RUIM:
					numeroDeRespostasRuim++;
					somaDasIdadesDaOpcaoRuim += idadeDigitada;
					break;
				case OPINIAO_PESSIMO:
					numeroDeRespostasPessimo++;
					break;
				}
			}
			
		} while (!dadosDeEntradaValidos);
	}

	porcentagemDaOpcaoPessimo = (100.0 * (double)numeroDeRespostasPessimo) / (double)numeroDePessoasASeremCadastradas;
	mediaDeIdadeDaOpcaoRuim = ((float)somaDasIdadesDaOpcaoRuim) / ((float)numeroDeRespostasRuim);

	printf("\n\nTotal de respostas da nota %c: %d", OPINIAO_OTIMO, numeroDeRespostasOtimo);
	printf("\n\nTotal de respostas da nota %c: %d", OPINIAO_BOM, numeroDeRespostasBom);
	printf("\n\nTotal de respostas da nota %c: %d", OPINIAO_REGULAR, numeroDeRespostasRegular);
	printf("\n\nTotal de respostas da nota %c: %d", OPINIAO_RUIM, numeroDeRespostasRuim);
	printf("\n\nTotal de respostas da nota %c: %d", OPINIAO_PESSIMO, numeroDeRespostasPessimo);

	printf("\n\n\nMedia de idade das pessoas que responderam %c: %.2f", OPINIAO_RUIM, mediaDeIdadeDaOpcaoRuim);
	printf("\n\n\nPorcentagem das respostas %c: %.2f%%", OPINIAO_PESSIMO, porcentagemDaOpcaoPessimo);

	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}
