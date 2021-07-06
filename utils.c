#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

titulo* acao[QTD_ACOES];

void inicializar(void)
{
	printf(":::MERCADO DE A��ES:::\n\nLembre-se de ativar a compra e a venda para realizar as transa��es.\n");
}

int menu(void)
{
	int op;
	printf("Digite a op��o desejada:\n");
	printf("0 - Sair\n");
	printf("1 - Comprar\n");
	printf("2 - Vender\n");
	printf("3 - Transa��o\n::");
	scanf("%d", &op);
	
	return op;
}

int comprar(void)
{
	printf("Escolha qual a��o deseja comprar: \n");
	
	FILE *ptr;
	
	ptr = fopen("titulos-compra.txt", "r");
	
	if((ptr = fopen("titulos-compra.txt", "r")) == NULL)
	{
		printf("Erro!\n");
		exit(1);
	}
	
	int valor[TAM];
	char str1[NOME_TAM];
	char str2[NOME_TAM];
	char str3[NOME_TAM];
	int qtd[TAM];
	fscanf(ptr, "%d %s %d", &valor[0], str1, &qtd[0]);
	fscanf(ptr, "%d %s %d", &valor[1], str2, &qtd[1]);
	fscanf(ptr, "%d %s %d", &valor[2], str3, &qtd[2]);
	
	fclose(ptr);
	float real[TAM];
	
	for(int iCont = 0; iCont < TAM; iCont++)
	{
		real[iCont] = (float)valor[iCont] / 100.0;
	}
	
	//Armazenar nome na struct####################
	int jCont = 0;
	for(; jCont < NOME_TAM; jCont++)
		acao[0]->nome[jCont] = str1[jCont];
	str1[jCont] = '\0';
	jCont = 0;
	for(; jCont < NOME_TAM; jCont++)
		acao[1]->nome[jCont] = str2[jCont];
	str2[jCont] = '\0';
	jCont = 0;
	for(; jCont < NOME_TAM; jCont++)
		acao[2]->nome[jCont] = str3[jCont];
	str3[jCont] = '\0';
	//############################################
	//Armazenar valor na struct
	int iCont = 0;
	int kCont = 0;
	for(; iCont < TAM; iCont++, kCont++)
	{
		acao[kCont]->valor = real[iCont];
	}
	//Armazenar quantidade na struct
	kCont = 0;
	for(; iCont < TAM; iCont++, kCont++)
	{
		acao[kCont]->qtd = qtd[iCont];
	}
	printf("%s -- R$%.2f -- %d\n", str1, real[0], qtd[0]);
	printf("%s -- R$%.2f -- %d\n", str2, real[1], qtd[1]);
	printf("%s -- R$%.2f -- %d\n", str3, real[2], qtd[2]);
	//listar(valor);
	
	return SUCESSO;
}

int vender(void)
{
	printf("Escolha qual a��o deseja vender:\n");
	FILE *ptr;
	
	ptr = fopen("titulos-venda.txt", "r");
	if((ptr = fopen("titulos-venda.txt", "r")) == NULL)
	{
		printf("Erro!\n");
		exit(1);
	}
	int valor[TAM];
	char str1[NOME_TAM];
	char str2[NOME_TAM];
	char str3[NOME_TAM];
	int qtd[TAM];
	fscanf(ptr, "%d %s %d", &valor[0], str1, &qtd[0]);
	fscanf(ptr, "%d %s %d", &valor[1], str2, &qtd[1]);
	fscanf(ptr, "%d %s %d", &valor[2], str3, &qtd[2]);
	
	fclose(ptr);
	
	float real[TAM];
	
	for(int iCont = 0; iCont < TAM; iCont++)
	{
		real[iCont] = (float)valor[iCont] / 100.0;
	}
	
	//Armazenar nome na struct####################
	int jCont = 0;
	for(; jCont < NOME_TAM; jCont++)
		acao[3]->nome[jCont] = str1[jCont];
	str1[jCont] = '\0';
	jCont = 0;
	for(; jCont < NOME_TAM; jCont++)
		acao[4]->nome[jCont] = str2[jCont];
	str2[jCont] = '\0';
	jCont = 0;
	for(; jCont < NOME_TAM; jCont++)
		acao[5]->nome[jCont] = str3[jCont];
	str3[jCont] = '\0';
	//############################################
	//Armazenar valor na struct
	int iCont = 0;
	int kCont = TAM;
	for(; iCont < TAM; iCont++, kCont++)
	{
		acao[kCont]->valor = real[iCont];
	}
	//Armazenar quantidade na struct
	kCont = 3;
	for(; iCont < TAM; iCont++, kCont++)
	{
		acao[kCont]->qtd = qtd[iCont];
	}
	printf("%s -- R$%.2f -- %d\n", str1, real[0], qtd[0]);
	printf("%s -- R$%.2f -- %d\n", str2, real[1], qtd[1]);
	printf("%s -- R$%.2f -- %d\n", str3, real[2], qtd[2]);
	
	return SUCESSO;
}


void cotacao(void)
{
	printf("Deseja comprar ou vender a��es?\n");
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
			int iCont;
			for(iCont = 0, kCont = 3; iCont < 3; iCont++, kCont++)
			{
				printf("%d -- %.2f vs %.2f\n", iCont, acao[iCont]->valor, acao[kCont]->valor);
				printf("\n");
			}
			printf("Qual a��o voc� deseja escolher?:: ");
			scanf("%d", &op);
			int escolha = op;
			if(acao[iCont]->valor > acao[kCont]->valor)
			{
				printf("A��o comprada a: R$%.2f\n", acao[escolha]->valor);
				mostrarVendas(acao[escolha]->valor);
			}
				
			else
			{
				printf("A��o comprada a: R$%.2f\n", acao[escolha + 3]->valor);
				mostrarVendas(acao[escolha + 3]->valor);
			}
				
			aplicarValor(tipo, escolherPos(op));
			printf("Valor aplicado: %f\n", aplicarValor(tipo, escolherPos(op)));
		}break;
		case 2:{
			int kCont;
			int iCont;
			for(iCont = 0, kCont = 3; iCont < 3; iCont++, kCont++)
			{
				printf("%d -- %.2f vs %.2f\n", iCont, acao[iCont]->valor, acao[kCont]->valor);
				printf("\n");
				
			}
			printf("Qual a��o voc� deseja escolher?:: ");
			scanf("%d", &op);
			int escolha = op;
			if(acao[iCont]->valor < acao[kCont]->valor)
			{
				printf("A��o vendida a: R$%.2f\n", acao[escolha]->valor);
				mostrarVendas(acao[escolha]->valor);
			}
				
			else
			{
				printf("A��o vendida a: R$%.2f\n", acao[escolha + 3]->valor);
				mostrarVendas(acao[escolha + 3]->valor);
			}
				
			printf("Valor aplicado: %f\n", aplicarValor(tipo, escolherPos(op)));
		}break;
	}
}


int escolherPos(int escolha)
{
	return escolha;
}

float aplicarValor(int conjunto, int posicao)
{
	float valorAplicado = acao[conjunto * posicao]->valor;
	return valorAplicado;
}


void exibirItem(titulo* head)
{
	printf("QTD: %d\n", head->qtd);
	printf("Valor: %f\n", head->valor);
}

void mostrarVendas(titulo* acaoVendida)
{
	exibirItem(acao);
}