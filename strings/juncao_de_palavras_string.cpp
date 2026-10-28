#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char frase1[100], frase2[100], frase3[100];
	
	printf("Digite a primeira frase: "); scanf(" %[^\n]", frase1);
	//gets(frase1)
	
	printf("Digite a segunda frase: "); scanf(" %[^\n]", frase2);
	
	strcpy(frase3, frase1);
	strcat(frase3, " ");
	strcat(frase3, frase2);
	
	printf("Frase %s", frase3);
	
	return 0;
}
