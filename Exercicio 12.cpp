#include <stdio.h>

int main () {
	
	int A,B, temp;
	
	printf ("Digite um numero: ");
	scanf ("%d", &A);
	printf ("Digite um numero: ");
	scanf ("%d", &B);
	
	temp = A;
	A = B;
	B = temp;
	
	printf ("Apos a troca");
	printf ("\nPrimeiro numero: %.2d", A);
	printf ("\nSegundo numero: %.2d", B);
	return 0;
}
