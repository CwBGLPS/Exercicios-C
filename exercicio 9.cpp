#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main () {
	float valor_gasto, gorjeta, valor_total;
	
	printf ("\nDigite o valor gasto: ");
	scanf ("%f", &valor_gasto);
	
	gorjeta = valor_gasto * 0.1;
	valor_total = valor_gasto + gorjeta;
	
	printf ("\nValor total e: %.2f", valor_total);
	return 0;
}
