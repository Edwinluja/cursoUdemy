#include <stdio.h>
void ejercicio();
void problema();
void menu();
void sumar();
void restar();
void multiplicar();
void dividir();
void menuProblema();
void numEsc();
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
	menu();

}

void menu(){
	int opc;
	do
	{
		printf("\n1.- Sumar.");
		printf("\n2.- Restar.");
		printf("\n3.- Multiplicar.");
		printf("\n4.- Dividir.");
		printf("\n5.- Salir");
		printf("\n Elije opcion: ");
		scanf("%i",&opc);
		switch(opc)
		{
			case 1:
			sumar();
			break;
			case 2:
			restar();
			break;
			case 3:
			multiplicar();
			break;
			case 4:
			dividir();
			break;
		}
	}
	while(opc != 5);
}

void sumar(){
	int a,b,suma = 0;
	printf("\nDigite dos numeros: ");
	scanf("%i %i",&a,&b);
	suma = a + b;
	printf("\nLa suma es: %i",suma);
}

void restar(){
	int a,b,resta = 0;
	printf("\nDigite dos numeros: ");
	scanf("%i %i",&a,&b);
	resta = a - b;
	printf("\nLa resta es: %i",resta);
}

void multiplicar(){
	int a,b,multi = 0;
	printf("\nDigite dos numeros: ");
	scanf("%i %i",&a,&b);
	multi = a * b;
	printf("\nLa multiplicacion es: %i",multi);
}

void dividir(){
	int a,b,div = 0;
	printf("\nDigite dos numeros: ");
	scanf("%i %i",&a,&b);
	div = a / b;
	printf("\nLa divicion es: %i",div);
}


void problema(){
	menuProblema();
}

void menuProblema(){
	int opc;
	do
	{
		printf("\n Ingresa un numero del 1 al 10 ");
		scanf("%i",&opc);
		printf("\n%i",opc);
		numEsc(opc);
	}
	while(opc >= 10);
	printf("\nBye :v");
}

void numEsc(int n){ 
	switch(n)
	{
		case 1:
		printf("\n Uno ");
		break;
		case 2:
		printf("\n Dos ");
		break;
		case 3:
		printf("\n Tres ");
		break;
		case 4:
		printf("\n Cuatro ");
		break;
		case 5:
		printf("\n Cinco ");
		break;
		case 6:
		printf("\n Seis ");
		break;
		case 7:
		printf("\n Siete ");
		break;
		case 8:
		printf("\n Ocho ");
		break;
		case 9:
		printf("\n Nueve ");
		break;
		case 10:
		printf("\n Diez ");
		break;
		default:
		printf("\n Solo lee del 1 al 10");
		break;
	}

}