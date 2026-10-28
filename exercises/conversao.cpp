#include<stdio.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	float pes, polegadas, jardas, milhas;
	printf("Digite um valor em pés: ");
	scanf("%f", &pes);
	polegadas = pes * 12;
	jardas = pes / 3;
	milhas = jardas / 1760;
	printf("Seu valores\nPolegadas: %f\nJardas: %f\nMilhas: %f", polegadas, jardas, milhas);
}
