/* Problema 8 if. Ingresar nombre edad sexo e imprimir, solo si la persona es masculino
y mayor de edad, el nombre de la persona */

#include<stdio.h>
#include<string.h>

int main(){
	char nombre[30];
	char sexo[1];
	int edad;
	
	printf("Ingrese su nombre: \n");
	scanf("%s",nombre);
	//gets(nombre);
	fflush(stdin);
	printf("Ingrese su sexo (m/f): ");
	gets(sexo);
	printf("Ingrese su edad: ");
	scanf("%d",&edad);
	
	printf("Datos ingresados: \n");
	fflush(stdin);
	printf("Nombre : %s",nombre);
	printf("\nSexo : %s",sexo);
	printf("\nEdad : %d",edad);
	/*
	if (edad >= 18 && (strcmp(sexo,"m")==0))
	{
		fflush(stdin);
		printf("Nombre: %s",nombre);
		//if(strcmp(sexo,"m")==0)
		//{
		//puts("Es masculino y mayor de edad \nSu nombre es: %s",nombre);
		//printf("Nombre: ",nombre);
		//puts("Nombre:");
		//puts(nombre[5]);
		//}
	}
	else
	{
		printf("O eres mujer o tienes menos de 18 ");
		fflush(stdin);
		puts(nombre);
	}
	*/
	
	return 0;
}
