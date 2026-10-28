#include <stdio.h>
#include <locale.h>

int main(){
	int num_cart = -1, num_mult, i, multa_maior;
	float val_mult, tot_mult, sum_mult, mult_alta=0;
	
	setlocale(LC_ALL, "Portuguese");
	
	while(num_cart != 0){
		printf("Número da carteira: "); scanf("%i", &num_cart);
		if(num_cart == 0){
			break;
		}
		
		printf("Digite a quantidade de multas: "); scanf("%i", &num_mult);
		for(i=1; i<=num_mult; i++){
			printf("Digite o valor da %i° multa: ", i); scanf("%f", &val_mult);
			sum_mult = sum_mult + val_mult;
		}
		printf("O motorista %i deve %f em dividas. \n", num_cart, sum_mult);
		
		if(sum_mult >= mult_alta){
			mult_alta = sum_mult;
			multa_maior = num_cart;
		}
		
		tot_mult = tot_mult + sum_mult;
		sum_mult = 0;
	}
	printf("A soma de todas as multas é: %f", tot_mult);
	printf("O motorista com a maior quantidade de dividas é: %i", multa_maior);
}
