#include<stdio.h>
#include<locale.h>
main()
{
	int altura_degrau, altura_obj, degrau;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite a altura de cada degrau em centimetros: ");
	scanf("%i", &altura_degrau);
	
	printf("Digite a altura a ser alcançada em centimentros: ");
	scanf("%i", &altura_obj);
	
	degrau = altura_obj / altura_degrau;
	
	printf("Voce precisa subir %i degrau(s) para chegar no seu objetivo.", degrau);
	//Arrendondado para baixo - Mateus Limas
}
