#include <stdio.h>
#include <conio.h>

int main(){
	
	int M[2][3], P[2][3], S[2][3], i, j;
	
	printf("Digite os valores para a matriz M: \n");
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
		scanf("%d", &M[i][j]);
		}
	}
	
	printf("Digite os valores para a matriz P: \n");
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
		scanf("%d", &P[i][j]);
		}
	}
	
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			S[i][j] = M[i][j] + P[i][j];
		}
	}
	
	for(i=0; i<2; i++){
		printf("\n");
		for(j=0; j<3; j++){
			printf(" [%d] ", S[i][j]);
		}
	}
	
	
	getch();
}
