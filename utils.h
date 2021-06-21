#ifndef UTILS_H
#define UTILS_H

#define SUCESSO 1
#define FALHA 0
int menu(void);

typedef struct{
	int qtd;
	float valor;
	char nome[8];
} titulo;

titulo acao[3];
#endif