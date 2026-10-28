#include <stdio.h>
#include <locale.h>

int main(){
	int i;
	float a[5], b[5], soma[5];
	
	setlocale(LC_ALL, "Portuguese");
	
	for(i=0; i<5; i++){
		printf("Digite o %i número para A: ", i+1); scanf("%f", &a[i]);
	}
	for(i=0; i<5; i++){
		printf("Digite o %i número para b: ", i+1); scanf("%f", &b[i]);
	}
	
	for(i=0; i<5; i++){
		soma[i] = a[i] + b[i];
		
		printf("A soma de %.2f e %.2f é: %.2f\n", a[i], b[i], soma[i]);
	}
}
