#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int quantidade, barras=4, result, quant_1;
	
	printf("Digite a quantidade de scraps que você tem: "); scanf("%i", &quantidade);
	printf("Quantas barras vc quer fazer: "); scanf("%i", &quant_1);
	
	result = barras * quant_1;
	
	printf("Você precis de %i scraps para fazer %i barras\n", result, quant_1);
	printf("Falta %i scraps para você ter %i barras.", result - quantidade, quant_1);
}
