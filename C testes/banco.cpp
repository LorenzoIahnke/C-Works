#include <stdio.h>
main (){
    int n;
    float saldo, saque, deposito;
    int voltar; 
    
    printf ("\n------------------------");
    printf ("\nBem vindo ao Banco XYZ!");
    printf ("\n------------------------");
    printf ("\n");
    
    do{
    printf ("\n");
    printf ("\nDigite 1 para consultar seu saldo");
    printf ("\nDigite 2 para saque");
    printf ("\nDigite 3 para deposito");
    printf ("\nDigite 4 para sair");
    printf ("\n: ");
    scanf ("%d", &n);
    
    switch (n){
        case 1:{
            printf ("\nSeu saldo atual equivale a: R$%.2f", saldo);
            printf ("\nDigite 9 para voltar ao menu inicial: ");
            scanf ("%d", &voltar);
            break;
		}
        case 2:{
            printf ("\nValor do saque:R$ ");
            scanf ("%f", &saque);
            if (saque > saldo){
                printf ("\nSaldo insuficiente para sacar");
            }
            else{
            	saldo = saldo - saque;
                printf ("\nSaque realizado.");
            }
            
            printf ("\nDigite 9 para voltar ao menu inicial: ");
            scanf ("%d", &voltar);
            break;
    }
        case 3: {
            printf ("\nValor do deposito:R$ ");
            scanf ("%f", &deposito);
            saldo = saldo + deposito;
            printf ("\nDeposito realizado");
            printf ("\nDigite 9 para voltar ao menu inicial: ");
            scanf ("%d", &voltar);
            break;
    }
        case 4:{
            printf ("\nEncerramento do programa, volte sempre!");
            break;
    }
        default: {
            printf ("\nOpcao invalida");
            break;
    }
        
    }
    }while (n != 4);
    
    return 0;
}



