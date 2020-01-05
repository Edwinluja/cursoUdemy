/******************Video 29. PROBLEMA*****************
	
	Seleccionar un tipo de vehiculo e indicar el peaje a pagar segun un valor numerico
	1.- Turismo		= $ 500
	2.- Autobus		= $3000	
	3.- Motocicleta = $ 300
	Caso contrario - Vehiculo no autorizado
*/

#include<stdio.h>

int main(){
	int sel;
	printf("*****MENU DE PEAJES*****\n");
	printf("1.- Turismo	= $ 500\n");
	printf("2.- Autobus     = $3000\n");
	printf("3.- Motocicleta	= $ 300\n");
	printf("\nSeleccione un tipo e peaje: ");
	scanf("%i",&sel);
	
	switch(sel){
		
		case 1:
			printf("\n Pagara $500");
		break;
		
		case 2:
			printf("\n Pagara $3000");
		break;
		case 3:
			printf("\n Pagara $300");
		break;
		
		default:
			printf("\n Vehiculo no autorizado (quizas sea un tanque :v )");
	}
	
return 0;
}
