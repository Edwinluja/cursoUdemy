/* PROBLEMA 2: CONVERTIR DE CELSIUS A FAHRENHEIT */
#include<stdio.h>

int main(){
	
	float cel, far;
	
	printf("Ingrese los grados Celsius: ");
	scanf("%f",&cel);
	far = ((cel * 9)/5) + 32;
	printf("Los grados Fahrenheit son: %f",far);
	
	return 0;
}
