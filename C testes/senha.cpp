#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSecreto;
    int palpite;
    int tentativas = 0;
    char continuar;

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Gera um número aleatório entre 1 e 100
    numeroSecreto = rand() % 100 + 1;

    printf("Bem-vindo ao jogo de adivinhação!\n");
    printf("Tente adivinhar o número secreto entre 1 e 100.\n");

    do {
        // Pede para o usuário adivinhar o número
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);

        // Incrementa o número de tentativas
        tentativas++;

        // Verifica se o palpite está correto
        if (palpite == numeroSecreto) {
            printf("Parabéns! Você acertou o número secreto em %d tentativas!\n", tentativas);
        } else if (palpite < numeroSecreto) {
            printf("O número secreto é maior. Tente novamente!\n");
        } else {
            printf("O número secreto é menor. Tente novamente!\n");
        }

        // Pergunta se o jogador deseja continuar jogando
        printf("Deseja continuar jogando? (s/n): ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');

    printf("O número secreto era: %d\n", numeroSecreto);
    printf("Obrigado por jogar!\n");

    return 0;
}
