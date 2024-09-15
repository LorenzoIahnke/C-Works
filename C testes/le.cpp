#include <stdio.h>
#include <string.h>

int main()
{
    char senha[10], senhacorreta[10] = "programa";
    int senhaok;

    printf("\nDigite a senha: ");
    scanf("%s", senha); // Lê a senha digitada pelo usuário
    
    senhaok = strcmp(senha, senhacorreta); // Compara as senhas
    
    if (senhaok == 0) {
        printf("\nSenha correta\n");
    } else {
        printf("\nSenha incorreta\n");
    }
    
    return 0;
}
