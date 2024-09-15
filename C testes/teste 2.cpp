#include <stdio.h>
int main (){
	const double PI = 3.14159;
	double r;
	double c;
	
	printf ("\nEnter the radius of a circle: ");
	scanf ("%lf", &r);
	
	c = 2 * PI * r;
	
	printf ("\nThe value of the circumference is %lf", c);
	
	return 0;
}
