#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSecreto;
    int palpite;
    int tentativas = 0;
    char continuar;

    // Inicializa o gerador de n�meros aleat�rios
    srand(time(NULL));

    // Gera um n�mero aleat�rio entre 1 e 100
    numeroSecreto = rand() % 100 + 1;

    printf("Bem-vindo ao jogo de adivinha��o!\n");
    printf("Tente adivinhar o n�mero secreto entre 1 e 100.\n");

    do {
        // Pede para o usu�rio adivinhar o n�mero
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);

        // Incrementa o n�mero de tentativas
        tentativas++;

        // Verifica se o palpite est� correto
        if (palpite == numeroSecreto) {
            printf("Parab�ns! Voc� acertou o n�mero secreto em %d tentativas!\n", tentativas);
        } else if (palpite < numeroSecreto) {
            printf("O n�mero secreto � maior. Tente novamente!\n");
        } else {
            printf("O n�mero secreto � menor. Tente novamente!\n");
        }

        // Pergunta se o jogador deseja continuar jogando
        printf("Deseja continuar jogando? (s/n): ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');

    printf("O n�mero secreto era: %d\n", numeroSecreto);
    printf("Obrigado por jogar!\n");

    return 0;
}
