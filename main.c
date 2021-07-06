#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "utils.h"

int main(void)
{
	setlocale(LC_ALL, "");
	
	
	int chave;
	do
	{
		chave = menu();
		switch(chave)
		{
			case 0: {
				printf("Sair...\n");
			}break;
			case 1:{
				comprar();
			}break;
			case 2:{
				vender();
			}break;
			case 3:{
				cotacao();
			}break;
			default: printf("Input inválido\n"); break;
		}	
	}
	while(chave != 0);
	
	return 0;
}