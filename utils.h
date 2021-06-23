#ifndef UTILS_H
#define UTILS_H

#define SUCESSO 1
#define FALHA 0
#define TAM 3
#define NOME_TAM 8
typedef struct{
	int qtd;
	float valor;
	char nome[NOME_TAM];
} titulo;

titulo acao[TAM];

int menu(void);
int comprar(void);
int vender(void);
int listar(float vetor[]);
int cotacao(int tipo);

#endif