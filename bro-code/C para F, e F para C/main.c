#include <stdio.h>
#include <ctype.h>

int main()
{
    char unidade;
    float temp;
    
    printf("\nA temperatura esta em (C) ou (F)?: ");
    scanf ("%c", &unidade);
    
    unidade = toupper(unidade);
    
    if (unidade == 'C'){
        printf ("\nInforme a temperatura em Celsius: ");
        scanf ("%f", &temp);
        temp = (temp*9/5) + 32;
        printf ("\nA temperatura em Fahrenheit equivale a: %.1f", temp);
    }
    else if (unidade == 'F'){
        printf ("\nInforme a temperatura em Fahrenheit: ");
        scanf ("%f", &temp);
        temp = ((temp - 32)*5)/9;
        printf ("\nA temperatura em Celsius equivale a: %.1f", temp);
    }
    else{
        printf ("\nInvalido");  
        
    }
    
    
    
    return 0;
}
