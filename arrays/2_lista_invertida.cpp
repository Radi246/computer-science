#include <stdio.h>
#include <locale.h>

int main(){
	int i, a[5];
	
	setlocale(LC_ALL, "Portuguese");
	
	for(i=0; i<5; i++){
		printf("Digite o número a ser inserido: ", i+1); scanf("%i", &a[i]);
	}
	for(i=0; i<5; i++){
		printf("a[%i]: %i\n", i, a[i]);
	}
	printf("\n");
	for(i=4; i>=0; i--){
		printf("a[%i]: %i\n", i, a[i]);
	}
}
