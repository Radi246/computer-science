#include <stdio.h>

int main(){
	int num;
	
	printf("Digite um número: "); scanf("%i", &num);
	
	if (num >= 20){
		printf("Seu número é: %i", num/2);
	}
	printf("Seu número é: %i", num);
}
