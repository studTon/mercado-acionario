#include <stdio.h>
#include <stdlib.h>
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
	FILE *ptr;
	
	ptr = fopen("titulos-compra.txt", "r");
	
	if((ptr = fopen("titulos-compra.txt", "r")) == NULL)
	{
		printf("Erro!\n");
		exit(1);
	}
	
	float valor[3];
	fscanf(ptr, "%f", &valor[0]);
	fscanf(ptr, "%f", &valor[1]);
	fscanf(ptr, "%f", &valor[2]);
	
	fclose(ptr);
	printf("-- %f\n", valor[0]);
	printf("-- %f\n", valor[1]);
	printf("-- %f\n", valor[2]);
	//listar(valor);
	
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
		printf("-> R$ %.2f\n", vetor[iCont]);
		iCont++;
	}
}

int cotacao(int tipo)
{
	
}