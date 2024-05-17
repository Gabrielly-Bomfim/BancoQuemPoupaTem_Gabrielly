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

    do {
        printf("\n-------------Banco Quem Poupa Tem----------\n");
        printf("1 - Cadastrar novo cliente \n");
        printf("2 - Listar clientes \n");
        printf("3 - Deletar cliente\n");
        printf("4 - Debito\n");
        printf("5 - Depositar\n");
        printf("6 - Extrato\n");
        printf("0 - Sair\n");

        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        limpar_buffer();

        switch (opcao) {
            case 1:
                printf("--CADASTRO DE NOVOS CLIENTES--\n");
                criando_clientes(CLIENTE_LIMITE, &num_clientes);
                break;
            case 2:
                printf("--LISTAR CLIENTES--\n");
                
                break;
            case 3:
                printf("--DELETAR CLIENTES--\n");
               
                break;
            case 4:
                printf("--DEBITO NA CONTA--\n");
                
                break;
            case 5:
                printf("--DEPOSITAR NA CONTA--\n");
              
                break;
            case 6:
                printf("--EXTRATO NA CONTA--\n");
                
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (opcao != 0);

    return 0;
}
