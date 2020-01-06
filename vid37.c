/*
	Video 37	
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
/*   Sumar 1-2+3-4+5...n    */
	int n, sumaPares = 0, sumaImpares = 0, cont, suma = 0, ne;

	printf("\n Cuantos numeros a sumar: ");
	scanf("%i",&n);
	cont = 1;
	while(cont<=n)
	{
		if(cont%2==0)
		{
			ne = cont*(-1);
			sumaPares = sumaPares + ne;
		}
		else
		{
			sumaImpares = sumaImpares + cont;
		}
		cont++;
	}
	suma = sumaPares + sumaImpares;
	printf("\nLa suma es: %i",suma);
}

void problema(){
/*	Suma de pares desde n hasta m */

	int n, m, suma = 0;

	printf("\nIngresa el primer numero: ");
	scanf("%i",&n);
	printf("\nIngresa el segundo numero: ");
	scanf("%i",&m);

	while(n<=m)
	{
		if(n%2==0)
		{
			suma = suma + n;
		}
		else
		{
			printf("\nNumeros impares: %i",n);
		}
		n++;
	}
	printf("\n La suma es: %i",suma);
}