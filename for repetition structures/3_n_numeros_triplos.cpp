#include <stdio.h>
#include <locale.h>

int main(){
	int i, n;
	float num, triplo;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\nInforme o número de algarismos a serem triplicados: "); scanf("%i", &n);
	
	for(i=1; i<=n; i++){
		printf("\nInforme %i número: ", i); scanf("%f", &num);
		triplo = num * 3;
		printf("\nO triplo de %.2f é: %.2f", num, triplo);
	}
	printf("\nFim do programa");
}
