#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_aleatorio;
    
    srand(time(NULL));
    
    
    numero_aleatorio = rand() % 9000 + 1000;
    
  
    printf("O número aleatório é: %d\n", numero_aleatorio);
    
    return 0;
}

