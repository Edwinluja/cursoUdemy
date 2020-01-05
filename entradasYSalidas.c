//Entradas y Salidas

#include <stdio.h>
int main(){
	/*int a = 10;
	float b = 15.5;
	char c = 'e';
	printf("\nLos datos son: %i %.1f %c",a,b,c); */
	
	int a;
	float b;
	char c;
	
	printf("\nDigita el valor de la variable a: ");
	scanf("%d",&a); //primero poner %tipoDeDato , &la variable(lugar de la memoria)
	printf("\nEl valor es: %d",a);
	printf("\nDigita el valor de la variable b: ");
	scanf("%f",&b); 
	printf("\nEl valor es: %f",b);
	fflush(stdin);
	printf("\nDigita el valor de la variable c: ");
	scanf("%c",&c); 
	printf("\nEl valor es: %c",c);
	
	char x[50];
	printf("\nDigita tu nombre: ");
	scanf("%s",x); //cuando son strings no lleva el &
	printf("\nTu nombre: %s",x);
	fflush(stdin);
	//si se ingresan datos con espacios se usa el gets(x);
	char y[50];
	printf("\nDigita tu nombre completo: ");
	gets(y);
	printf("\nTu nombre completo: %s",y);
	
	
	return 0;
}
