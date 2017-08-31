#include <stdio.h>

int main () {
	
	double a, b, c, d;
	
	scanf("%lf %lf %lf", &a, &b, &c);
	
	d = (a * c) / 2.0;
	printf ("TRIANGULO: %.3lf\n", d);
	d = 3.14159 * c * c;
	printf ("CIRCULO: %.3lf\n", d);
	d = ((a + b) * c) / 2.0;
	printf ("TRAPEZIO: %.3lf\n", d);
	d = b * b;
	printf ("QUADRADO: %.3lf\n", d);
	d = a * b;
	printf ("RETANGULO: %.3lf\n", d);
					 

	return 0;
}
