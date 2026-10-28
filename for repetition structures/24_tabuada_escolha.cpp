#include <stdio.h>
#include <locale.h>

int main(){
	int i;
	float tabuada, result;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Informe o número para a tabuada: "); scanf("%f", &tabuada);
	
	for(i=1; i<=10; i++){
		result = tabuada * i;
		printf("\n%.0f x %i = %.0f", tabuada, i, result);
	}
}
