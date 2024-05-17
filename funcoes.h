#ifndef FUNCOES_H
#define FUNCOES_H

#define CLIENTES 1000

typedef struct {
    char nome[50];
    char cpf[15];
    char tipo_conta[20];
    double saldo;
    char senha[10];
    int num_operacoes;
} CLIENTE;

void criando_contatos(CLIENTE[], int*);
void salvar_cliente(CLIENTE[], int*);
void carregar_clientes(CLIENTE[], int*);
void listar_clientes(CLIENTE[], int*);
#endif 
