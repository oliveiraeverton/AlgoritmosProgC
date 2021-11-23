/*Considerando o tipo struct definido abaixo,

struct celula{

     int valor;

     struct celula *prox;

};

escreva uma função soma para retornar a soma dos elementos de uma lista L.

int soma(celula *L);

Entrada: Uma sequência de números inteiros. (Uma entrada negativa encerra a entrada).

1 5 8 7 23 98 42 31 14 33 -1

Saída: A saída representa a soma dos elementos da lista lista.

262*/
#include <stdio.h> 
#include <stdlib.h> 

struct celula{

     int valor;

     struct celula *prox;

};

int soma(celula *L);
void insere(int n, celula * &lst);
int main(){

    int numero;
    celula *lista = NULL;

    scanf("%d", &numero);
    while(numero >= 0){
        insere(numero, lista);
        scanf("%d", &numero);
    }

    printf("%d\n", soma(lista));
    return 0;
}
int soma(celula *L){
    int soma = 0;

    while(L != NULL){
        soma += L->valor;
        L = L->prox;
    }
    return soma;
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


