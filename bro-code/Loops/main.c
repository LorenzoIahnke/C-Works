#include <stdio.h>
#include <string.h>
/*int main()
{
  for(int i = 10; i>=1; i-=3){
    printf ("\n%d", i);      
      
  }
  
  return 0;
}
*/ //for loop

/*int main(){
    
    char name[25];
    printf("\nQual o seu nome?: ");
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';
    
    while (strlen(name)==0)
    {
        printf("\nERRO, sem nome!");
        printf("\nQual o seu nome?: ");
        fgets(name, 25, stdin);
        name[strlen(name)-1] = '\0';
    }
    printf("\nBom dia, %s", name);
    
    return 0;
}
*/ //while loop

/*int main(){
    int number = 0;
    int sum = 0;
    
    do{
        printf("\nEnter a number above 0: ");
        scanf("%d", &number);
        if (number>0){
            sum += number;
        }
    }while(number>0);
    printf("\nSum %d", sum);
    
    
    return 0;
}
*/ //do while loop

/*int main(){
    int rows, columns;
    char symbol;
    
    printf("\nEnter X of rows: ");
    scanf ("%d", &rows);
    
    printf("\nEnter X of columns: ");
    scanf("%d", &columns);
    
    printf("\nEnter a symbol to use: ");
    scanf(" %c", &symbol);
    
    for (int i = 1; i<=rows; i++){
        for(int j = 1; j<=columns; j++){
            printf("%c ", symbol);
        }
        printf("\n");
    }
    
    
    return 0;
}
*/ //nested loop

/*int main(){
    
    for (int i = 1; i <= 20; i++){
        if(i == 13){
            continue;
        }
        printf("\n%d", i);
    }
    return 0;
}
*/ //continue vs break
