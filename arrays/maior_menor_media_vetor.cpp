#include <stdio.h>
#include <locale.h>

int main(){
	int i, valor[5], cont=0, maior=0, menor=0, media;
	
	setlocale(LC_ALL, "Portuguese");
	
	for(i=0; i<5; i++){
		printf("Digite um valor: "); scanf("%i", &valor[i]);
		media = media + valor[i];
		
		if(cont == 0){
			maior = valor[i];
			menor = valor[i];
			cont = 1;
		}
		else{
			if(valor[i] >= maior){
				maior = valor[i];
			}
			else if(valor[i] <= menor){
				menor = valor[i];
			}
		}
	}
	printf("O menor número é %i\nO maior número é: %i\nA média aproximada dos números é: %i", menor, maior, media/5);
}
