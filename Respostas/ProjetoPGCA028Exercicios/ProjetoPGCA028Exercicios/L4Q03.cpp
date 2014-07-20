//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>

//Constantes
#define COR_DOS_OLHOS_AZUL 'A'
#define COR_DOS_OLHOS_PRETO 'P'
#define COR_DOS_OLHOS_VERDE 'V'
#define COR_DOS_OLHOS_CASTANHO 'C'

#define COR_DOS_CABELOS_RUIVO 'R'
#define COR_DOS_CABELOS_PRETO 'P'
#define COR_DOS_CABELOS_LOURO 'L'
#define COR_DOS_CABELOS_CASTANHO 'C'

#define NUMERO_MINIMO_DE_PESSOAS_A_SEREM_CADASTRADAS 1
#define IDADE_MAIOR 130
#define IDADE_MENOR 1 
#define PESO_MAIOR 400.0
#define PESO_MENOR 2.0
#define ALTURA_MAIOR 2.4
#define ALTURA_MENOR 0.4

//Método Main - Entry Point do Programa
int main43()
{
	//Declaração de variáveis locais
	int numeroDePessoasASeremCadastradas = 0;
	bool dadosDeEntradaValidos = true;
	int idadeDigitada = 0;
	float pesoDigitado = 0.0;
	float alturaDigitada = 0.0;
	char corDosOlhosDigitada = ' ';
	char corDosCabelosDigitada = ' ';

	int quantidadeDePessoasComIdadeMaiorQue50EPesoMenor60 = 0;
	int quantidadeDePessoasComAlturaInferior1_5 = 0;
	int somaDaIdadesDasPessoasComAlturaInferior1_5 = 0;
	int quantidadeDePessoasComOlhosAzuis = 0;
	int quantidadeDePessoasRuivasSemOlhosAzuis = 0;


	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa Pesquisa Olhos e Cabelos>>");
	printf("\n\n ## Autor: Leonardo Melo");

	do{
		dadosDeEntradaValidos = true;

		printf("\n\n\n =>> Digite o numero de pessoas a serem cadastradas: ");
		scanf_s("%d", &numeroDePessoasASeremCadastradas);

		if (numeroDePessoasASeremCadastradas < NUMERO_MINIMO_DE_PESSOAS_A_SEREM_CADASTRADAS)
		{
			printf("\n\nEntrada Invalida!\nNumero minimo de pessoas a serem cadastradas: %d", NUMERO_MINIMO_DE_PESSOAS_A_SEREM_CADASTRADAS);

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

			printf("\n\n\n =>> Digite o peso da pessoa %d: ", contador);
			scanf_s("%f", &pesoDigitado);

			if (pesoDigitado < PESO_MENOR || pesoDigitado > PESO_MAIOR)
			{
				printf("\n\nEntrada Invalida!\nO peso nao pode ser menor que %.2f ou maior que %.2f.", PESO_MENOR, PESO_MAIOR);

				dadosDeEntradaValidos = false;
			}

		} while (!dadosDeEntradaValidos);

		do{
			dadosDeEntradaValidos = true;

			printf("\n\n\n =>> Digite a altura pessoa %d: ", contador);
			scanf_s("%f", &alturaDigitada);

			if (alturaDigitada < ALTURA_MENOR || alturaDigitada > ALTURA_MAIOR)
			{
				printf("\n\nEntrada Invalida!\nA altura nao pode ser menor que %.2f ou maior que %.2f.", ALTURA_MENOR, ALTURA_MAIOR);

				dadosDeEntradaValidos = false;
			}

		} while (!dadosDeEntradaValidos);

		do{
			dadosDeEntradaValidos = true;

			printf("\n\n\n =>> Digite a letra correspondente a cor dos olhos (%c, %c, %c e %c): ", COR_DOS_OLHOS_AZUL, COR_DOS_OLHOS_CASTANHO, COR_DOS_OLHOS_PRETO, COR_DOS_OLHOS_VERDE);

			corDosOlhosDigitada = getchar();

			fflush(stdin);

			corDosOlhosDigitada = toupper(corDosOlhosDigitada);

			if (corDosOlhosDigitada != COR_DOS_OLHOS_AZUL && corDosOlhosDigitada != COR_DOS_OLHOS_CASTANHO && corDosOlhosDigitada != COR_DOS_OLHOS_PRETO && corDosOlhosDigitada != COR_DOS_OLHOS_VERDE)
			{
				printf("\n\nEntrada Invalida!\nValores digitados sao diferentes: %c, %c, %c e %c.", COR_DOS_OLHOS_AZUL, COR_DOS_OLHOS_CASTANHO, COR_DOS_OLHOS_PRETO, COR_DOS_OLHOS_VERDE);

				dadosDeEntradaValidos = false;
			}

		} while (!dadosDeEntradaValidos);

		do{
			dadosDeEntradaValidos = true;

			printf("\n\n\n =>> Digite a letra correspondente a cor dos cabelos (%c, %c, %c e %c): ", COR_DOS_CABELOS_CASTANHO, COR_DOS_CABELOS_LOURO, COR_DOS_CABELOS_PRETO, COR_DOS_CABELOS_RUIVO);

			corDosCabelosDigitada = getchar();

			fflush(stdin); 

			corDosCabelosDigitada = toupper(corDosCabelosDigitada);

			if (corDosCabelosDigitada != COR_DOS_CABELOS_CASTANHO && corDosCabelosDigitada != COR_DOS_CABELOS_LOURO && corDosCabelosDigitada != COR_DOS_CABELOS_PRETO && corDosCabelosDigitada != COR_DOS_CABELOS_RUIVO)
			{
				printf("\n\nEntrada Invalida!\nValores digitados sao diferentes: %c, %c, %c e %c.", COR_DOS_CABELOS_CASTANHO, COR_DOS_CABELOS_LOURO, COR_DOS_CABELOS_PRETO, COR_DOS_CABELOS_RUIVO);

				dadosDeEntradaValidos = false;
			}

		} while (!dadosDeEntradaValidos);

		printf("\n\n\n =>>Cadastro(%d): Idade: %d Peso: %.2f Altura: %.2f Olhos: %c Cabelos: %c", contador, idadeDigitada, pesoDigitado, alturaDigitada, corDosOlhosDigitada, corDosCabelosDigitada);

		if (idadeDigitada > 50 && pesoDigitado < 60)
		{
			quantidadeDePessoasComIdadeMaiorQue50EPesoMenor60++;
		}

		if (alturaDigitada < 1.5)
		{
			quantidadeDePessoasComAlturaInferior1_5++;
			somaDaIdadesDasPessoasComAlturaInferior1_5 += idadeDigitada;
		}

		if (corDosOlhosDigitada == COR_DOS_OLHOS_AZUL)
		{
			quantidadeDePessoasComOlhosAzuis++;
		}

		if (corDosCabelosDigitada == COR_DOS_CABELOS_RUIVO && corDosOlhosDigitada != COR_DOS_OLHOS_AZUL)
		{
			quantidadeDePessoasRuivasSemOlhosAzuis++;
		}
	}

	double percentualDePessoasComOlhosAzuis = (100.0 * (double)quantidadeDePessoasComOlhosAzuis) / (double)numeroDePessoasASeremCadastradas;

	printf("\n\n\nPessoas com idade superior a 50 anos e peso inferior a 60 quilos: %d", quantidadeDePessoasComAlturaInferior1_5);
	printf("\n\nMedia das idades das pessoas com altura inferior a 1,50: %.2f", (float)somaDaIdadesDasPessoasComAlturaInferior1_5 / (float)quantidadeDePessoasComAlturaInferior1_5);
	printf("\n\nPercentagem de pessoas com olhos azuis entre todas as pessoas: %.2lf%%", percentualDePessoasComOlhosAzuis);
	printf("\n\nQuantidade de Pessoas Ruivas sem Olhos Azuis: %d", quantidadeDePessoasRuivasSemOlhosAzuis);

	//Pula duas linhas e Pausa a Tela (Utilizando comandos DOS)
	printf("\n\n\n");
	system("pause");

	//Retorno do método main
	return(EXIT_SUCCESS);
}
