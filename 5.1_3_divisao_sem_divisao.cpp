#include <stdio.h>
#include <locale.h>

int main(){
	int num1, num2, resultado, cont=0;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o primeiro número: "); scanf("%i", &num1);
	printf("Digite o segundo número: "); scanf("%i", &num2);
	
	while (num1 != 0){
		num1 = num1 - num2;
		cont++;
	}
	printf("O resultado é: %i", cont);
}
