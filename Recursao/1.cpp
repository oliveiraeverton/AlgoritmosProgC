#include <stdio.h>

int potR(int x, int n){
    
    if(n == 0){
        return 1;
    }
    else if(n == 1){
        return x;
    }else{
        return x * potR(x, n-1);
    }
}



int main(){
    printf("%d", potR(5, 3));



    return 0;
}
