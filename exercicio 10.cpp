#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main () {
	float valor_pares, valor_total, salario;
	int comissao, sapatos_vend;
	
	printf("\nDigite o valor total de sapatos vendidos: ");
	scanf ("%f", &valor_total);
	printf ("\nDigite a quantidade de sapatos vendidos: ");
	scanf ("%i", &sapatos_vend);
	
	comissao = valor_total * 0.2;
	valor_pares = sapatos_vend * 2.5;
	salario = comissao + valor_pares;
	
	printf ("\nO valor da comissao e: %.f O valor da venda dos pares e: %.2f Juntando eles ficara com: %.2f", comissao, valor_pares, salario);
	return 0;
}
