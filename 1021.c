#include <stdio.h>

int main () {

	int n100, n50, n20, n10, n5, n2, m1, m050, m025, m010, m005, m001;
    double a, b;

	scanf("%lf", &a);

	n100 = a;
	b = a - n100;
	a = a - b;

	n100 = a / 100;
    a = a % 100.0;
    n50 = a / 50;
    a = a % 50;
    n20 = a / 20;
    a = a % 20;
    n10 = a / 10;
    a = a % 10;
    n5 = a / 5;
    a = a % 5;
    n2 = a / 2;
    a = a % 2;
    m1 = a;

    m050 = b / 0.50;
    b = b % 0.50;
    m025 = b / 0.25;
    b = b % 0.25;
    m010 = b % 0.10;
    b = b % 0.10;
    m005 = b / 0.05;
    b = b % 0.05;
    m001 = b;

	printf ("NOTAS:\n");
	printf ("%d nota(s) de R$ 100.00\n", n100);
	printf ("%d nota(s) de R$ 50.00\n", n50);
	printf ("%d nota(s) de R$ 20.00\n", n20);
	printf ("%d nota(s) de R$ 10.00\n", n10);
	printf ("%d nota(s) de R$ 5.00\n", n5);
	printf ("%d nota(s) de R$ 2.00\n", n2);
	printf ("MOEDAS:\n");
	printf ("%d moeda(s) de R$ 1.00\n", m1);
	printf ("%d moeda(s) de R$ 0.50\n", m050);
	printf ("%d moeda(s) de R$ 0.25\n", m025);
	printf ("%d moeda(s) de R$ 0.10\n", m010);
	printf ("%d moeda(s) de R$ 0.05\n", m005);
	printf ("%d moeda(s) de R$ 0.01\n", m001);


	return 0;
}
