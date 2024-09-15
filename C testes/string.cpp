#include <stdio.h>
#include <string.h>

int main(){
	char nome [20], sobrenome [30], completo [30]; 
	
	printf ("\nDigite seu nome: ");
	scanf ("%s", &nome);
	printf ("\nDigite seu sobrenome: ");
	scanf ("%s", &sobrenome);
	printf ("\nTens algum apelido?");
	
	strcpy (completo, nome);
	strcat (completo, sobrenome);
	
	printf ("\nO nome completo e: %s", completo);
	
}
