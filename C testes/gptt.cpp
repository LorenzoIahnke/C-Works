#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int senha, tentativa, tentativas_restantes = 6;
    int diferenca;

    
    srand(time(NULL));

    
    senha = (rand() % 100) + 1;
	
	printf ("\n-------------------------------------------");
    printf("\n Bem-vindo ao jogo de adivinhacao de senha!");
    printf("\n Eu gerei uma senha aleatoria entre 1 e 100");
    printf("\n Voce tem 6 chances para adivinhar a senha.");
    printf ("\n-------------------------------------------");
    printf ("\n");

    while (tentativas_restantes > 0) {
        printf("Voce tem %d tentativa(s) restante(s).\n", tentativas_restantes);
        printf("Digite sua tentativa: ");
        scanf("%d", &tentativa);
		if (tentativa > 100){
   		 printf ("\nErro: Limite de até 100.");
    	return 1;
   		 }
        if (tentativa == senha) {
            printf("Parabens! Voce adivinhou a senha correta!\n");
            return 0;
        } else {
            diferenca = abs(senha - tentativa);
            if (diferenca <= 10) {
                printf("Senha incorreta, mas voce esta perto!\n");
            } else {
                printf("Senha incorreta, voce esta distante.\n");
            }
            tentativas_restantes--;
        }
    }

    printf("Voce esgotou suas tentativas. A senha correta era: %d\n", senha);
    printf("Obrigado por jogar!\n");

    return 0;
}

