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

// Hacer un bucle do-while para imprimir las letras minusculas del alfabeto

	char letra = 'a'; //61hexa

	do
	{
		printf("%c.\n",letra);
		letra++; 
	}
	while(letra <= 'z');


}

void problema(){
	
}