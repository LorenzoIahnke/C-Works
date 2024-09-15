#include <stdio.h>

int main() {
    int limite_inferior, limite_superior,i, contador_pares=0;
    
    printf ("\n--------------------------------");
    printf ("\n Programa que calcula Intervalo");
    printf ("\n--------------------------------");
    printf ("\n");
    
    printf ("\nDigite o limite inferior: ");
    scanf ("\n%d", &limite_inferior);
    printf ("\nDigite o limite superior: ");
    scanf ("\n%d", &limite_superior);
    
    if (limite_inferior > limite_superior){
    printf ("\nErro: Limite inferior maior que superior.");
    return 1;
    }
    
    i = limite_inferior;
    printf ("\n");
    
    while (i <= limite_superior){
        if (i%2==0){
            printf ("%d ", i);
            contador_pares++;
        }
        i++;
    }
    printf ("\n");
    printf("\nA quantidade de números pares no intervalo é: %d", contador_pares);
    printf ("\n");
    printf ("\nFeito por Lorenzo");

    return 0;
    
}


