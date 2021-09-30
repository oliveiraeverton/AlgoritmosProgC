#include <stdio.h>

int maximo(int v[], int n){
    if(n == 1){
        return v[0];
    }else{
        int aux = maximo(v, n-1);
        if(aux > v[n-1]){
            return aux;
        }else{
            return v[n-1];
        }
    }
}
int main(){
    int vetor[] = {5, 7, 9, 4, 0, 1, 7, 73, 5};

    printf("%d", maximo(vetor, 9));

    return 0;
}
