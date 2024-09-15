#include <stdio.h>
#include <math.h>


int main (){
	float C1, C2, H;
	
	do{
		printf ("\n");
		printf ("\nPlease, enter a side of the triangle: ");
		scanf ("%f", &C1);
		printf ("\nNow, enter the other side of the triangle: ");
		scanf ("%f", &C2);
		if (C2 == C1){
			printf ("\nImpossible to calculate the hypotenuse, the sides must be differents.");
		}	
		else {
			printf ("\nThe hypotenuse of your triangle equals: ");
		}
	}while (C2 == C1);
	
	H = sqrt((C1 * C1) + (C2 * C2));
	
	printf ("\n%.2f", H);
	return 0;
}

