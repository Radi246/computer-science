#include <stdio.h>
#include <locale.h>

int main(){
	int oi[2][2], i, c;
	
	for(i=0; i<2; i++){
		for(c=0; c<2; c++){
			printf("Digite um número: "); scanf("%d", &oi[i][c]);
		}
	}
	printf("NUMEROS");	
	for(i=0; i<2; i++){
	printf("\n");
		for(c=0; c<2; c++){
			printf("%d", oi[i][c]);
		}
	}
}
