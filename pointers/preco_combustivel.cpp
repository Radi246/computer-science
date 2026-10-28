#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

void atualizarCombustivel(float *gas, float percent, float *dis, float percDisel){
	
	*gas = *gas + (*gas * (percent / 100));
	*dis = *dis + (*dis * (percDisel / 100));
}

int main(){
	
	float gasolina, perGas, disel, perDisel;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o preço da gasolina: "); scanf("%f", &gasolina);
	
	printf("Aumento percentual da gasolina(%%): "); scanf("%f", &perGas);
	
	printf("Digite o preço do Disel: "); scanf("%f", &disel);
	
	printf("Aumento percentual da gasolina(%%): "); scanf("%f", &perDisel);
	
	atualizarCombustivel(&gasolina, perGas, &disel, perDisel);
	
	printf("---Preços atualiaados---\n");
	printf("Gasolina: R$: %2.f\n", gasolina);
	printf("Disel: R$: %2.f\n", disel);
	
	return 0;
}
