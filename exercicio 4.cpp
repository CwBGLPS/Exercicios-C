#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main () {
	float valor_dolar,qtde_reais,valor_convert;
	
	printf ("\nDigite a cotacao atual do dolar: ");
	scanf ("%f", &valor_dolar);	
	printf ("\nValor a ser convertido: ");
	scanf ("%f", &qtde_reais);
	
	valor_convert = qtde_reais / valor_dolar;
	
	printf ("\nVoce tem %.2f \dolares", valor_convert);
	return 0;
}
