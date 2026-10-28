#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void alterar(int *valor){
	
	int numero = 50;
	printf("%d\n", numero + valor);
}

int main(){
	int valor = 10;
	
	alterar(&valor);
	printf("%d\n", valor);

	return 0;
}
