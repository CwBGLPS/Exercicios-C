#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main () {
	char nome_funcionario[20];
	float sal_fixo, total_sal, valor_vendas, comissao;
	
	printf ("\nDigite o nome do funcionario: ");
	scanf ("%s", nome_funcionario);
	printf ("\nDigite seu salario fixo: ");
	scanf ("%f", &sal_fixo);
	printf ("\Digite o total de vendas do mes: ");
	scanf ("%f", &valor_vendas);
	
	comissao = valor_vendas * 0.15;
	total_sal = comissao + sal_fixo;
	
	printf ("\nSeu salario e: %.2f", total_sal);
	return 0;
}
