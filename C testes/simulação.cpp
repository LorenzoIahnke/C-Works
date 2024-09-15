#include <stdio.h>
#include <stdlib.h>

// Definindo estrutura para representar a cidade
typedef struct {
    int populacao;
    int dinheiro;
    int felicidade;
} Cidade;

// Função para exibir o status atual da cidade
void exibirStatus(Cidade cidade) {
    printf("\nStatus da Cidade:\n");
    printf("População: %d\n", cidade.populacao);
    printf("Dinheiro: $%d\n", cidade.dinheiro);
    printf("Felicidade: %d\n", cidade.felicidade);
}

// Função para simular a passagem de um ano na cidade
void passarAno(Cidade *cidade) {
    // Simulação do crescimento populacional
    cidade->populacao += cidade->populacao * 0.1;

    // Simulação da economia
    cidade->dinheiro += cidade->populacao * 10;

    // Simulação da felicidade
    cidade->felicidade -= cidade->populacao * 5;

    // Limitando a felicidade entre 0 e 100
    if (cidade->felicidade < 0)
        cidade->felicidade = 0;
    else if (cidade->felicidade > 100)
        cidade->felicidade = 100;
}

int main() {
    Cidade minhaCidade = {1000, 10000, 80}; // População inicial: 1000, Dinheiro inicial: $10,000, Felicidade inicial: 80

    printf("Bem-vindo ao Simulador de Gerenciamento de Cidade!\n");

    while (1) {
        printf("\nEscolha uma ação:\n");
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
                printf("Opção inválida.\n");
        }
    }

    return 0;
}
