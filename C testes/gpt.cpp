#include <stdio.h>

float saldo = 0; // saldo inicial

int main() {
    int opcao;

    printf("Bem vindo ao Banco XYZ\n");

    do {
        printf("\nDigite 1 para consultar seu saldo\n");
        printf("Digite 2 para saque\n");
        printf("Digite 3 para depósito\n");
        printf("Digite 4 para sair\n");

        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                printf("Seu saldo atual é: R$%.2f\n", saldo);
                int voltar;
                printf("Digite 9 para voltar ao menu: ");
                scanf("%d", &voltar);
                break;
            }
            case 2: {
                float saque;
                printf("Digite o valor que deseja sacar: ");
                scanf("%f", &saque);
                if (saque > saldo) {
                    printf("Saldo insuficiente.\n");
                } else {
                    saldo -= saque;
                    printf("Saque realizado com sucesso.\n");
                }
                int voltar;
                printf("Digite 9 para voltar ao menu: ");
                scanf("%d", &voltar);
                break;
            }
            case 3: {
                float deposito;
                printf("Digite o valor que deseja depositar: ");
                scanf("%f", &deposito);
                saldo += deposito;
                printf("Depósito realizado com sucesso.\n");
                int voltar;
                printf("Digite 9 para voltar ao menu: ");
                scanf("%d", &voltar);
                break;
            }
            case 4: {
                printf("Obrigado por usar nossos serviços. Tenha um bom dia!\n");
                break;
            }
            default: {
                printf("Opção inválida. Tente novamente.\n");
                break;
            }
        }
    } while (opcao != 4);

    return 0;
}

