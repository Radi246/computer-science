#include<stdio.h>
#include<locale.h>
main()
{
	float preco_fabrica, distribuidor_porcento, fabrica_porcento, lucro, imposto, fim;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Insira o preço de fabrica: ");
	scanf("%f", &preco_fabrica);
	
	printf("Insira o percentual do lucro do distribuidor: ");
	scanf("%f", &distribuidor_porcento);
	
	printf("Insira o percentual de impostos: ");
	scanf("%f", &fabrica_porcento);
	
	lucro = preco_fabrica * (distribuidor_porcento / 100);
	imposto = preco_fabrica * (fabrica_porcento / 100);
	fim = preco_fabrica + lucro + imposto;
	
	printf("Lucro do distribuidor: %f\n", lucro);
	printf("Valor correspondente dos impostos: %f\n", imposto);
	printf("Preço final do veículo: %f", fim);
}
