#include <stdio.h>
#include <locale.h>

int main(){
	int i, j;
	char nome[20];
	float nota, media, percent, soma, soma_media, acima6;
	
	setlocale(LC_ALL, "portuguese");
	
	for(i=1; i<=20; i++){
		for(j=1; j<=5; j++){
			printf("Informe a nota %i do aluno %i: ", j, i); scanf("%f", &nota);
			soma = soma + nota;
		}
		media = soma / 3;
		if(media >= 6){
			acima6++;
		}
		soma = 0;
		printf("\nA média do aluno %i é: %.2f\n", i, media);
		soma_media = soma_media + media;
	}
	printf("A média da turma é de: %.2f", soma_media/20);
}
