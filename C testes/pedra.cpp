#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int playerChoice, computerChoice;
    srand(time(0)); // Seed para gerar números aleatórios diferentes a cada execução
    char *choices[] = {"Pedra", "Papel", "Tesoura"};

    printf("Bem-vindo ao jogo Pedra, Papel e Tesoura!\n");
    printf("Escolha sua jogada:\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");

    printf("Sua escolha: ");
    scanf("%d", &playerChoice);

    if (playerChoice < 1 || playerChoice > 3) {
        printf("Escolha inválida!\n");
        return 1;
    }

    computerChoice = rand() % 3; // 0 para Pedra, 1 para Papel, 2 para Tesoura

    printf("Você escolheu: %s\n", choices[playerChoice - 1]);
    printf("O computador escolheu: %s\n", choices[computerChoice]);

    // Determina o vencedor
    int result = (playerChoice - 1 - computerChoice + 3) % 3;
    if (result == 0) {
        printf("Empate!\n");
    } else if (result == 1) {
        printf("Você venceu!\n");
    } else {
        printf("O computador venceu!\n");
    }

    return 0;
}
