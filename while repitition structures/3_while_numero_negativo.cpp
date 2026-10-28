#include<stdio.h>
#include<locale.h>



int main(){
	int num, contador=0;
	
	setlocale(LC_ALL, "Portuguese");
	
	while(num >= 0){
		printf("Digite um número: "); scanf("%i", &num);
		
		contador++;
	}
	printf("\nForam digitados %i números", contador);
}
