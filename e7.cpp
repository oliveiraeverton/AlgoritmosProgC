#include <stdio.h>


int main(){

    int numeroA, numeroB, numeroC;
    scanf("%d%d%d", &numeroA, &numeroB, &numeroC);
    printf("A soma entre %d+%d+%d é igual a %d\n", numeroA, numeroB, numeroC, numeroA+numeroB+numeroC);
    printf("A multiplição entre %d*%d*%d é igual a %d\n", numeroA, numeroB, numeroC, numeroA*numeroB*numeroC);
    return 0;
}