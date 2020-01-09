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

// primera parte
	int i;
	i = 1;

	do
	{
		printf("\n %i",i);
		i++;
	}
	while(i<=10);
	system("pause");
	system("cls");

	char opc;

	do
	{
		fflush(stdin);
		printf("\n Hola ");
		printf("\n Digite 's' para saludar again: ");
		scanf("%c",&opc);
	}
	while(opc == 's' || opc == 'S');
}

void problema(){
	
}