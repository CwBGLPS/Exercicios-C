#include <stdio.h>

int main () {
	
	int votos_nulos, votos_validos, votos_brancos, total_eleitores;
    float percent_votos_nulos, percent_votos_validos, percent_votos_brancos;
    
    printf ("Digite o total de eleitores: ");
    scanf ("%d", &total_eleitores);
    printf ("Digite o total de votos nulos: ");
    scanf ("%d", &votos_nulos);
    printf ("Digite o total de votos validos: ");
    scanf ("%d", &votos_validos);
    printf ("Digite o total de votos brancos: ");
    scanf ("%d", &votos_brancos);
    
    percent_votos_nulos = (votos_nulos * 100) / total_eleitores;
    percent_votos_validos = (votos_validos * 100) / total_eleitores;
    percent_votos_brancos = (votos_brancos * 100) / total_eleitores;
    
    printf ("O total de votos e: %.d/n \no percentual dos votos nulos e: %.2f/n \no percentual dos votos validos e: %.2f/n \no percentual dos votos brancos e: %.2f", total_eleitores, percent_votos_nulos, percent_votos_validos, percent_votos_brancos);
    return 0;
}
