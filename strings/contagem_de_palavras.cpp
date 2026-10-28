#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char frase[100];
	int i, cont=0, em_palavra=0;
	
	printf("Digite uma frase: "); scanf("%[^\n]", frase);
	
	for(i=0; frase[i]!='\0'; i++){
		if(frase[i] == '\40'){
			em_palavra=0;
		}
		else if(em_palavra == 0){
			em_palavra = 1;
			cont++;
		}
	}
	printf("A quantidade de frases digitadas é: %i", cont);
}
