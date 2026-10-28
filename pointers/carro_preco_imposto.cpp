#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

void calculaPreco(float fabrica, float percLucro, float percImp, float *lucro, float *imposto, float *precoFinal){
	*lucro = fabrica * percLucro/100;
	*imposto = fabrica * percImp/100;
	*precoFinal = fabrica + *imposto + *lucro;
	
}

int main(){
	float fabrica, percLucro, percImp, lucro, precoFinal, imposto;
	
	printf("Digite o valor do veiculo na fábrica: R$"); scanf("%f", &fabrica);
	printf("Digite o percentual do lucro do distribuido: R$"); scanf("%f", &percLucro);
	printf("Digite o percentual dos impostos: R$"); scanf("%f", &percImp);
	
	calculaPreco(fabrica, percLucro, percImp, &lucro, &imposto, &precoFinal);
	
	printf("valor correspondente ao lucro do distribuidor: R$%2.f", lucro);
	printf("o valor correspondente aos impostos: R$%2.f", imposto);
	printf("Preço final: R$%2.f", precoFinal);
}
