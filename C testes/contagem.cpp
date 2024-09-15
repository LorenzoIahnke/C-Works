#include <stdio.h>
main (){
	int n, i;
	
	printf ("\n---------------------------------------");
	printf ("\n Programa que faz contagem regressiva");
	printf ("\n---------------------------------------");
	printf ("\n");
	
	
	do {
		printf ("\nDigite um numero positivo para a contagem regressiva: ");
		scanf ("%d", &n);
		if (n<=0){
		printf ("\nERRO, CONTAGEM REGRESSIVA IMPOSSIVEL COM O NUMERO %d", n);
		printf ("\n");
	}	else {
			printf ("\nContagem regressiva do numero %d", n);
	}
	}while (n<=0);
	
	printf ("\n");
	
	for (i = n; i >= 0; i--){
	
		printf ("\n%d", i);	
	}
}
