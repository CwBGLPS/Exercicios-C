#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define SALARIO_MINIMO 1518.00

int main () {
	float sal_usuario, qtde_salminimo;
	printf ("\Digite seu salario: ");
	scanf ("%f", &sal_usuario);
	
	qtde_salminimo = sal_usuario / SALARIO_MINIMO;
	
	printf ("\nVoce ganha %.2f/n \nIsso é %.2f/nSalarios minimos.", sal_usuario, qtde_salminimo);
	return 0;	
}
