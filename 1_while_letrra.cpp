#include <stdio.h>
#include <locale.h>

int main(){
	char letra;
	
	while (letra != 'f'){
		printf("Digite uma letra: "); scanf("%c", &letra);
		printf("%c\n", letra);
	}
	printf("\nAcabou");
}
