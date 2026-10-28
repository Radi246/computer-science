#include<stdio.h>
#include<locale.h>
main()
{
	float pes, polegadas, jardas, milhas;
	
	setlocale(LC_ALL, "Portuguese");
	
	
	printf("Digite um valor em pés: ");
	scanf("%f", &pes);
	
	polegadas = pes * 12;
	jardas = pes / 3;
	milhas = jardas / 1760;
	
	printf("Polegadas: %f\n", polegadas);
	printf("Jardas: %f\n", jardas);
	printf("milhas: %f\n", milhas);
}
