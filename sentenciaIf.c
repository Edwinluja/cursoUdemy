/*  Sentencia if */

//prueba de divisibilidad

#include<stdio.h>
int main(){
	int a,b;
	
	printf("Digita dos numeros: ");
	scanf("%d %d",&a,&b);
	
	if (a % b == 0) // % es reciduo
	{
		printf("El numero %d es divisible entre %d",a,b);
	}
	
	
	return 0;
}
