#include <stdio.h>
#include <locale.h>

int main(){
	int i, j, result;
	
	for(i=1; i<=10; i++){
		printf("\n\nTabuada do %i:\n", i);
		for(j=1; j<=10; j++){
			result = i * j;
			printf("\n%i x %i = %i", i, j, result);
		}
	}
}
