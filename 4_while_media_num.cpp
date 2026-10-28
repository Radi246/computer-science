#include <stdio.h>
#include <locale.h>

int main(){
	int num, contador=0;
	float soma;
	
	setlocale(LC_ALL, "Portuguese");
	
	while (num >= 0){
		soma = soma + num;
		printf("Digite um número: "); scanf("%i", &num);
		contador++;
	}
	printf("A média dos números (descondiserando o negativo): %.2f", soma/(contador-1));
}
