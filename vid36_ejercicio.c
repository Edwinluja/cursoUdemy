/*

	Programa de multiplos de 3 hasta n
	Problema multiplos de 5 hasta n


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


	int n, i;

	printf("\nDigite un numero a comprobar: ");
	scanf("%i",&n);

	i = 1;

	while(i <= n)
	{
		if(i%3==0)
		{
			printf("\n%i es multiplo de 3.",i);
		}
		i++;
	}
}

void problema(){
	int n, i;
	printf("\n Ingrese un numero: ");
	scanf("%i",&n);

	i = 1;

	while(i <= n)
	{
		if(i%5==0)
		{
			printf("\n%i Es multiplo de 5.",i);
		}
		i++;
	}
}