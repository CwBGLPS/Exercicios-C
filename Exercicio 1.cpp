// O programa l� o valor da vari�vel e escreve na tela o valor x�
#include<stdio.h>

int main ( ) { // fun��o principal

float x, resultado; // declara��o de vari�veis
printf ("\nForneca o valor de x: "); //solicita��o de escrita do n�mero
scanf ("%f", &x); //captura do valor digitado

//c�lculo do quadrado
resultado = x * x;

//Impress�o do valor de sa�da
printf ("\nO quadrado �: %.2f\n", resultado); // sa�da
return 0; // valor retornado
}
