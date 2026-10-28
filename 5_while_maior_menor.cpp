#include <stdio.h>
#include <locale.h>

int main(){
	float num=1, maior, menor, media, contador=0;
	
	setlocale(LC_ALL, "Portuguese");
	
	while (num != 0){
		printf("Digite um número: "); scanf("%f", &num);
		
		if(contador == 0){
			maior = num;
			menor = num;
		}
		else{
			if (num >= maior && num != 0){
				maior = num;
			}
			else if (num <= menor && num != 0){
				menor = num;
			}
		}
		contador++;
		media = media + num;
	}
	printf("O maior número é: %f\nO menor número é: %f\nA média é: %f", maior, menor, media/(contador-1));
}
