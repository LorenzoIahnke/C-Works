#include <stdio.h>
main()
{ int N, i;

printf ("\n---------------------------------------");
printf ("\n Programa que faz contagem regressiva");
printf ("\n---------------------------------------");
printf ("\n");

printf ("\nDigite um numero natural positivo: ");
scanf ("%d", &N);
printf ("\nContagem regressiva do numero %d", N);
printf ("\n");

for (i=N;i>=0; i--){
    printf ("\n%d",i);
    
}

return 0;
}

