#include <stdio.h>
#include <string.h>
struct Cliente{
    char cpf[11];
    char nome[50];
    double saldo;

};

int main(){

    Cliente cliente[3];

    for(int i = 0; i < 3; i++){
        scanf(" %[^\n]", cliente[i].nome);
        scanf(" %[^\n]", cliente[i].cpf);
        scanf("%lf", &cliente[i].saldo);
    }
    int processo;
    do{
        char procuracpf[11];
        printf("\n");
        printf("**********************MENU*********************\n");
        printf("Digite (1) para SAQUE\n");
        printf("Digite (2) para DEPOSITO\n");
        printf("Digite (0) para SAIR\n");
        printf("***********************************************\n");
        scanf("%d", &processo);
        if(processo == 0){
            break;
        }
        printf("**************CPF DO TITULAR*******************\n");
        scanf(" %[^\n]", procuracpf);

        if(processo == 1){
            for(int i = 0; i < 3; i++){
                if(strcmp(procuracpf, cliente[i].cpf)==0){
                    printf("DIGITE O VALOR DO SAQUE:\n");
                    float saque;
                    scanf("%f", &saque);
                    if(cliente[i].saldo >= saque){
                        cliente[i].saldo -= saque;
                    }else{
                        printf("Saldo insulficiente para o saque\n****************\nTente outra operação!\n");
                    }
                }
            }
        }
        if(processo == 2){
            for(int i = 0; i < 3; i++){
                if(strcmp(procuracpf, cliente[i].cpf)==0){
                    printf("DIGITE O VALOR DO DEPOSITO: ");
                    float deposito;
                    scanf("%f", &deposito);
                    cliente[i].saldo += deposito;
                }
            }
        }
    }while(processo != 0);

    return 0;
}
