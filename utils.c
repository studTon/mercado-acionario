#include <stdio.h>
#include "utils.h"

titulo acao[TAM];

int menu(void)
{
	int op;
	printf("Digite a opção desejada:\n");
	printf("0 - Sair\n");
	printf("1 - Comprar\n");
	printf("2 - Vender\n");
	printf("3 - última transação\n");
	scanf("%d", &op);
	
	return op;
}

int comprar(void)
{
	int escolha;
	//printf("Escolha qual ação deseja comprar\n", "r");
	
	char nome_arq[28];
	FILE *fp;
	int iCont;
	fp = fopen("titulos-compra", "r");
	float  valor[3];
	fscanf(fp, "%f %f %f", &valor[0], &valor[1], &valor[2]);
	printf("== R$%f\n", valor[0]);
	listar(valor);
	//fclose(nome_arq);
	return SUCESSO;
}

int vender(void)
{
	int escolha;
	printf("Escolha qual ação deseja vender\n");
	FILE* arqPont;
	arqPont = fopen("titulos-venda.txt\n", "r");
	return SUCESSO;
}

int listar(float vetor[])
{
	int iCont = 0;
	
	while(iCont < TAM)
	{
		printf("== R$%f\n", vetor[iCont]);
		iCont++;
	}
}

int cotacao(int tipo)
{
	
}