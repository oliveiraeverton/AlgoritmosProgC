/*Considerando o tipo struct definido abaixo,

struct celula{

     int valor;

     struct celula *prox;

};

escreva uma função remove_ultimo para remover o último nó de uma lista L. Além disso, a função deve retornar o valor armazenado no nó removido.

int remove_ultimo(celula *&L);

O seu programa deve ler uma sequência de n números inteiros positivos (maiores que zero) e armazená-los em uma lista simplesmente encadeada. Em seguida, o seu programa deverá ler um valor k e realizar k vezes a remoção do último elemento da lista, imprimindo o valor removido. Caso não haja último elemento a remover, imprima o número zero.

Entrada: n, uma sequência de n números positivos, k

5
8 7 23 98 42
3

Saída: Os últimos k elementos removidos (cada um em uma nova linha).

42

98

23*/

#include <stdio.h> 
#include <stdlib.h> 

struct celula{

     int valor;

     struct celula *prox;

};

int remove_ultimo(celula *&L);
void insere(int n, celula * &lst);
int main(){

    int numero, x, k;
    celula *lista = NULL;

    scanf("%d", &numero);
    for(int i = 0; i < numero; i++){
        scanf("%d", &x);
        insere(x, lista);
    }
    bool q = false;
    scanf("%d", &k);
    if(k > numero){
        k = numero;
        q = true;
    }
    for(int i = 0; i < k; i++){
        printf("%d\n", remove_ultimo(lista));  
    }
    if(q == true){
        printf("0\n");
    }
    
    return 0;
}
int remove_ultimo(celula *&L){
    
    celula *p;
    celula *auxiliar;
    int valor;
    p = L;//10f
    
    if(p->prox==NULL){
        return p->valor;
    }
    
    
    while(p->prox != NULL){
        auxiliar = p;//14f
        p = p->prox;//15f
    }
    //QUANDO TERMINAR O WHILE CHEGAMOS NO ULTIMO NO
    valor = p->valor;
    //
    auxiliar->prox = NULL;
    p->prox = auxiliar->prox;

    return valor;
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
