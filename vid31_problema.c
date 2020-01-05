#include<stdio.h>
#include<math.h>
int main(){

	int opcion, ncubo, npar;

	printf("\nMENU");
	printf("\n1.- El cubo de un numero");
	printf("\n2.- Par o impar de un numero");
	printf("\n SELECCIONA UNA OPCION: ");
	scanf("%i",&opcion);

	switch(opcion)
	{
		case 1:
		system("cls");
		printf("\n Ingresa un numero: ");
		scanf("%i",&ncubo);
		int operacion = pow(ncubo,3);
		printf("\n El cubo del numero %i es: %i",ncubo,operacion);
		break;

		case 2:
		system("cls");
		printf("\n Ingresa un numero: ");
		scanf("%i",&npar);
		int mod = npar/2;
		if(mod == 0)
		{
			printf("\n EL NUMERO ES PAR.");
		}
		else
		{
			printf("\n El numero no es par. ");
		}
		break;
		default:
		printf("\n Opcion invalida. ");
		break;
	}
	return 0;
}