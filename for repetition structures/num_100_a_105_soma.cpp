#include <stdio.h>
#include <locale.h>

int main(){
	int i, soma;
	
	setlocale(LC_ALL, "Portuguese");
	
	for(i=100; i<=105; i++){
		printf("%i\n", i);
		soma = soma  + i;
	}
	printf("Soma dos números imprimidos: %i", soma);
	printf("\nFim do programa");
}
