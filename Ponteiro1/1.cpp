#include <stdio.h>
#define MAX 11

int main(){

    int vetor[MAX], *p;
    p = &vetor[0];

    for(p; p < &vetor[MAX]; p++){
        scanf("%d", p);
        
    }

    p--;
    for(p; p >= &vetor[0]; p--){
        printf("%d ", *p);
    }
}
