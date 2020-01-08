/*	Video 39. Suma de los 10 primeros numeros */
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
	int i, suma;

	suma = 0;
	for(i=0;i<=10;i++)
	{
		if(i%2==0)
		{
			suma = suma + i;
		}
	}
	printf("\n La suma de los 10 primeros numeros pares es: %i",suma);
}

void problema(){

	int n,i,j,k;
	printf("\n Digite el numero de filas: ");
	scanf("%i",&n);
	printf("\n");

	for(i = 1; i<=n;i++)
	{
		for (k = i; k <= n; k++)		//
		{								//-----*
			printf(" ");				//----**
		}								//---***
		for (j = 1; j <=i; j++)			//--****
		{								//-*****
			printf("* ");				//
		}

		printf(" \n");
	}

	/*
	for(int i = 0; i < n; i++)
	{
		for (int j = 0; j <=(n-i); j++)
		{
			printf(" ");
		}
		for (int k = 0; k <= i*2; k++)
		{
			printf("*");
		}
		printf("\n");
	*/
}