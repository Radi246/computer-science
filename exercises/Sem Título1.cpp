#include<stdio.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	char nome[30];
	printf("Digite o seu nome: ");
	scanf("%s", &nome);
	printf("Bem vindo %s", nome);
}
