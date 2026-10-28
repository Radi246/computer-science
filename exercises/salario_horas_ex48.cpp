#include<stdio.h>
#include<locale.h>
main()
{
	float salario_minimo, bruto, horas, imposto, horas_salario, liquido;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o valor do salario minimo: ");
	scanf("%f", &salario_minimo);
	
	printf("Digite a quantidade de horas trabalhadas: ");
	scanf("%f", &horas);
	
	horas_salario = salario_minimo / 8;
	bruto = horas * horas_salario;
	imposto = 0.03 * bruto;
	liquido = bruto - imposto;
	
	printf("O salario a receber sera de: %f", liquido);
	
}
