#include <stdio.h>

int main(){

    int numeroA, numeroB, numeroC, calculo;

    scanf("%d%d%d", &numeroA, &numeroB, &numeroC);
    calculo = numeroA*numeroB + numeroC;
    printf("O resultado da multiplicado entre %d * %d e soma deste com %d é igual a %d", numeroA, numeroB, numeroC, calculo);




    return 0;
}