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

	//Serie de Fibonacci

	int n, x=0, y=1, z=1, i;

	printf("\n Digite un numero: ");
	scanf("%i",&n);
	printf("\n 1, ");

	for(i = 1; i < n; i++ )
	{
		z = x + y;
		x = y;
		y = z;

		printf("%i , ", z);
	}
}

void problema(){

	int n, i, cont = 0, suma = 0;

	printf("\n Hasta que numero: ");
	scanf("%i",&n);

	for(i=1; i <= n; i++)
	{
		if(i%2==0)
		{
			suma = suma +i;
			cont ++;
		}
	}
	printf("\n La suma es: %i con %i pares ", suma, cont);
	
}