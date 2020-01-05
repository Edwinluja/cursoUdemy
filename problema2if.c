// Problema 2 (if) Comprobar si un numero es negativo o positivo
#include<stdio.h>
int main(){
	float a;
	
	printf("Ingrese un numero");
	scanf("%f",&a);
	
	if(a>0)
	{
		printf("El numero es positivo");
	}
	else
	{
		printf("El numero es negativo");
	}
	
	return 0;
}
