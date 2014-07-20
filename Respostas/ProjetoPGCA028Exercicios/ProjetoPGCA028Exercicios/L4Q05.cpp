//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>

//Constantes
#define VOTO_CANDIDATO_A 1
#define VOTO_CANDIDATO_B 2
#define VOTO_CANDIDATO_C 3
#define VOTO_CANDIDATO_D 4
#define VOTO_NULO 5
#define VOTO_EM_BRANCO 6
#define SAIR_DO_CADASTRO_DE_VOTO 0

#define MENOR_OPCAO_DE_VOTO 0
#define MAIOR_OPCAO_DE_VOTO 6

//Método Main - Entry Point do Programa
int main45()
{
	//Declaração de variáveis locais
	int totalDeVotosCandidatoA = 0;
	int totalDeVotosCandidatoB = 0;
	int totalDeVotosCandidatoC = 0;
	int totalDeVotosCandidatoD = 0;

	int totalDeVotosNulos = 0;
	int totalDeVotosEmBranco = 0;

	float porcentagemDeVotosNulos = 0.0;
	float porcentagemDeVotosEmBranco = 0.0;

	int votoDigitado = 0;

	bool dadosDeEntradaValidos = true;
	bool sairDoCadastro = false;

	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa Eleicao Presidencial>>");
	printf("\n\n ## Autor: Leonardo Melo");

	int contador = 0;

	do{
		printf("\n\n\n <<== Tabela de votacao ==>>");

		printf("\n\n\n ## Para votar no Candicato A digite: %d", VOTO_CANDIDATO_A);
		printf("\n\n ## Para votar no Candicato B digite: %d", VOTO_CANDIDATO_B);
		printf("\n\n ## Para votar no Candicato C digite: %d", VOTO_CANDIDATO_C);
		printf("\n\n ## Para votar no Candicato D digite: %d", VOTO_CANDIDATO_D);
		printf("\n\n ## Para votar NULO digite: %d", VOTO_NULO);
		printf("\n\n ## Para votar EM BRANCO digite: %d", VOTO_EM_BRANCO);
		printf("\n\n ## Para encerrar a votacao digite: %d", SAIR_DO_CADASTRO_DE_VOTO);

		do{
			dadosDeEntradaValidos = true;

			printf("\n\n\n =>> Digite seu voto [%d voto(s) registrado(s)]: ", contador);
			scanf_s("%d", &votoDigitado);

			if (votoDigitado < MENOR_OPCAO_DE_VOTO || votoDigitado > MAIOR_OPCAO_DE_VOTO)
			{
				printf("\n\nEntrada Invalida!\nSeu voto nao pode ser menor que %d ou maior que %d.", MENOR_OPCAO_DE_VOTO + 1, MAIOR_OPCAO_DE_VOTO);
				printf("\n Para encerrar a votacao digite: %d", SAIR_DO_CADASTRO_DE_VOTO);

				dadosDeEntradaValidos = false;
			}
			else
			{
				if (votoDigitado == SAIR_DO_CADASTRO_DE_VOTO)
				{
					sairDoCadastro = true;
					break;
				}
			}

		} while (!dadosDeEntradaValidos);

		if (sairDoCadastro)
		{
			break;
		}

		switch (votoDigitado)
		{
		case VOTO_CANDIDATO_A:
			totalDeVotosCandidatoA++;
			break;
		case VOTO_CANDIDATO_B:
			totalDeVotosCandidatoB++;
			break;
		case VOTO_CANDIDATO_C:
			totalDeVotosCandidatoC++;
			break;
		case VOTO_CANDIDATO_D:
			totalDeVotosCandidatoD++;
			break;
		case VOTO_NULO:
			totalDeVotosNulos++;
			break;
		case VOTO_EM_BRANCO:
			totalDeVotosEmBranco++;
			break;
		}

		contador++;

	} while (true);

	double percentualDeVotosNulos = (100.0 * (double)totalDeVotosNulos) / (double)contador;
	double percentualDeVotosEmBranco = (100.0 * (double)totalDeVotosEmBranco) / (double)contador;

	printf_s("\n\n\nTotal de votos para o Candidato A: %d", totalDeVotosCandidatoA);
	printf_s("\n\nTotal de votos para o Candidato B: %d", totalDeVotosCandidatoB);
	printf_s("\n\nTotal de votos para o Candidato C: %d", totalDeVotosCandidatoC);
	printf_s("\n\nTotal de votos para o Candidato D: %d", totalDeVotosCandidatoD);
	printf_s("\n\nTotal de votos Nulos: %d", totalDeVotosNulos);
	printf_s("\n\nTotal de votos Em Branco: %d", totalDeVotosEmBranco);
	printf_s("\n\n\nPercentual de Votos Nulos: %.2lf%%", percentualDeVotosNulos);
	printf_s("\n\nPercentual de Votos Em Branco: %.2lf%%", percentualDeVotosEmBranco);

	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}
