#include <stdio.h>
#include "utils.h"

int menu(void)
{
	int op;
	printf("Digite a op��o desejada:\n");
	printf("0 - Sair\n");
	printf("1 - Comprar\n");
	printf("2 - Vender\n");
	printf("3 - �ltima transa��o\n");
	scanf("%d", &op);
	
	return op;
}

int comprar(void)
{
	int escolha;
	printf("Escolha qual a��o deseja comprar\n", "r");
	FILE *arqPont;
	arqPont = fopen("/titulos-de-bolsa/titulos-compra.txt\n", "r");
	return SUCESSO;
}

int vender(void)
{
	int escolha;
	printf("Escolha qual a��o deseja vender\n");
	FILE *arqPont;
	arqPont = fopen("/titulos-de-bolsa/titulos-venda.txt\n", "r");
	return SUCESSO;
}