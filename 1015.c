#include <stdio.h>
#include <math.h>

int main () {
	
	float x1, x2, y1, y2, z;
	
	scanf("%f %f", &x1, &y1);
	scanf("%f %f", &x2, &y2);	
	
	z = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
	
	printf ("%.4f\n", z);
					 
	return 0;
}
