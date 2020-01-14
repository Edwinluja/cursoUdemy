#include <stdio.h>
#include <time.h>
void ejercicio();
void problema();
void funcionAleatoria();
void funcionAleatoria10();
void randIngresa();
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
/*	Funcion Aleatoria
	
	srand(time(NULL));
	variable = limite_iferior + rand() % ((limite_superior + 1) - limite_inferior);
*/

	funcionAleatoria();
	system("pause");
	system("cls");
	funcionAleatoria10();
	system("pause");
	system("cls");
	randIngresa();

}

void funcionAleatoria(){
	int numero;

	srand(time(NULL));
	numero = 1 + rand() % ((10+1)-1); //numero aleatorio entre 1 y 10
	printf("\nNumero: %i",numero );
}

void funcionAleatoria10(){
//	10 numeros aleatorios
	int numero;
	srand(time(NULL));
	for(int  i=1;i<=10;i++)
	{
		numero = 1 + rand() % ((10+1)-1);
		printf("\nNumero: %i",numero );
	}
}

void randIngresa(){
// 10 numeros aleatorios ingresando limites
	int numero, i,li,ls;
	srand(time(NULL));
	printf("\nIngrese limite inferior: ");
	scanf("%i",&li) ;
	fflush(stdin);
	printf("\nIngrese limite superior: ");
	scanf("%i",&ls);
	for(int  i=1;i<=10;i++)
	{
		numero = li + rand() % ((ls+1)-li);
		printf("\nNumero: %i",numero );
	}

}

void problema(){
	
}