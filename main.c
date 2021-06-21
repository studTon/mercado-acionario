#include <stdio.h>
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

			}break;
			case 2:{

			}break;
			case 3:{

			}break;
			default: printf("Input inválido\n"); break;
		}	
	}
	while(chave != 0);
	
	return 0;
}