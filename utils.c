#include <stdio.h>

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