/*Escreva uma função que conte o número de células de uma lista linear encadeada.



Entrada: A entrada é composta dos valores a inserir na lista na ordem em que aparecem, sendo que o número 0 finaliza a entrada.

1 5 8 7 23 98 42 31 14 33 0

Saída: A saída representa o número de células da lista.

10

Crie um programa para testar sua função respeitando o formato da entrada e da saída.
*/

#include <stdio.h> 
#include <stdlib.h> 

struct celula{

     int valor;

     struct celula *prox;

};

int contaElemento(celula *&L);
void insere(int n, celula * &lst);
int main(){

    int numero;
    celula *lista = NULL;

    scanf("%d", &numero);
    
    while(numero != 0){
        insere(numero, lista);
        scanf("%d", &numero);
    }
    /*while(lista->prox != NULL){
        printf("%d ", lista->valor);
        lista = lista->prox;
    }*/
    if(lista == NULL){
        printf("%d\n", contaElemento(lista));
    }else{
        printf("%d\n", contaElemento(lista));
    }
    //printf("%d\n", contaElemento(lista));
    
    return 0;
}

void insere(int n, celula * &lst){
    celula *novo, *p;

    novo = (celula*) malloc(sizeof(celula));
    novo->valor = n;
    novo->prox = NULL;

    if(lst == NULL){
        lst = novo;
        }else{
        p = lst;
        while(p->prox != NULL){
            p = p->prox;
        }
        p->prox = novo;
    }
}
int contaElemento(celula *&L){
    celula *p;
    p = L;
    int soma = 0;
    if(L == NULL){
        return 0;
    }
    while(p->prox != NULL){
        soma++;
        p = p->prox;
    }
    return ++soma;
}
