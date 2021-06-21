#include <stdio.h>
#include "utils.h"

titulo acao[3];

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
	printf("Escolha qual ação deseja comprar\n", "r");
	FILE *arqPont;
	arqPont = fopen("/titulos-de-bolsa/titulos-compra.txt\n", "r");
	
		
	
	int iCont;
	for(iCont = 0; iCont < 3; iCont++)
	{
		fscanf(arqPont, "%d %f %s", &acao[iCont].qtd, &acao[iCont].valor, acao[iCont].nome);	
	}
	
	
	return SUCESSO;
}

int vender(void)
{
	int escolha;
	printf("Escolha qual ação deseja vender\n");
	FILE *arqPont;
	arqPont = fopen("/titulos-de-bolsa/titulos-venda.txt\n", "r");
	return SUCESSO;
}

int listar(titulo vetor[])
{
	int iCont = 0;
	
	while(iCont < 3)
	{
		printf("%d >> %s -- %d -- R$%f\n", iCont, vetor[iCont].nome, vetor[iCont].qtd, vetor[iCont].valor);
		iCont++;
	}
}