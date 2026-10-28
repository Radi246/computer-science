#include <stdio.h>
#include <conio.h>

int main(){
	
	int menor, matriz[3][3], i, j;
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("Digite um número: "); scanf("%d", &matriz[i][j]);
		}
	}
	
	for(i=0; i<3; i++){
		printf("\n");
		for(j=0; j<3; j++){
			printf(" [%d] ", matriz[i][j]);
		}
	}
	
	menor = matriz[0][2];
	
	for(i=0; i<3; i++){
		if(matriz[i][2-i] < menor){
			menor = matriz[i][2-i];
		}
	}
	
	printf("O menor número da matriz é %d", menor);
	
	getch();
}
