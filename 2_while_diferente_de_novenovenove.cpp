#include <stdio.h>
#include <locale.h>

int main(){
	int num;
	
	setlocale(LC_ALL, "Portuguese");
	
	while(num != -999){
		printf("Digite um número: "); scanf("%i", &num);
		printf("%i\n", num*3);
	}
	printf("Acabou");
}
