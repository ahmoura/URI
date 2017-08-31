#include <stdio.h>

int main () {
	
	int peca, qtd, i;
	float preco, tot = 0;
	
	for (i = 1; i <= 2; i ++){
		
		scanf("%d %d", &peca, &qtd);
		scanf("%f", &preco);
		tot = tot + qtd*preco;
	}
	
	printf ("VALOR A PAGAR: R$ %.2f\n", tot); 

	return 0;
}
