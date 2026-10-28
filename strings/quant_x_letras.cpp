#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void contaX(char frase[]){
	int i, cont=0;
	
	
	for(i=0; frase[i]!='\0'; i++){
		if(frase[i]=='x'){
			cont++;
		}
	}
	printf("%d", cont);
}

int main(){
	char frase[100];
	int i, cont=0;
	
	printf("Digite um texto: "); scanf("%[^\n]", frase);
	
	contaX(frase);
	
	return 0;
}
