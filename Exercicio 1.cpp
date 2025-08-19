// O programa lê o valor da variável e escreve na tela o valor x²
#include<stdio.h>

int main ( ) { // função principal

float x, resultado; // declaração de variáveis
printf ("\nForneca o valor de x: "); //solicitação de escrita do número
scanf ("%f", &x); //captura do valor digitado

//cálculo do quadrado
resultado = x * x;

//Impressão do valor de saída
printf ("\nO quadrado é: %.2f\n", resultado); // saída
return 0; // valor retornado
}
