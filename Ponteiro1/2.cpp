#include <stdio.h>
#define MAX 10
int main(){
    int vetorA[MAX];
    int vetorB[MAX];

    int *a;
    int *b;

    a = &vetorA[0];
    b = &vetorB[0];

    for(a; a < &vetorA[MAX]; a++){
        scanf("%d", a);
    }//a--;
    for(b; b < &vetorB[MAX]; b++){
        scanf("%d", b);
    }//b--;
    b = &vetorB[0];
    for(a = &vetorA[0]; a < &vetorA[MAX]; a++){

        printf("%d %d ", *a, *b++);
        //for(b = &vetorB[0]; b < &vetorA[MAX]; b++){
        //}
    }


    return 0;
}
