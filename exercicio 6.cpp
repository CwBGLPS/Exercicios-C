#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main () {
	char nome_funcionario[20] = "Gabriel";
	float horas, sal_hora, salario;
	
	printf ("\nDigite seu nome: ");
	scanf ("%s", &nome_funcionario);
	printf ("\nDigite suas horas trabalhadas: ");
	scanf ("%f", &horas);
	printf ("\nDigite seu salário por hora: ");
	scanf ("%f", &sal_hora);
	
	salario = sal_hora * horas;
	
	printf ("\nSeu nome e: %s Seu salario e: %.2f\n", nome_funcionario, salario);
	return 0;
}
