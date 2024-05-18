#ifndef FUNCOES_H
#define FUNCOES_H
//.h
#define CLIENTES 1000
#define OPERACOES 100

typedef struct {
    char nome[50];
    char cpf[15];
    char tipo_conta[20];
    float saldo;
    char senha[10];
    float extrato[OPERACOES];
    int num_operacoes;
} CLIENTE;

void criando_contatos(CLIENTE[], int*);
void salvar_cliente(CLIENTE[], int*);
void carregar_clientes(CLIENTE[], int*);
void listar_clientes(CLIENTE[], int*);
void apaga_cliente(CLIENTE[], int*);
void debito(CLIENTE[], int*);
void deposito(CLIENTE[], int*);
void extrato(CLIENTE[], int*);
#endif 
