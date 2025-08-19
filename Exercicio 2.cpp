#include<stdio.h>
#include<math.h>

int main () {
	float temp_celsius, temp_fahrenheit;
	printf ("\nDigite a temperatura em Celsius: ");
	scanf ("%f", &temp_celsius);
	
	temp_fahrenheit = (9.0/5.0) * temp_celsius + 32.0;	
	
	printf ("\n Sua temperatura em fahrenheit é: %.2f/n", temp_fahrenheit);
	return 0;

}
