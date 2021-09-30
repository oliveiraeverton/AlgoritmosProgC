#include <stdio.h>


void impressao(int N){

    if(N>=1){
        impressao(N-1);
        printf("%d ", N);
    }
}

int main(){

    impressao(55);

    return 0;
}
