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
	int n,cont = 0, i;
	printf("\nDigita un numero: ");
	scanf("%i",&n);

	for (int i = 1; i <= n; i++)
	{
		if(n%i==0)
		{
			cont++;
		}
	}
	if (cont>2)
	{
		printf("\nEl numero es compuesto. ");
	}
	else
	{
		printf("\n El numero es primo. ");
	}

}

void problema()
{

}