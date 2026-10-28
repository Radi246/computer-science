#include <stdio.h>
#include <locale.h>

int main(){
	int i;
	float soma, num, fim;
	
	setlocale(LC_ALL, "Portuguese");
	
	for(i=1; i<=4; i++){
		printf("\nDigite o %i número para a média de 4: ", i); scanf("%f", &num);
		soma = soma + num;
	}
	fim = soma / 4;
	printf("A média entre os 4 números: %f", fim);
}
