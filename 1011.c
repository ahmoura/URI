#include <stdio.h>

int main () {
	
	double r, ve;
	
	scanf("%lf", &r);
	
	ve = (4.0/3) * 3.14159 * r * r * r;
	
	printf ("VOLUME = %.3lf\n", ve); 

	return 0;
}
