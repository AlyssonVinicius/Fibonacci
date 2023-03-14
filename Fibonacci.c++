#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define n 8

main() {
    /*inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores
    (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...)*/
    int prox, penult=0, ult=1;
    printf("%d %d ", penult, ult);
    for (int i = 0; i < n; i++){
        prox = penult;
        penult = ult;
        ult += prox;
        printf("%d ", ult);
    }
    return 0;
}