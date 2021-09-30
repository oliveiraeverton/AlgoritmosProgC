#include <stdio.h>
#include <string.h>
#define MAX 4  
struct Cadastro {
    char nome[100];
    float altura;
    float peso;
    char cpf[15];
    char sexo;
};
int main(){
    Cadastro cadastro[MAX];

    //CADASTRO

    for(int k = 0; k < 4; k++){
        printf("Digite o nome: \n");
        scanf(" %[^\n]", cadastro[k].nome);
        printf("Digite o CPF: \n");
        scanf(" %[^\n]", cadastro[k].cpf);
        printf("Digite a altura: \n");
        scanf("%f", &cadastro[k].altura);
        printf("Digite o peso (kg): \n");
        scanf("%f", &cadastro[k].peso);
        printf("Digite H-HOMEM // M-MULHER: \n");
        scanf(" %c", &cadastro[k].sexo);
    }
    //MENU

        printf("*****//MENU//*******\n");
        printf("Digite (1) para consulta.\n");
        printf("Digite (2) para consulta com menu.\n");
        printf("*****//MENU//*******\n");
        int menu;
        scanf("%d", &menu);

    //FUNCIONALIDADES
         char pesquisaCPF[15];
         if(menu == 1){
            scanf(" %[^\n]", pesquisaCPF);
             do{
                 for(int i = 0; i < MAX; i++){
                     if(strcmp(pesquisaCPF, cadastro[i].cpf)==0){
                         printf("%s\n", cadastro[i].nome);
                         printf("%.1f\n", cadastro[i].peso/(cadastro[i].altura*cadastro[i].altura));    
                     }   
                 }
                 scanf(" %[^\n]", pesquisaCPF);
             }while(pesquisaCPF[0] != '0' && pesquisaCPF[1] == '\0');
             //while(strcmp(pesquisaCPF, "0")== 0);
         }/*else{
            
         }*/



    return 0;
}
