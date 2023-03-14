#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int prox, penult=0, ult=1, n;
    bool seq; // seq = sequencia
    printf("------------------------------------------------------");
    printf("\nInforme o para calcular a sequencia do Fibonacci: ");
        scanf("%d", &n);
    if(n == 0){
        seq = true;
    }else{
        for (int i = 0; i < n; i++){
            prox = penult;
            penult = ult;
            ult += prox;
            if(n == ult){
                seq = true;
                break;
            }
        }
    }
    if(seq == true){
        printf("\nO valor informado SE encontra na sequencia do Fibonacci!\n");
        printf("------------------------------------------------------");
    }else{
        printf("\nO valor informado NAO se encontra na sequencia do Fibonacci!\n");
        printf("------------------------------------------------------");
    }
    return 0;
}