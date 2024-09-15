#include <stdio.h>

int main()
{
    float r, PI = 3.14, c, a;
    
    printf("\n-----------------------------------");
    printf("\nPrograma que calcula circunferência");
    printf("\n-----------------------------------");
    printf ("\n");
    
    printf ("\nInforme o raio do círculo: ");
    scanf ("%f", &r);
    
    a = PI*r*r;
    c = 2*PI*r;
    
    printf("\nA area de um círculo com raio %.2f, é: %.2f ", r, a);
    printf("\nA circunferência de um círculo com raio %.2f, é: %.2f ", r, c);
    
    

    return 0;
}
