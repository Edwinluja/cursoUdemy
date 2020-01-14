#include <stdio.h>
#include <math.h>
void ejercicio();
void problema();
void funcionTrigonometrica();
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
	/*
		Funciones Trigonometricas

		acos(x) - Calcula el arco coseno de x
		asin(x) - Calcula el arco seno de x
		atan(x) - Calcula el arco tangente de x
		sin(x)  - Calcula el seno del angulo x, en radianes
		cos(x)  - Calcula el coseno del angulo x, en radianes
		tan(x)  - Calcula la tangente del angulo x, en radianes

	*/

	funcionTrigonometrica();
}

void funcionTrigonometrica(){

	float x,y,z,w,a,b, c1=0, c2=0, c3=0, c4=0, c5=0, c6=0;

	printf("\narcCoseno\nDigite un numero: ");
	scanf("%f",&y);
	c2 = acos(y);
	printf("\n arcoCoseno: %.2f\n",c2);

	printf("\narcSeno \nDigite un numero: ");
	scanf("%f",&x);
	c1 = asin(x);
	printf("\n arcoSeno: %.2f\n",c1);
 
	printf("\narcTan \nDigite un numero: ");
	scanf("%f",&z);
	c3 = atan(z);
	printf("\n arcoTangente: %.2f\n",c3);

	printf("\nCoseno\nDigite un numero: ");
	scanf("%f",&a);
	c5 = cos(a);
	printf("\n Coseno: %.2f\n",c5);

	printf("\nSeno \nDigite un numero: ");
	scanf("%f",&w);
	c4 = sin(w);
	printf("\n Seno: %.2f\n",c4);

	printf("\nTangente\nDigite un numero: ");
	scanf("%f",&b);
	c6 = tan(b);
	printf("\n Tangente: %.2f\n",c6);

}

void problema(){
	
}