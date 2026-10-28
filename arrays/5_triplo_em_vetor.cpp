#include <stdio.h>
#include <locale.h>

int main(){
	int i, a[5], b[5], t[5];
	
	for(i=0; i<5; i++){
		printf("A[%i]: ", i); scanf("%i", &a[i]);
	}
	for(i=0; i<5; i++){
		printf("B[%i]: ", i); scanf("%i", &b[i]);
	}
	for(i=0; i<5; i++){
		t[i] = a[i] * b[i];
		printf("%i = %i x %i\n", t[i], a[i], b[i]);
	}
}
