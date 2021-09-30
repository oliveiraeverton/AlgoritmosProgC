#include <stdio.h>

int multiplica(int n1, int n2){
    if(n1 == 1){
        return n2;
    }else if(n1 == 0 || n2 == 0){
        return 0;
    }else{
        return n2 + multiplica(n1-1, n2);
    }

}

int main(){

    printf("%d", multiplica(3, 9));

    return 0;
}
