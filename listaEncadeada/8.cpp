/*Escreva um programa que dada uma lista encadeada formada por números, remova todos os elementos com chaves pares. Imprima a lista resultante.

Entrada: A entrada é composta dos valores a serem inseridos na lista na ordem em que aparecem, sendo que o número 0 finaliza a entrada.

1 5 8 7 23 98 42 31 14 33 0

Saída: A saída é a impressão da lista resultante após a remoção dos elementos pares.

1 5 7 23 31 33*/

#include <stdio.h>
#include <stdlib.h>

struct celula{
     int valor;
     struct celula *prox;
};

void removerPares(celula *&L)
{
    celula *p, *q;

    p = NULL;
    q = L;  // primeiro no da lista

    while(q != NULL)
    {
        if(q->valor %2 == 0)
        {
            // q é o primeiro no
            if(p == NULL)
            {
                L = L->prox;  // L = q->prox
                free(q);
                q = L;
            }
            else{   // q eh um outro no qualquer
                p->prox = q->prox;
                free(q);
                q = p->prox;
            }
        }
        else{
            p = q;
            q = q->prox;
        }
    }
}

void imprimir(celula *L)
{
    celula *p;
    for(p = L; p != NULL; p = p->prox)
        printf("%d ", p->valor);

}

void inserir(int n, celula* &L)
{
    celula *novo, *p;

    novo = (celula*) malloc(sizeof(celula));
    novo->valor = n;
    novo->prox = NULL;

    if(L == NULL)
        L = novo;
    else{
        p = L;
        while(p->prox != NULL)
            p = p->prox;

        p->prox = novo;
    }
}

int main(){
    int entrada;
    celula *p0 = NULL;
    
    scanf("%d", &entrada);
    while(entrada != 0){
        inserir(entrada, p0);
        scanf("%d", &entrada);    
    }
    removerPares(p0);
    imprimir(p0);
    
    return 0;
}
