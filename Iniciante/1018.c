#include <stdio.h>

int main () {

	int a, n, n100, n50, n20, n10, n5, n2, n1;

	scanf("%d", &a);

    n = a;
	n100 = a / 100;
    a = a % 100;
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
    n1 = a;

	printf ("%d\n", n);
	printf ("%d nota(s) de R$ 100,00\n", n100);
	printf ("%d nota(s) de R$ 50,00\n", n50);
	printf ("%d nota(s) de R$ 20,00\n", n20);
	printf ("%d nota(s) de R$ 10,00\n", n10);
	printf ("%d nota(s) de R$ 5,00\n", n5);
	printf ("%d nota(s) de R$ 2,00\n", n2);
	printf ("%d nota(s) de R$ 1,00\n", n1);

	return 0;
}
