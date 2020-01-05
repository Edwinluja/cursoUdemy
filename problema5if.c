/*Problema 5 (if) Calcular el mayor de dos numeros y visualizarlo en pantalla */
#include<stdio.h>
int main(){
	int a,b;
	
	printf("Ingresa dos numeros: ");
	scanf("%i %i",&a,&b);
	if(a>b)
	{
		printf("El numero mayor es: %i",a);
		printf("\nEl numero menor es: %i",b);
	}
	else if(b>a)
		{
			printf("El numero mayor es: %i",b);
			printf("\nEl numero menor es: %i",a);
		}
		else
		{
		printf("Los numeros son iguales9 ");
		}
	
	return 0;
}
