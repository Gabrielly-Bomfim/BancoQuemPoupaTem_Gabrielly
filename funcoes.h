//esse struct vai ter as informações do cliente 
#define CLIENTES 1000
#define OPERACOES 100
struct cliente {//definindo as variaveis 
    char nome[50];
    char cpf[15];
    char tipoConta[20];
    double valorInicial;
    char senha[10];
}; //definindo o struct

//esse struct vai ter as informações das operações realizadas 
struct OPERA {//definindo as variaveis 
    char operacao_feita[50];
    double valor;
};