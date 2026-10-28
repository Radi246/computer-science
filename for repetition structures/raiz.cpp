#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	int i;
	float num, raiz, soma;
	
	setlocale(LC_ALL, "Portuguese");
	
	for(i=1; i<=4; i++){
		printf("\nDigite o %i número para a raiz quadrada: ", i); scanf("%f", &num);
		printf("%.2f", sqrt(num));
	}
}
