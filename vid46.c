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
// 2.- Funcion de sumar 2 numeros

	int a, b, suma =0;
	printf("\n Digite 2 numeros: ");
	scanf("%i %i",&a,&b);
	suma = sumar(a,b);
	printf("\n La suma es: %i",suma   );
	printf("\n La suma es %i",sumar(a,b));
}

void problema(){
	
}

int sumar(int n1, int n2)
{
	int suma=0;
	suma = n1 + n2;
	return suma;
}