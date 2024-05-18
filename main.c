#include <stdio.h>
#include "funcoes.h"

void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    int num_clientes = 0;
    CLIENTE CLIENTE_LIMITE[CLIENTES];
    int opcao;
//com
    do {
            printf("\n-------------Banco Quem Poupa Tem----------\n");
            printf("1 - Cadastrar novo cliente \n");//opções
            printf("2 - Listar clientes \n");//opções
            printf("3 - Deletar cliente\n");//opções
            printf("4 - Debito\n");//opções
            printf("5 - Depositar\n");//opções
            printf("6 - Extrato\n");//opções
            printf("0 - Sair\n");//opções
            scanf("%d", &opcao);// opção escolhida
            limpar_buffer();//limpando o buffer

            if (opcao == 1) {//Se a opção for 1
              printf("--CADASTRO DE NOVOS CLIENTES--\n");
                criando_clientes(CLIENTE_LIMITE, &num_clientes);
                
            } else if (opcao == 2) {
              printf("--lISTAR CLIENTES--\n");
              listar_clientes(CLIENTE_LIMITE, &num_clientes);
                
            } else if (opcao == 3) {
              printf("--DELETAR CLIENTES--\n");
              apaga_cliente(CLIENTE_LIMITE, &num_clientes);
            } else if (opcao == 4) {
                printf("--DEBITO NA CONTA--\n");
                debito(CLIENTE_LIMITE, &num_clientes);
            } else if (opcao == 5) {
                printf("--DEPOSITAR NA CONTA--\n");
                deposito(CLIENTE_LIMITE, &num_clientes);
            } else if (opcao == 6) {
                printf("--EXTRATO NA CONTA--\n");
                extrato(CLIENTE_LIMITE, &num_clientes);
            } else if (opcao == 0) {
                printf("Saindo...\n");
            } else {
                printf("Opção inválida.\n");
            }
        } while (opcao != 0);

        return 0;
    }