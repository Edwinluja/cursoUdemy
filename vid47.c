#include <stdio.h>
void ejercicio();
void problema();
int comprobar(int numero);
void comprobar2(int num);
double media(float n1, float n2);
//void media(float n1, float n2);
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

	//Determinar si un numero es par o no
	int n, x,n2;

	printf("\n Digite un numero: ");
	scanf("%i",&n); 

	x = comprobar(n);
	if(x==0)
	{
		printf("\nEl numero es par.");
	}
	else
	{
		printf("\nEl numero es impar.");
	}
	system("pause");
	system("cls");
	printf("\n Digite un numero: ");
	scanf("%i",&n2); 
	comprobar2(n2);

}

int comprobar(int numero){
	//funcion con retorno de valor
	if(numero%2==0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

void comprobar2(int num){
	// funcion de procedimiento 
	if(num%2 == 0)
	{
		printf("\nEl numero es par.");
	}
	else
	{
		printf("\n El numero es impar.");
	}

}

void problema(){

	float a,b;
	double med;

	printf("\n Ingresa un numero: ");
	scanf("%f",&a);
	fflush(stdin);
	printf("\n Ingresa otro numero: ");
	scanf("%f",&b);

	med = media(a,b);
	//media(a,b);
	printf("\n La media aritmetica es: %.2f",med);
	
}
/*
void media(float n1, float n2)
{
	float suma = 0, res = 0;

	suma = n1+n2;
	res = suma/2;

	printf("\nla media es: %f",res);
}
*/
double media(float n1,float n2){
	float suma;
	float res;
	suma = 0;
	res = 0;
	suma = (n1+n2);
	res = suma / 2;
	return res;
	//return (n1+n2)/2;
}