#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

void troca_letra(char frase[]){
	int i, cont=0;
	
	for(i=0; frase[i]!='\0'; i++){
		if(frase[i] == 'a' || frase[i] == 'A'){
			frase[i] = 'b';
			cont++;
		}
	}
	
	printf("Quantidade de caracteres modificados: %d\n", cont);
	printf("Frase modificada: %s", frase);
}

int main(){
	char frase[100];
	int i, cont=0;
	
	printf("Digite uma frase: "); scanf("%[^\n]", frase);
	
	troca_letra(frase);
	return 0;
}
