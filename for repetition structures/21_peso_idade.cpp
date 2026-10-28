#include <stdio.h>
#include <locale.h>

int main(){
	int i, idade, menor=0, maior=0;
	float soma_menor=0, soma_maior=0, peso;
	
	setlocale(LC_ALL, "Portuguese");
	
	for(i=1;i<=12; i++){
		printf("Informe a idade da pessoa %i: ", i); scanf("%i", &idade);
		printf("Informe o peso da pessoa %i: ", i); scanf("%f", &peso);
		
		if(idade >=0 && idade <= 18){
			soma_menor = soma_menor + peso;
			menor++;
		}
		else if(idade >= 28){
			soma_maior = soma_maior + peso;
			maior++;
		}
	}
	printf("A média de peso de pessoas de 0 a 18 anos é: %.2f\n", soma_menor/menor);
	printf("A média de peso de pessoas maiores de 28 é: %.2f\n", soma_maior/maior);
}
