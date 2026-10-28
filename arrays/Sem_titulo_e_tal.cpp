#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int num[3][3], i, j;
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("Digite um número: "); scanf("%d", &num[i][j]);
		}
	}
	
	for(i=0; i<3; i++){
		printf("\n");
		for(j=0; j<3; j++){
			printf(" [%d] ", num[i][j]);
		}
	}
	
	getch();
}
