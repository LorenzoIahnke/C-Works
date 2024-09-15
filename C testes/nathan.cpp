#include <stdio.h>
#include <stdlib.h> // função system("clear");
#include <string.h> // para usar strcpy

//------------------------------VARIÁVEIS
int escolha, numero_variavel;
char categoria[30], titulo_variavel[100], cargo_variavel[50]; // Adicionando vírgula aqui

//------------------------------FUNÇÕES
void menucategoria();
void numero();
void titulo();
void montagem();
void cargo();

void inicio() {
    
    system("clear");
    
    printf("\n\t///////////////////////////////////\n");
    printf("\t//-FORMATADOR DE NOTÍCIAS GAZETA-//\n");
    printf("\t///////////////////////////////////\n");
    printf("\tBeta - 29/05/24\n\n");
    
    printf("1- Começar\n\n");
    printf("--");
    scanf("%d", &escolha);
        
    switch(escolha) {
        
        case 1:
            menucategoria();
            break;
        
        default:
            inicio();
            break;
        
    } //switch
} //void

void menucategoria() {
    
    system("clear");
    
    printf("\n\tQual é a categoria da notícia?\n\n");
    
    printf("1- NOTÍCIAS\n");
    printf("2- FRASES\n");
    printf("3- BAN\n");
    printf("4- MEMES SEBÁCEOS\n");
    printf("5- RPG\n");
    printf("6- TRISTE\n");
    printf("7- ENQUETE\n");
    printf("8- CRINGE\n");
    printf("9- FOTOS DOS NOSSOS MUNDOS NO MINECRAFT\n");
    printf("10- MINECRAFT\n\n");
    printf("11- Voltar\n\n");
    printf("--");
    scanf("%d", &escolha);
        
    switch(escolha) {
        case 1:
            strcpy(categoria, "NOTÍCIAS");
            numero();
            break;
            
        case 2:
            strcpy(categoria, "FRASES");
            numero();
            break;
            
        case 3:
            strcpy(categoria, "BAN");
            numero();
            break;
            
        case 4:
            strcpy(categoria, "MEMES SEBÁCEOS");
            numero();
            break;
            
        case 5:
            strcpy(categoria, "RPG");
            numero();
            break;
            
        case 6:
            strcpy(categoria, "TRISTE");
            numero();
            break;
            
        case 7:
            strcpy(categoria, "ENQUETE");
            numero();
            break;
            
        case 8:
            strcpy(categoria, "CRINGE");
            numero();
            break;
            
        case 9:
            strcpy(categoria, "FOTOS DOS NOSSOS MUNDOS NO MINECRAFT");
            numero();
            break;
            
        case 10:
            strcpy(categoria, "MINECRAFT");
            numero();
            break;
            
        case 11:
            inicio();
            return;
            
        default:
            menucategoria();
            return;
    } //switch
} //void

void numero() {
    
    system("clear");
    
    printf("\n\tQual é o número da notícia?\n\n");
    
    printf("--");
    scanf("%d", &numero_variavel);
    
    titulo(); 
} //void

void titulo() {
    
    system("clear");
    
    printf("\n\tQual é o título da notícia?\n\n");
    
    printf("--");
    getchar(); // Limpa o buffer do newline deixado pelo scanf anterior
    fgets(titulo_variavel, sizeof(titulo_variavel), stdin); // Lê o título da notícia
    
    // Remove o newline do final da string, se presente
    size_t len = strlen(titulo_variavel);
    if (len > 0 && titulo_variavel[len - 1] == '\n') {
        titulo_variavel[len - 1] = '\0';
    }
    
    cargo();
    
} //void

void cargo() {
    
    system("clear");
    
    printf("\n\tQual é o cargo que deseja mencionar na notícia?\n\n");
    
    printf("1- Sebo_Gang\n");
    printf("2- Minecraft\n");
    printf("3- RPG_guys\n");
    printf("4- Funcionário_Gazeta\n");
    printf("5- Nenhum\n\n");
    
    printf("--");
    scanf("%d", &escolha);
        
    switch(escolha) {
        
        case 1:
            strcpy(cargo_variavel, "@Sebo_Gang");
            break;
        
        case 2:
            strcpy(cargo_variavel, "@Minecraft");
            break;
        
        case 3:
            strcpy(cargo_variavel, "@RPG_guys");
            break;
        
        case 4:
            strcpy(cargo_variavel, "@Funcionário_Gazeta");
            break;
        
        case 5:
            strcpy(cargo_variavel, "NÃO SELECIONADO");
            break;
        
        default:
            cargo();
            break;
            
    } //switch
    
    montagem();
}//void

void montagem() {
    
    system("clear");
    
    printf("\tCategoria selecionada: %s\n", categoria);
    printf("\tNúmero selecionado: %d\n", numero_variavel);
    printf("\tTítulo da notícia: %s\n", titulo_variavel);
    printf("\tCargo mencionado: %s\n", cargo_variavel);
    
    printf("\n\tEstá gerado o seu corpo de notícia, formatado\n\n");
    
    printf("--\n> * :emoji_1:  |  Gazeta do Sebo\n\n[%d-%s]* %s\n%s", numero_variavel, categoria, titulo_variavel, cargo_variavel);
    
    
}//void

int main() {
    inicio();
    return 0;
}
