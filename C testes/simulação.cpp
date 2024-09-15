#include <stdio.h>
#include <stdlib.h>

// Definindo estrutura para representar a cidade
typedef struct {
    int populacao;
    int dinheiro;
    int felicidade;
} Cidade;

// Fun��o para exibir o status atual da cidade
void exibirStatus(Cidade cidade) {
    printf("\nStatus da Cidade:\n");
    printf("Popula��o: %d\n", cidade.populacao);
    printf("Dinheiro: $%d\n", cidade.dinheiro);
    printf("Felicidade: %d\n", cidade.felicidade);
}

// Fun��o para simular a passagem de um ano na cidade
void passarAno(Cidade *cidade) {
    // Simula��o do crescimento populacional
    cidade->populacao += cidade->populacao * 0.1;

    // Simula��o da economia
    cidade->dinheiro += cidade->populacao * 10;

    // Simula��o da felicidade
    cidade->felicidade -= cidade->populacao * 5;

    // Limitando a felicidade entre 0 e 100
    if (cidade->felicidade < 0)
        cidade->felicidade = 0;
    else if (cidade->felicidade > 100)
        cidade->felicidade = 100;
}

int main() {
    Cidade minhaCidade = {1000, 10000, 80}; // Popula��o inicial: 1000, Dinheiro inicial: $10,000, Felicidade inicial: 80

    printf("Bem-vindo ao Simulador de Gerenciamento de Cidade!\n");

    while (1) {
        printf("\nEscolha uma a��o:\n");
        printf("1. Passar um ano\n");
        printf("2. Exibir status da cidade\n");
        printf("3. Sair\n");

        int escolha;
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                passarAno(&minhaCidade);
                printf("Um ano se passou.\n");
                break;
            case 2:
                exibirStatus(minhaCidade);
                break;
            case 3:
                printf("Saindo do jogo...\n");
                exit(0);
            default:
                printf("Op��o inv�lida.\n");
        }
    }

    return 0;
}
