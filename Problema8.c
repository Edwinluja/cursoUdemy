/* 8. Dadas las horas trabajadas de una persona y el valor por hora calcular el salario
e imprimirlo */
#include<stdio.h>
int main(){
	float hTrab, pHora, salario;
	
	printf("Ingrese las horas trabajadas: ");
	scanf("%f",&hTrab);
	printf("Ingrese el valor de cada hora $");
	scanf("%f",&pHora);
	
	salario = hTrab*pHora;
	
	printf("El salario del trabajador es de $%.2f",salario);	
	return 0;
}
