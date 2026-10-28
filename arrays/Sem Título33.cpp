#include <stdio.h>
#include <conio.h>

int main(){
	int nota[3], ponderada[3], i, ponderada_tot=0, nota_tot=0;
	
	for(i=0; i<3; i++){
		printf("Digite a %d nota", i+1); scanf("%d", &nota[i]);
		printf("Digite a ponderada da %d nota: ", i+1); scanf("%d", &ponderada[i]);
	}
	
	for(i=0; i<3; i++){
		ponderada_tot = ponderada_tot + (nota[i]*ponderada[i]);
		nota_tot = nota_tot + nota[i];
	}
	
	printf("Sua nota: %d", ponderada_tot/nota_tot);
}
