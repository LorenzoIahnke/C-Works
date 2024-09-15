#include <stdio.h>
main()
{
      int i, senha;
      printf ("\n-------------------------------");
      printf ("\n\t\tTente adivinhar a senha");
      printf ("\n-------------------------------");
      
      for (i=0; (senha!=99 && i<6); i++)
      {printf ("\nDigite a senha correta: ");
      scanf ("%d", &senha);
      }
      
      if (senha==99){
         printf ("Parabens, voce acertou a senha");
      }
      else {
         printf ("Voce errou a senha, senha bloqueada");
      }
      
}
