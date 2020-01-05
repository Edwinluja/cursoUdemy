#include<stdio.h>

int main(){
	
	char nombre[30];
	char sexo;
	int edad;
	
	printf("Nombre: ");
	scanf("%s",nombre);
	fflush(stdin);
	printf("\nSexo (m/f): ");
	scanf("%s",sexo);
	fflush(stdin);
	printf("\nEdad: ");
	scanf("%d",&edad);
	
	printf("\nNombre: %s",nombre);
	printf("\nSexo: %s",sexo);
	printf("\nEdad: %d",edad);
	
	
	system("pause");
	return 0;
}
