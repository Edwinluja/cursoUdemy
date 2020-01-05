/* 4. CALCULO DE LONGITUD DE UNA CIRCUNFERENCIA */
#include<stdio.h>
#include<math.h>
#define PI 3.1416

int main(){
	
	float diametro, radio, longitud;
	
	printf("Ingrese el diametro: ");
	scanf("%f",&diametro);
	
	radio = diametro/2;
	longitud = (2*PI)*(radio);
	
	printf("La longitud es: %f",longitud);
	
	return 0;
}
