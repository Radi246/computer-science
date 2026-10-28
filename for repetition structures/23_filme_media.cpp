#include <stdio.h>
#include <locale.h>

int main(){
	int i, j, idade, op, cont_idade=0, regular_quant=0;
	float media_idade, bom_percent, soma_idade=0, bom_quant=0;
	
	setlocale(LC_ALL, "Portuguese");
	
	for(i=1; i<=3; i++){
		printf("O que a pessoa %i achou do filme?\n3 - Excelente\n2 - bom \n1 - regular\n\n", i); scanf("%i", &op);
		printf("\nQual a idade dela?: "); scanf("%i", &idade);
		
		if(op == 3){
			soma_idade = soma_idade + idade;
			cont_idade++;
		}
		else if(op == 1){
			regular_quant++;
		}
		else if(op == 2){
			bom_quant++;
		}
		else{
			printf("Invalido");
		}
	}
	printf("A média de idade de pessoas que responderam excelente: %f\n", soma_idade/cont_idade);
	printf("A quantidade de pessoas que responderam regular: %i\n", regular_quant);
	printf("O percentual de pessoas que responderam bom: %.0f\n", (bom_quant/3)*100);
}
