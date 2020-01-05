/* 9 Calcular el nuevo salario de un obrero que tuvo un aumento del 25% en su salario
anterior*/
#include<stdio.h>
int main(){
	float salario, aumento, nueSalario;
	
	printf("Ingrese el salario del obrero $");
	scanf("%f",&salario);
	aumento = salario * 0.25;
	nueSalario = salario + aumento;
	printf("El aumento es de $%.2f",aumento);
	printf("\nEl nuevo salario es $%.2f",nueSalario);
	
	
	return 0;
}
