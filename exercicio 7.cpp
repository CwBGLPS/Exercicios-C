#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main () {
	float km_per, dias_alug, alug_valor, km_valor, valor_total;
	
	printf ("\nDigite quanto o carro correu: ");
	scanf ("%f", &km_per);
	printf ("\nDigite quantos dias o carro ficou alugado: ");
	scanf ("%f", &dias_alug);
	
	valor_total = (70 * dias_alug) + (0.15 * km_per);
	
	printf ("\nValor do carro e: %.2f", valor_total);
	return 0;
}
