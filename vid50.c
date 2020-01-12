#include <stdio.h>
void ejercicio();
void problema();
void ascendente(int a, int b, int c);
void descendente(int a, int b, int c);
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
	int a,b,c;

	printf("\nDigite 3 numeros: ");
	scanf("%i %i %i",&a,&b,&c );
	ascendente(a,b,c);
	descendente(a,b,c);

}

void ascendente(int a, int b, int c){

	if(a>=b && a>= c){
		if (b>=c)
		{
			printf("\n %i %i %i",c,b,a);

		}
		else
		{
			printf("\n %i %i %i",b,c,a);
		}
	}
	if (b>=a && b>=c)
	{
		if (a>=c)
		{
			printf("\n %i %i %i",c,a,b);
		}
		else
		{
			printf("\n %i %i %i",a,c,b);
		}
	}
	if (c>=a && c>= b)
	{
		if (a>=b)
		{
			printf("\n %i %i %i",b,a,c);
		}
		else
		{
			printf("\n %i %i %i",a,b,c);
		}
	}

}

void descendente(int a, int b, int c){
	if (a>=b && a>=c)
	{
		if (b>=c)
		{
			printf("\n %i %i %i",a,b,c);
		}
		else
		{
			printf("\n %i %i %i",a,c,b);
		}
	}
	if (b>=a && b>=c)
	{
		if (a>=c)
		{
			printf("\n %i %i %i",b,a,c);	
		}
		else
		{
			printf("\n %i %i %i",b,c,a);
		}
	}
	if (c>=a && c>=b)
	{
		if (a>=b)
		{
			printf("\n %i %i %i",c,a,b);
		}
		else
		{
			printf("\n %i %i %i",c,b,a);
		}
	}
}

void problema(){
	int a,b,c;

	printf("\nDigite 3 numeros: ");
	scanf("%i %i %i",&a,&b,&c );
	descendente(a,b,c);
}