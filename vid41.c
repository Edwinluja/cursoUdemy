/*
	Video 41. Factorial de un numero
*/


#include <stdio.h>
void ejercicio();
void problema();
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

	int n,i,factorial=1;
	printf("\nDigite un numero: ");
	scanf("%i",&n);

	for (i = 1; i <= n; i++)
	{
		factorial = factorial * i;
	}
	printf("\nEl fatorial de %i es: %i",n,factorial);
}

void problema(){

	int n1,i,factorial1=1,n2,factorial2 = 1, suma = 0;
	printf("\nDigite el primer numero: ");
	scanf("%i",&n1);

	printf("\n Digite el segundo numero: ");
	scanf("%i",&n2);	

	for (i = 1; i <= n1; i++)
	{
		factorial1 = factorial1 * i;
	}
	for (i = 1; i <= n2; i++)
	{
		factorial2 = factorial2 * i;
	}

	suma = factorial2 + factorial1;
	printf("\n %i! + %i! = %i",n1,n2,suma);
}