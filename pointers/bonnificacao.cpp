#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

float atualizarSal(float *sal){
	float bony;
	
	if(*sal >= 1200){
		bony = 110;
	}
	else{
		bony = 190;
	}
	
	
	*sal = *sal + bony;
	return bony;
}

int main(){
	float salario, bonus;
	float *salario_ponteiro;
	
	setlocale(LC_ALL, "Portuguese");
	
	
	printf("Digite o seu salário: "); scanf("%f", &salario);
	
	bonus = atualizarSal(&salario);
	
	printf("Bonus: %f\n", bonus);
	printf("Novo salário: %f\n", salario);
	
	return 0;
}
