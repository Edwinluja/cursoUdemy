/*Ciclo while
	sintaxis:
			while(condicion){
			instrucciones;
			}

	 MOSTRAR LOS PRIMEROS DIEZ NUMEROS
*/

#include <stdio.h>
int main()
{
	int i;

	i = 0;
	printf("\nAscendente");
	while(i<=10)
	{
		printf("\n%i",i);
		i++;
	}
	printf("\n");
	system("pause");
	system("cls");

	printf("\nDesscendente");
	int j = 10;
	while(j>=0)
	{
		printf("\n%i",j);
		j--;
	}
	printf("\n");
	system("pause");
	system("cls");

	printf("\nImprime asteriscos ");
	int k = 1;
	while(k<=10)
	{
		printf("*",k);
		k++;
	}
	printf("\n");
	system("pause");
	system("cls");

	return 0;
}