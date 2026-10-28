#include <stdio.h>
#include <math.h>

main(){
	char nome[20];
	int escolha;
	int num1, num2, resultado;
	
	printf("Digite o seu nome: "); scanf("%s", &nome);
	printf("Bem vindo %s", nome);
	
	printf("Esxcolha 1 para multiplicação, 2 para elevação."); scanf("%i", &escolha);
	
	switch(escolha){
		case 1:
			
			printf("Primeiro número"); scanf("%i", &num1);
			printf("Segundo número"); scanf("%i", &num2);
			resultado = num1 * num2;
			
			printf("%i", resultado);
	
		case 2:
			
			printf("Primeiro número"); scanf("%i", &num1);
			printf("Segundo número"); scanf("%i", &num2);
			resultado = pow(num1, num2);
			
			printf("%i", resultado);
	}
}
