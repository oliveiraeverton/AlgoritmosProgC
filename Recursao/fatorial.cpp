#include <stdio.h>

int fatorialRec(int fat){

    if (fat == 0 || fat == 1){
        return 1;
    }else{
        return fat * fatorialRec(fat-1);
    }
}

int main(){
    printf("%d", fatorialRec(9));
    return 0;
}
