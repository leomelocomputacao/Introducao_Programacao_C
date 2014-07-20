//Inclusão de Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>

//Constantes
#define HORA_CODIGO_A 15.0
#define HORA_CODIGO_B 18.5
#define HORA_CODIGO_C 21.0

#define CODIGO_CATEGORIA_A 'A'
#define CODIGO_CATEGORIA_B 'B'
#define CODIGO_CATEGORIA_C 'C'

#define PERIODO_DE_PAGAMENTO_EM_SEMANAS 4.5

//Método Main - Entry Point do Programa
int main25()
{
	//Declaração de variáveis locais
	float numeroDeHorasTrabalhadasSemanaisPeloProfessor = 0.0;
	char codigoDoProfessor = 'A';
	double valorASerPagoParaProfessorEm4SemanaisEMeia = 0.0;
	bool dadosDeEntradaValidos = true;

	//Título do Programa e autor
	printf(" << UEFS - PGCA 2014.1 - Programa Salario do Professor em 4 semanas e meia>>");
	printf("\n\n ## Autor: Leonardo Melo");

	//Captura de dados do teclado
	printf("\n\n\n =>> Digite o codigo da categoria do profesor (A, B ou C): ");
	codigoDoProfessor = getchar();

	//Captura de dados do teclado
	printf("\n\n\n =>> Digite o numero de horas semanais do professor: ");
	scanf_s("%f", &numeroDeHorasTrabalhadasSemanaisPeloProfessor);

	//conversão para letra maúscula
	codigoDoProfessor = toupper(codigoDoProfessor);

	//validacoes
	if (codigoDoProfessor != CODIGO_CATEGORIA_A && codigoDoProfessor != CODIGO_CATEGORIA_B && codigoDoProfessor != CODIGO_CATEGORIA_C)
	{
		dadosDeEntradaValidos = false;
	}


	//Calculo e Exibição de resposta
	if (dadosDeEntradaValidos)
	{
		if (codigoDoProfessor == CODIGO_CATEGORIA_A)
		{
			valorASerPagoParaProfessorEm4SemanaisEMeia = numeroDeHorasTrabalhadasSemanaisPeloProfessor * PERIODO_DE_PAGAMENTO_EM_SEMANAS * HORA_CODIGO_A;
		}
		else
		{
			if (codigoDoProfessor == CODIGO_CATEGORIA_B)
			{
				valorASerPagoParaProfessorEm4SemanaisEMeia = numeroDeHorasTrabalhadasSemanaisPeloProfessor * PERIODO_DE_PAGAMENTO_EM_SEMANAS * HORA_CODIGO_B;
			}
			else
			{
				if (codigoDoProfessor == CODIGO_CATEGORIA_C)
				{
					valorASerPagoParaProfessorEm4SemanaisEMeia = numeroDeHorasTrabalhadasSemanaisPeloProfessor * PERIODO_DE_PAGAMENTO_EM_SEMANAS * HORA_CODIGO_C;
				}
			}
		}

		printf("\n\n # Valor a receber referente ao periodo de 4 semanas e meia: %.2f", valorASerPagoParaProfessorEm4SemanaisEMeia);
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
