#include <stdio.h>
#include <locale.h>

int main(){
	int i, numeros[7];
	
	setlocale(LC_ALL, "Portuguese");
	
	for(i=0; i<7; i++){
		printf("Digite o %i valor: ", i+1); scanf("%i", &numeros[i]);
	}
	
	for(i=0; i<7; i++){
		printf("O %i valor é: %i \n", i+1, numeros[i]);
	}
}
