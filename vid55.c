#include <stdio.h>
void imprimirNum(int n);
void ejercicio();
void problema();
int fibonacci(int n);
int fibonacciSum(int n);
int imprec(int num);
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

void ejercicio()
{
	char op;
	do{
	
	int numero, res, resp, sum = 0;
	system("cls");
	printf("\nDigite el numero de elementos: \n");
	scanf("%i",&numero);

	for (int i = 1; i <= numero; i++)
	{
		res = fibonacci(i);
		sum = res + sum;
		printf(" %i ",res);
	}

	printf("\n La suma es: %i",sum);
	printf("\n Otra vez? S/N \n");
	fflush(stdin);
	scanf("%c",&op);
	}
	while(op == 's');
	
}

int fibonacci(int n){
	
	if(n==0||n==1)
	{
		return n;
	}
	else
	{
		return (fibonacci(n-1)+fibonacci(n-2));
		//return(fibonacci(n-1)+n);
	}
}

void problema(){

	int n, i, res;

	printf("\nIngresa un numero: ");
	scanf("%i",&n);
	imprec(n);
	//printf("\n%i", n);
	/*
	for (i = n; i == 1 ; )
	{
		res = imprec(i);
		printf("\n%i",res);
	}*/
	
}

int imprec(int num)
{
	int i;

	for (int i = num; i >= 1; ++i)
	{
		if (num == 0)
		{
			return 0;
		}
		else
		{
			printf(" %i ",num);
			return imprec(num-1);
		}
	}
}