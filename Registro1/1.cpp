#include <stdio.h>

struct Cadastro{
    // nome do aluno
    char nome[100];
    // matricula do aluno
    int matricula;
    // nota do aluno
    float notas[2];

};

int main(){

    int entrada;
    printf("Digite a quantidade de Alunos que queria cadastrar:\n");
    scanf("%d", &entrada);

    // vetor de struct
    Cadastro cadastro[entrada];
    
    //cadastro um a um
    int k = 0;
    for(int w = 0; w < entrada; w++){

        scanf(" %[^\n]", cadastro[w].nome);
        scanf("%d", &cadastro[w].matricula);
        scanf("%f", &cadastro[w].notas[k++]);
        scanf("%f", &cadastro[w].notas[k--]);
    }

    //impressao
    printf("********************************\n");
    for(int w = 0; w < entrada; w++){
        printf("%s\n", cadastro[w].nome);
        printf("%d\n", cadastro[w].matricula);
        printf("%.2f\n", cadastro[w].notas[k++]);
        printf("%.2f\n", cadastro[w].notas[k--]);
        printf("\n");
        printf("********************************\n");
    }

    return 0;
}
