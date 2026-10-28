#include <stdio.h>
#include <conio.h>

int main(){
	int num[3][3], i, j;
	
	for(i=0; i<3; i++){
		printf("Digite o [%d]", i); scanf("%d", &num[i]);
		for(j=0; j<3; j++){
			printf("Digite o [%d] da [%d]: ", j, i); scanf("%d", &num[i][j]);
		}
	}
	
	for(i=0; i<3; i++){
		printf(" {%d} ", num[i]);
		printf("\n");
		for(j=0; j<3; j++){
			printf(" [%d] ", num[i][j]);
		}
	}
	
	getch();
}
