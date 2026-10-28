#include<stdio.h>
#include<locale.h>
main()
{
	float peso, restante, gato1, gato2;
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o peso do saco de ração em quilos: ");
	scanf("%f", &quilos);
	printf("Digite a quantidade de ração para o gato 1 em gramas: ");
	scanf("%f", &gato1);
	printf("Digite a quantidade de ração para o gato 2 em gramas: ");
	scanf("%f", &gato2);
	
	restante = (quilos * 1000) - ((gato1 + gato2) * 5);
	
	printf("Restante de ração: %.2f gramas\n", restante);
}
