#include <stdio.h>

int somadigitos(int n){
    if(n<10){
        return n;
    }else{
        return n%10 + somadigitos(n/10);
    }
}

int main(){

    printf("%d", somadigitos(2992));

    return 0;
}
