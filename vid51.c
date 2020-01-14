#include <stdio.h>
#include <math.h>
void ejercicio();
void problema();
void funcionMatematica();
int main(){

	int op;
	system("cls");
	printf("\n1.- Ejercicio ");
	printf("\n2.- Problema ");
	printf("\n Elejir problema: ");
	scanf("%i",&op);

	switch(op)
	{
		case 1:
		system("cls");
		ejercicio();
		printf("\n");
		break;
		case 2: 
		system("cls");
		problema();
		printf("\n");
		break;
		default:
		printf("\nOpcion invalida.");
		break;
	}
	system("pause");
	system("cls");
	return 0;
}

void ejercicio(){

/* 		Funciones matematicas:

	ceil(x) 	- Redondea al proximo entero mas cercano	5.2 -> 6
	fabs(x) 	- Devuelve el valor absoluto de 			
	floor(x)	- Redondea por defecto al entero mas proximo
	fmod(x,y)	- Calcula el resto de la division de x/y
	pow(x,y)	- Calcula x elevalo a la potencia y
	sqrt(x)		- Calcula la raiz cuadrada de x

	Estas funciones no necesitas la libreria math.h
*/

	funcionMatematica();


}

void funcionMatematica(){
	float x,y,z,w1,w2,a1,a2,b,c1 = 0,c5 = 0,c2 = 0,c3 = 0,c4 = 0,c6 = 0;
	printf("\nDigite un numero: ");
	scanf("%f",&x);
	c1 = ceil(x);
	printf("\n ceil: \n%.2f",c1);
	fflush(stdin);
	printf("\nDigite un numero: ");
	scanf("%f",&y);
	c2 = fabs(y);
	printf("\n fabs: \n%.2f",c2);
	fflush(stdin);
	printf("\nDigite un numero: ");
	scanf("%f",&z);
	c3 = floor(z);
	printf("\n floor: \n%.2f",c3);
	fflush(stdin);
	printf("\nDigite un numero: ");
	scanf("%f",&w1);
	fflush(stdin);
	printf("\nDigite otro numero: ");
	scanf("%f",&w2);
	c4 = fmod(w1,w2);
	printf("\n fmod: \n%.2f",c4);
	fflush(stdin);
	printf("\nDigite un numero: ");
	scanf("%f",&a1);
	fflush(stdin);
	printf("\nDigite otro numero: ");
	scanf("%f",&a2);
	c5 = pow(a1,a2);
	printf("\n pow: \n%.2f",c5);
	fflush(stdin);
	printf("\nDigite un numero: ");
	scanf("%f",&b);
	c6 = sqrt(b);
	printf("\n sqrt: \n%.2f",c6);

}

void problema(){
	
}