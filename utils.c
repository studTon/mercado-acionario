#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

titulo acao[6];

int menu(void)
{
	int op;
	printf("Digite a opção desejada:\n");
	printf("0 - Sair\n");
	printf("1 - Comprar\n");
	printf("2 - Vender\n");
	printf("3 - Transação\n::");
	scanf("%d", &op);
	
	return op;
}

int comprar(void)
{
	printf("Escolha qual ação deseja comprar: \n");
	
	FILE *ptr;
	
	ptr = fopen("titulos-compra.txt", "r");
	
	if((ptr = fopen("titulos-compra.txt", "r")) == NULL)
	{
		printf("Erro!\n");
		exit(1);
	}
	
	int valor[3];
	char str1[8];
	char str2[8];
	char str3[8];
	int qtd[3];
	fscanf(ptr, "%d %s %d", &valor[0], &str1, &qtd[0]);
	fscanf(ptr, "%d %s %d", &valor[1], &str2, &qtd[1]);
	fscanf(ptr, "%d %s %d", &valor[2], &str3, &qtd[2]);
	
	fclose(ptr);
	float real[3];
	
	for(int iCont = 0; iCont < 3; iCont++)
	{
		real[iCont] = (float)valor[iCont] / 100.0;
	}
	
	//Armazenar nome na struct####################
	int jCont = 0;
	for(; jCont < NOME_TAM; jCont++)
		acao[0].nome[jCont] = str1[jCont];
	str1[jCont] = '\0';
	jCont = 0;
	for(; jCont < NOME_TAM; jCont++)
		acao[1].nome[jCont] = str2[jCont];
	str2[jCont] = '\0';
	jCont = 0;
	for(; jCont < NOME_TAM; jCont++)
		acao[2].nome[jCont] = str3[jCont];
	str3[jCont] = '\0';
	//############################################
	//Armazenar valor na struct
	int iCont = 0;
	int kCont = 0;
	for(; iCont < 3; iCont++, kCont++)
	{
		acao[kCont].valor = real[iCont];
	}
	//Armazenar quantidade na struct
	kCont = 0;
	for(; iCont < 3; iCont++, kCont++)
	{
		acao[kCont].qtd = qtd[iCont];
	}
	printf("%s -- R$%.2f -- %d\n", str1, real[0], qtd[0]);
	printf("%s -- R$%.2f -- %d\n", str2, real[1], qtd[1]);
	printf("%s -- R$%.2f -- %d\n", str3, real[2], qtd[2]);
	//listar(valor);
	
	return SUCESSO;
}

int vender(void)
{
	int escolha;
	printf("Escolha qual ação deseja vender:\n");
	FILE *ptr;
	
	ptr = fopen("titulos-venda.txt", "r");
	if((ptr = fopen("titulos-venda.txt", "r")) == NULL)
	{
		printf("Erro!\n");
		exit(1);
	}
	int valor[3];
	char str1[8];
	char str2[8];
	char str3[8];
	int qtd[3];
	fscanf(ptr, "%d %s %d", &valor[0], &str1, &qtd[0]);
	fscanf(ptr, "%d %s %d", &valor[1], &str2, &qtd[1]);
	fscanf(ptr, "%d %s %d", &valor[2], &str3, &qtd[2]);
	
	fclose(ptr);
	
	float real[3];
	
	for(int iCont = 0; iCont < 3; iCont++)
	{
		real[iCont] = (float)valor[iCont] / 100.0;
	}
	
	//Armazenar nome na struct####################
	int jCont = 0;
	for(; jCont < NOME_TAM; jCont++)
		acao[3].nome[jCont] = str1[jCont];
	str1[jCont] = '\0';
	jCont = 0;
	for(; jCont < NOME_TAM; jCont++)
		acao[4].nome[jCont] = str2[jCont];
	str2[jCont] = '\0';
	jCont = 0;
	for(; jCont < NOME_TAM; jCont++)
		acao[5].nome[jCont] = str3[jCont];
	str3[jCont] = '\0';
	//############################################
	//Armazenar valor na struct
	int iCont = 0;
	int kCont = 3;
	for(; iCont < 3; iCont++, kCont++)
	{
		acao[kCont].valor = real[iCont];
	}
	//Armazenar quantidade na struct
	kCont = 3;
	for(; iCont < 3; iCont++, kCont++)
	{
		acao[kCont].qtd = qtd[iCont];
	}
	printf("%s -- R$%.2f -- %d\n", str1, real[0], qtd[0]);
	printf("%s -- R$%.2f -- %d\n", str2, real[1], qtd[1]);
	printf("%s -- R$%.2f -- %d\n", str3, real[2], qtd[2]);
	
	return SUCESSO;
}


int cotacao(void)
{
	printf("Deseja comprar ou vender ações?\n");
	printf("0 - Voltar\n");
	printf("1 - Comprar\n");
	printf("2 - Vender\n");
	
	int tipo;
	scanf("%d", &tipo);
	switch(tipo)
	{
		int op;
		case 0: printf("Voltar...\n"); break;
		case 1:{
			int kCont;
			for(int iCont = 0, kCont = 3; iCont < 3; iCont++, kCont++)
			{
				printf("%d -- %.2f vs %.2f\n", iCont, acao[iCont].valor, acao[kCont].valor);
				printf("\n");
			}
			printf("Qual ação você deseja escolher?:: ");
				scanf("%d", &op);
				aplicarValor(tipo, escolherPos(op));
		}break;
		case 2:{
			int kCont;
			for(int iCont = 0, kCont = 3; iCont < 3; iCont++, kCont++)
			{
				printf("%d -- %.2f vs %.2f\n", iCont, acao[iCont].valor, acao[kCont].valor);
				printf("\n");
				
			}
			printf("Qual ação você deseja escolher?:: ");
				scanf("%d", &op);
				
				aplicarValor(tipo, escolherPos(op));
		}break;
	}
}


int escolherPos(int escolha)
{
	return escolha;
}

float aplicarValor(int conjunto, int posicao)
{
	float valorAplicado = acao[conjunto * posicao].valor;
	return valorAplicado;
}

