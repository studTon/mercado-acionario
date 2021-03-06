#ifndef UTILS_H
#define UTILS_H

#define SUCESSO 1
#define FALHA 0
#define TAM 3
#define NOME_TAM 6
#define QTD_ACOES 6
typedef struct{
	int qtd;
	float valor;
	char nome[NOME_TAM];
	struct titulo* prox;
} titulo;

titulo* acao[QTD_ACOES];

void inicializar(void);
int menu(void);
int comprar(void);
int vender(void);
void cotacao(void);
float aplicarValor(int conjunto, int posicao);
int escolherPos(int escolha);
//titulo criarLista(void)
void exibirItem(titulo* head);
#endif