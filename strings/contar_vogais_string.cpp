#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

int main(){
	
	char frase[100];
	int i, cont=0;
	
	printf("Digite a frase: "); scanf(" %[\n]", frase);
	
	for(i=; frase[i]!='\0'; i++){
		if(frase[i] == 'a' || frase[i] == 'A' ||
		   frase[i] == 'e' || frase[i] == 'E' ||
		   frase[i] == 'i' || frase[i] == 'I' ||
		   frase[i] == 'o' || frase[i] == 'o' ||
		   frase[i] == 'u' || frase[i] == 'U'){
		   	cont++;
		   }
		   
		   printf(cont);
	}
	
	return 0;
}
