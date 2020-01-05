/*1. Pedir 2 numeros al usuario y hacer operaciones basicas */
#include <stdio.h>

int main(){
	int a, b;
	int sum, res, mul;
	int div;
	/* FORMA LARGA 
	
	printf("Ingresa 1er numero: ");
	scanf("%i",&a);
	printf("Ingresa 2do numero: ");
	scanf("%i",&b);
	*/
	 
	/* FORMA CORTA */
	printf("Ingresa 2 numeros: ");
	scanf("%i %i",&a,&b);
	 
	sum = a + b;
	res = a - b;
	mul = a*b;
	div = a/b;
	printf("\nLa suma es: %i",sum);
	printf("\nLa resta es: %i",res);
	printf("\nLa multi es: %i",mul);
	printf("\nLa div es: %d",div);
	return 0;
}
