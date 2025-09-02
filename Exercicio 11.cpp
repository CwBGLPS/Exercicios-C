#include <stdio.h>

int main () {
	
	float minha_altura, minha_sombra, predio_altura, predio_sombra;
	
	printf ("Digite sua altura: ");
	scanf ("%f", &minha_altura);
	printf ("Digite altura da sua sombra: ");
	scanf ("%f", &minha_sombra);
	printf ("Digite a altura da sombra do predio: ");
	scanf ("%f", &predio_sombra);
	
	predio_altura = (minha_altura * predio_sombra) / minha_sombra;
	
	printf ("a altura do predio e: %.2f", predio_altura);
	return 0;
}
