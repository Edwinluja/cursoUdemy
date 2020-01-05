/* Problema 1: Comprobar si un alumno aprueba SI tiene 6 o mas */
#include<stdio.h>
int main(){
	
	float examen;
	
	printf("Digite la nota del examen: ");
	scanf("%f",&examen);
	
	if (examen >= 6)
	{
		puts("El alumno aprovo"); //puts solo se utiliza en condicionales como if
	}
	else
	{
		printf("El alumno reprovo");
	}
	
	return 0;
}
