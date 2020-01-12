#include <stdio.h>
void ejercicio();
void problema();
float farenheit(float c);
void tablaDe20(int n);
float kelvin(float c);
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

void ejercicio() {
	int op;
	float grados,f = 0,k = 0;
	printf("\n Ingresa los grados Celsius: ");
	scanf("%f",&grados);
	do
	{
		printf("\n1. Farenheit");
		printf("\n2. Kelvin");
		printf("\n3. Salir");
		printf("\n Digita la opcion: ");
		scanf("%i",&op);
		switch(op)
		{
			case 1: 
			f = farenheit(grados);
			printf("\nEl equivalente en Farenheit: %.2f",f);
			break;
			case 2: 
			k = kelvin(grados);
			printf("\nEl equivalente en Kelvin: %.2f",k);
			break;
		}
	}
	while(op != 3);

}

float farenheit(float c){
	float far;
	far = (9*c)/5 + 32;
	return far;
}

float kelvin(float c){
	float kel;
	kel = c + 273.15;
	return kel;
}

void problema(){
	int n;

	printf("\nIngresa un numero: ");
	scanf("%i",&n);
	tablaDe20(n);
}

void tablaDe20(int n){
	int res;

	for (int i = 0; i <= 20; ++i)
	{
		res = i * n;

		printf("\n %i X %i = %i",n,i,res);
	}
}