/*
	Digite un numero, si el numero supera a 
	10 multiplique los 10 primeros numeros, sino,
	sumelos.
*/

#include <stdio.h>
int main(){

	int n;

	printf("\nDigite un numero: ");
	scanf("%i",&n);

	if(n > 10)
	{
		int cont = 1, multi = 1;
		while(cont <= 10)
		{
			multi = multi * cont;
			cont++;
		}
		printf("\nLa multiplicacion es: %i",multi);
	}
	else
	{
		int cont2 = 0, suma = 0;
		while(cont2 <= 10)
		{
			suma = suma + cont2;
			cont2++;
		}
		printf("\nLa suma es: %i",suma);
	}

	system("pause");
	system("cls");

	printf("\nEn esta parte suma los siguientes 5 numeros al dado");
	int j;
	printf("\nDigite un numero: ");
	scanf("%i",&j);

	int nmax = j + 5;
	if(j > 10)
	{
		int multip2 = 1;
		printf("\n%i",nmax);
		while(j <= nmax)
		{
			printf("\n%i x %i",j,multip2);
			multip2 = multip2 * j;
			printf("\nmultip2: %i",multip2);
			fflush(stdin);
			j++;
			printf("\n%i",j);
		}
		printf("\nLa multiplicacion es: %i",multip2);
	}
	else
	{
		int suma = 0;
		while(j <= nmax)
		{
			suma = suma + j;
			j++;
		}
		printf("\nLa suma es: %i",suma);
	}

	return 0;
}