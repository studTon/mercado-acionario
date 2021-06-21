#include <stdio.h>
#include "utils.h"

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