#include <stdio.h>
#include <locale.h>

int main(){
	int i, A[5], salvo, indice, negativo_01=0;
	
	setlocale(LC_ALL, "Portuguese");
	
	for(i=0; i< 5; i++){
		printf("Digite o %i número: ", i); scanf("%i", &A[i]);		
	}
	
	for(i=0; i< 5; i++){
		if(A[i] < 0){
			indice = i;
			salvo = A[i];
			negativo_01 = 1;
			break;
		}
	}
	if (negativo_01 == 1){
		printf("O primeiro negativo é %i no indice %i", salvo, indice);
	}
	else{
		printf("Não houve números negativos");
	}
}
