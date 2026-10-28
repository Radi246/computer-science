#include <stdio.h>>
#include <locale.h>

int main(){
	int oi [3][3], i, c;
	
	for(i=0; i<2; i++){
		printf("Digite um número: "); scanf("%i", &oi[i]);
		for(c=0; c<2; c++){
			printf("Digite outro número: "); scanf("%i", &oi[i][c]);
		}
	}
	for(i=0; i<2; i++){
		printf("%i", oi[i]);
		for(c=0; c<0; c++){
			printf("%i", oi[i][c]);
		}
	}
}
