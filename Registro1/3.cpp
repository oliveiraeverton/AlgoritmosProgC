#include <stdio.h>
#define MAX 5

struct Produtos{
    long int codigo;
    char nome[50];
    float preco;


};
int main(){
    Produtos produtos[MAX];

    //Cadastro de produtos
    for(int i = 0; i < MAX; i++){
        printf("Digite o nome do produto\n");
        scanf(" %s", produtos[i].nome);
        printf("Digite o código do produto\n");
        scanf("%ld", &produtos[i].codigo);
        printf("Digite o preco do produto\n");
        scanf("%f", &produtos[i].preco);
    }
    //
    for(int i = 0; i < MAX; i++){
        printf("%ld - %s\n", produtos[i].codigo, produtos[i].nome);
    }

    printf("\n\n*******************\nDigite o código do produto para consultá-lo:\n");
    long int consulta;
    scanf("%ld", &consulta);

    while(consulta != 0){
        for(int i = 0; i < MAX; i++){
            if (consulta == produtos[i].codigo){
                printf("%f", produtos[i].preco);
                break;
            }
        }
        scanf("%ld", &consulta);
    }
    


    return 0;
}
