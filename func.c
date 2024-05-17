#include <stdio.h>
#include <string.h>
#include "funcoes.h"

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
        CLIENTE_LIMITE[*num_clientes] = novo_cliente; // Adicionando o novo cliente ao array
        (*num_clientes)++; // Incrementando o número de clientes
        printf("Cliente cadastrado!\n");
    } else {
        printf("Limite de clientes atingido.\n");
    }
}

void clearBuffer(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
