/*	Recursividad: Una funcion es una funcion que se llama a si misma
	
	1.- Caso base.
	2.- Caso recursivo

	a(x)
	{
	  if(n==1)
	  {
		return n;
	  }
	  else{
		a(x)
	  }
	}
*/

#include <stdio.h>
void ejercicio();
void problema();
long factorial(int n);
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
// 	Factorial con recursividad
	int numero;
	long fact;

	printf("\nDigite un numero: ");
	scanf("%i",&numero);
 
	fact = factorial(numero);
	printf("\nEl factorial del numero %i es: %li",numero,fact);
}

long factorial(int n){
/*	4! = 4*3*2*1  = 4*3!
	3! = 3*2*1	  = 3*2!
	2! = 2*1	  = 2*1!
	1! = 		  = 1
	
	4*3! (1ra vuelta)	4*6 = 24
	3*2! (2da vuelta)	3*2
	2*1! (3ra vuelta)	2*1
	1					
*/
	if(n<=1)
	{
		return 1;
	}
	else
	{
		return(n*factorial(n-1));
	}

}

void problema(){
	
}