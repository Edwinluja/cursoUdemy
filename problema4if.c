/* Problema 4 (if) determinar si un numero es par o impar  */
#include<stdio.h>
int main(){
	int a, residuo;
	
	printf("Ingresa un numero: ");
	scanf("%i",&a);
	
	residuo = a%2;	
	if(residuo == 0)
	{
		printf("El numero es par");
	}
	else
	{
		printf("El numero es impar");
	}
	
	return 0;
}
