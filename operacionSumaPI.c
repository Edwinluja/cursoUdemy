//Directicas del Preprocesador
#include <stdio.h>
#define PI 3.1415  //variable ya definida

int b = 5; //variable global porque esta fuera de una funcion

int main (){
	
	int a = 10;  //variable local porque esta dentro de una funcion
	int suma = 0;
	float suma2 = 0;
	
	suma = PI + a;
	suma2 = PI + a;
	printf("La suma es: %i",suma);
	printf("\n\n La suma 2 es: %.2f",suma2); // %.2f da solo dos decimales de la suma y redondea el sig numero
	return 0;
}
