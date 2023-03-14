#include <stdio.h>
#include <stdlib.h>

void main() {
    /*inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores
    (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...)*/

    int prox, penult=0, ult=1, tamFib=0;

    //int n=tamFib, v[n];

    printf("Informe o tamanho do Fibonacci: ");
        scanf("%d ", &tamFib);

    for (int i = 0; i < tamFib; i++){
        prox = penult;
        penult = ult;
        ult += prox;
        printf("%d ", ult);
    }

    /*for (int i = 0; i < n; i++){
        prox = penult;
        penult = ult;
        ult += prox;
        v[i] = ult;
        printf("%d ", ult);
    }
    printf("\n");
    for (int i = 0; i < n; i++){
        printf("%i ", v[i]);
    }*/
    printf("\nInforme um valor entre 0 e %d: ", ult);
    system("pause");
}