/* Video 35. Ejercicio: Suma de n primeros numeros con while */

#include <stdio.h>
int main(){

	int n, suma = 0, contador;

	printf("\n Total de numeros a sumar: ");
	scanf("%i",&n);

	contador = 1;

	while(contador <= n)
	{
		suma = suma + contador;
		contador++;
	}

	printf("\n La suma es %i",suma);


	return 0;
}