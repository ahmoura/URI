#include <stdio.h>

int main () {
	
	double sal, vend, grat;
	char nome[1000];
		
	scanf("%s", nome);
	scanf("%lf %lf", &sal, &vend);
	
	grat = vend * 0.15;
	
	printf ("TOTAL = R$ %.2lf\n", grat + sal); 

	return 0;
}
