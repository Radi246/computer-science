#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

void modo_facil(char frase[]){
	int i;
	
	for(i=0; frase[i]!='\0'; i++){
		if(frase[i] == 'a' || frase[i] == 'A' ||
		frase[i] == 'e' || frase[i] == 'E' ||
		frase[i] == 'i' || frase[i] == 'I' ||
		frase[i] == 'o' || frase[i] == 'O' ||
		frase[i] == 'u' || frase[i] == 'U'){
			frase[i] = '*';
		}
	}
	printf("Sua frase: %s", frase);
	
	
}

bool vogal_achar(char letra){
	char vogais[] = {'a', 'e', 'i', 'o', 'u'};
	int i;
	
	for(i=0; i<5; i++){
		if(tolower(letra) == vogais[i]){
			return true;
		}
	}
	return false;
}

int main(){
	bool resultado_escolha = false;
	char frase[100];
	int i, escolha;
	
	while(resultado_escolha == false){
		printf("Selecione a maneira em que esse exercicio vai ser concluido\n1 - Maneira fácil, preguiçosa e nada prática\n2 - Maneira mais próximo do correto (eu acho)\n");
		scanf("%d", &escolha);
		
		if(escolha == 1 || escolha == 2){
			resultado_escolha = true;
		}
		else{
			printf("_-\nOpção invalida!-_\n");
		}
	}
	
	printf("Digite sua frase: "); scanf(" %[^\n]", frase);
	
	if(escolha == 1){
		modo_facil(frase);
	}
	
	else if(escolha == 2){
		for(i=0; frase[i]!='\0'; i++){
			if(vogal_achar(frase[i]) == true){
				frase[i] = '*';
			}
		}
		printf("Sua frase: %s", frase);
	}
	else{
		printf("Algo deu errado!");
	}
	getch();
}
