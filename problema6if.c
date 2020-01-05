/* Problema 6 if. ingresar un numero y calcuar su raiz cuadrada, si el numero es
negativo imprimir el numero y el mensaje que diga "tiene raiz imaginaria */
#include<stdio.h>
#include<math.h>
int main(){
	int n;
	float raiz;
	
	printf("Ingresa un numero: ");
	scanf("%i",&n);
	raiz = sqrt(n);
	if(raiz > 0)
	{
		printf("La raiz de %i es: %.2f",n,raiz);
	}
	else 
	{
		printf("\n El numero %i tiene raiz imaginaria",n);
	}
	
	return 0;
}
