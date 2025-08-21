#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#define MEDIA_PESOA 2
#define MEDIA_PESOB 3
#define MEDIA_PESOC 5

int main () {
	float notaA, notaB, notaC, notacp1, notacp2, notacp3, media_final;
	
	printf ("\nDigite sua primeira nota: ");
	scanf ("%f", &notaA);
	notacp1 = notaA * MEDIA_PESOA;
	printf ("\n&notacp1");
	printf ("\nDigite sua segunda nota: ");
	scanf ("%f", &notaB);
	notacp2 = notaB * MEDIA_PESOB;
	printf ("\n&notacp2");
	printf ("\nDigite sua terceira nota: ");
	scanf ("%f", &notaC);
	notacp3 = notaC * MEDIA_PESOC;
	printf ("\n&notacp3");
	
	media_final = (notacp1 + notacp2 + notacp3) / (MEDIA_PESOA + MEDIA_PESOB + MEDIA_PESOC);
	
	printf ("\nSua media final ponderada é %.2f \n ", media_final);
}
