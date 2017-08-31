#include <stdio.h>

int main () {
	
	int n, ht;
	float sh, tot;
	
	scanf("%d %d", &n, &ht);
	scanf("%f" , &sh);
	
	tot = ht * sh;
	
	printf ("NUMBER = %d\n", n);
	printf ("SALARY = U$ %.2f\n", tot); 

	return 0;
}
