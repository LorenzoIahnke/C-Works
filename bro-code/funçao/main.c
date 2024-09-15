#include <stdio.h>

void parabens(char name[], int age)
{
    printf ("\nParabens pra voce %s!", name);
    printf("\nVoce tem %d anos!", age);
}

int main()
{
    char name [] = "Bro";
    int age = 18;
    
    parabens(name, age);

    return 0;
}
