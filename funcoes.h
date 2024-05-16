//esse struct vai ter as informações do cliente 
#define CLIENTES 1000
#define OPERACOES 100
typedef struct {//definindo as variaveis que vamo pedir na função
    char nome[50];
    char cpf[15];
    char tipo_conta[20];
    double saldo;
    char senha[10];
    int num_operacoes;
} CLIENTE;//definindo o struct


//esse struct vai ter as informações das operações realizadas 
//struct OPERA {//definindo as variaveis 
  //  char operacao_feita[50];
   // double valor;
//};

void criando_contatos(CLIENTE[], int*);