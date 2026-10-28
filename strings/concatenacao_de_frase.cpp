#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

int main(){
	char frase[100], frase1[100], frase_junta[100];
	
	printf("Digite a primeira frase: "); scanf(" %[^\n]", frase);
	printf("Digite a segunda frase: "); scanf(" %[^\n]", frase1);
	
	strcpy(frase_junta, frase);
	strcat(frase_junta, " ");
	strcat(frase_junta, frase1);
	
	printf(frase_junta);
}
