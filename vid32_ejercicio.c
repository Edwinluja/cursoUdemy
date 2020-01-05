/*	Expresion Condicional: '?'  
	
	Condicion ? expresion1: expresion2;
*/

#include <stdio.h>
int main(){

	int numero;

	printf("\n Digita un numero: ");
	scanf("%i",&numero);
	(numero%2==0) ? printf("\n Par") : printf("\n Impar");
	return 0;
}