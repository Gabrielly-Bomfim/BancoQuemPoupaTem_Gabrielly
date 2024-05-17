// o menu 
#include <stdio.h>

void clearBuffer() {//função para limpar a quebra de linha e o fim do contato
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}


int main() {
  int opcao;
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
        clearBuffer();//limpando o buffer

        if (opcao == 1) {//Se a opção for 1
          printf("--CADASTRO DE NOVOS CLIENTES--\n");

        } else if (opcao == 2) {
          printf("--lISTAR CLIENTES--\n");
        } else if (opcao == 3) {
          printf("--DELETAR CLIENTES--\n");
        } else if (opcao == 4) {
            printf("--DEBITO NA CONTA--\n");
        } else if (opcao == 5) {
            printf("--DEPOSITAR NA CONTA--\n");
        } else if (opcao == 6) {
            printf("--EXTRATO NA CONTA--\n");
        } else if (opcao == 0) {
            printf("Saindo...\n");
        } else {
            printf("Opção inválida.\n");
        }
    } while (opcao != 0);

    return 0;
}