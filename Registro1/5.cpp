#include <stdio.h>
#define MAX 3

void menu(){
    printf("\n\n****************MENU******************\n");
    printf("Digite (1) para Inserir uma pessoa\n");
    printf("Digite (2) para Listas os Nomes e Alturas das pessoas\n");
    printf("Digite (3) para Listar as pessoas que nasceram antes de uma data\n");
    printf("Digite (4) para encerrar\n");
    printf("****************MENU******************\n");
}
struct Data{
    int dia;
    int mes;
    int ano;
};
struct Cadastro{
    char nome[50];
    float altura;
    Data data;
};

void inserir(Cadastro *inse, int &i){

            scanf(" %[^\n]", inse[i].nome);
            scanf("%f", &inse[i].altura);
            scanf("%d", &inse[i].data.dia);
            scanf("%d", &inse[i].data.mes);
            scanf("%d", &inse[i].data.ano);
            i++;
}

void listar(Cadastro *inse, int &i){
    for(int k = 0; k < i; k++){
        printf("Nome: %s Altura: %.3f\n", inse[k].nome, inse[k].altura);
    }
}

void listarData(){}

int main(){
    Cadastro cadastro[1];

    int i = 0;
    int operacao;
    do{
        menu();
        scanf("%d", &operacao);
        if(operacao == 0){
            break;
        }else if(operacao == 1){
            if(i <= 10){
                inserir(cadastro, i);
            }
            
        }else if(operacao == 2){
            listar(cadastro, i);
        }else{
            printf("\aDigite a data de pesquisa dia/mes/ano: ");
            int dia;
            int mes;
            int ano;
            scanf("%d/%d/%d", &dia, &mes, &ano);
            printf("\n");
            while(dia != 0){
                for(int k = 0; k < i; k++){
                    if(cadastro[k].data.dia < dia && cadastro[k].data.mes < mes && cadastro[k].data.ano < ano ){
                        printf("Nome: %s\n", cadastro[k].nome);
                    }
                }
                scanf("%d/%d/%d", &dia, &mes, &ano);    
            }
        }    
    }while(true);

    return 0;
}
