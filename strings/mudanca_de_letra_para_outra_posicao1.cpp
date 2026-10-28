#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

void inversao(char original[]){
	char palavra_nova[100];
	int i, cont=0;
	
	for(i=0; original[i]!='\0'; i++){
		cont++;
	}
	
	strcpy(palavra_nova, original);
	
	for(i=0; original[i]!='\0'; i++){
		if(i==0){
			palavra_nova[0] = original[cont-1];
			palavra_nova[cont - 1] = original[0];
			printf("%d", i);
		}
		else if(i!=0 && i!=cont-1){
			printf("%d\n", i);
			palavra_nova[i] = original[i+1];
			printf("\n%s\n", palavra_nova);
		}
	}
	
	
	printf("%s", palavra_nova);
}

int main(){
	char original[100], palavra_nova[100] ="";
	int i, cont=0;
	
	printf("Escreva uma palavra: "); scanf("%[^\n]", original);
	
	inversao(original);
}
