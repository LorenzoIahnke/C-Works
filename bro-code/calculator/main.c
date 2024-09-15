#include <math.h>
#include <stdio.h>

int main()
{
    char operacao;
    double num1, num2, result;
    
    printf("\nQual operacao deseja fazer?(+ - * /):");
    scanf("%c", &operacao);
    printf("\nInforme o primeiro numero: ");
    scanf("%lf", &num1);
    printf("\nInforme o segundo numero: ");
    scanf("%lf", &num2);
    
    switch (operacao){
        case '+':
            result = num1+num2;
            printf ("\nA soma dos numeros equivale a %.1lf", result);
            break;
        case '-':
            result = num1-num2;
            printf ("\nA diminuicao dos numeros equivale a %.1lf", result);
            break;
        case '*':
            result = num1*num2;
            printf ("\nA multiplicacao dos numeros equivale a %.1lf", result);
            break;
        case '/':
            if (num2 != 0){
            result = num1/num2;
            printf ("\nA divisao dos numeros equivale a %.1lf", result);
            break;
            }
            else {
                printf ("\nERRO, divisao por 0");
            }
        default:
            printf ("\nINVALIDO");
            break;
    }
    

    return 0;
}
