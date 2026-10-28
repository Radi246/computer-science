#include <stdio.h>

int main(){
	int num[7], i;
	
	for(i= 0; i<7; i++){
		printf("Digite o %i: ", i+1); scanf("%i", &num[i]);
	}
	for(i= 0; i<7; i++){
		printf("%i \n", num[i]);
	}
}
