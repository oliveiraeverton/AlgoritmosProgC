#include <stdio.h>

int contadig(int N){

    //int aux;
    if(N < 10){
        return 1;
    }else{
        return 1 + contadig(N/10);
    }
}

int main(){

    printf("%d", contadig(987));


    return 0;
}
