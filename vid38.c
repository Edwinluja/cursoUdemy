/*	Video 38, ciclos for sin problema, solo ejercicio.	*/
#include <stdio.h>
void ejercicio();
//void problema();
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
		//problema();
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

	int i;
	printf("\n For Ascendente. ");
	for(i=0;i<=10;i++)
	{
		printf("\n%i\n",i);
	}
	system("Pause");
	system("cls");
	printf("\nFor Descendente");
	for(int j = 10; j>=0; j--)
	{
		printf("\n%i\n",j);
	}
	system("Pause");
	system("cls");
	printf("\n Escribir n veces algo");
	for(int k=1;k<=100;k++)
	{
		printf("\n %i. Hola de 0 a 100 en poco tiempo.",k);
	}

}