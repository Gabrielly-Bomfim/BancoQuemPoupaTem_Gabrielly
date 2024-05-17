#include <stdio.h>
#include "funcoes.h"

void salvar_cliente(CLIENTE CLIENTE_LIMITE[], int *num_clientes) {
    FILE *arquivo = fopen("cadastros.bin", "wb");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }
    fwrite(num_clientes, sizeof(int), 1, arquivo);
    fwrite(CLIENTE_LIMITE, sizeof(CLIENTE), *num_clientes, arquivo);
    fclose(arquivo);
}
void carregar_clientes(CLIENTE CLIENTE_LIMITE[], int *num_clientes) {
    FILE *arquivo = fopen("clientes.bin", "rb");
    if (arquivo == NULL) {
        printf("Arquivo não encontrado. \n");
        return;
    }
    fread(&num_clientes, sizeof(int), 1, arquivo);
    fread(CLIENTE_LIMITE, sizeof(CLIENTE), num_clientes, arquivo);
    fclose(arquivo);
}

void listar_clientes(CLIENTE CLIENTE_LIMITE[], int *num_clientes) {
    printf("\nLista de Clientes:\n");
    for (int i = 0; i < *num_clientes; i++) {
        printf("---------------------------------------\n");
        printf ("\nNome: %s\n", CLIENTE_LIMITE[i].nome);
        printf("CPF: %s\n", CLIENTE_LIMITE[i].cpf);
        printf("Tipo de Conta: %s\n", CLIENTE_LIMITE[i].tipo_conta);
        printf("Saldo: %.2f\n", CLIENTE_LIMITE[i].saldo);
        printf("---------------------------------------\n");
    }
}

void criando_clientes(CLIENTE CLIENTE_LIMITE[], int *num_clientes) {

    if (*num_clientes < CLIENTES) {
        CLIENTE novo_cliente;
        printf("Informe o CPF: ");
        scanf("%s", novo_cliente.cpf);
        printf("Informe a Senha: ");
        scanf("%s", novo_cliente.senha);
        printf("Nome do cliente: ");
        scanf("%s", novo_cliente.nome);
        printf("Qual o Tipo de conta (comum ou plus): ");
        scanf("%s", novo_cliente.tipo_conta);
        printf("Saldo inicial: ");
        scanf("%f", &novo_cliente.saldo);
        novo_cliente.num_operacoes = 0;
        CLIENTE_LIMITE[*num_clientes] = novo_cliente;
        (*num_clientes)++; 
        salvar_cliente(CLIENTE_LIMITE, &num_clientes);
        printf("Cliente cadastrado!\n");
    } else {
        printf("Limite de clientes atingido.\n");
    }
}



