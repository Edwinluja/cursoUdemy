/* Problema 7 if. Ingresar por teclado nombre y el signo de una persona e imprimir, el
nombre solo si la persona es signo aries, si no imprimir no es signo aries */
#include<stdio.h>
int main(){
	char nombre[30], signo[15];
	
	printf("Ingresar nombre: ");
	gets(nombre);
	printf("\nIngresa signo: ");
	gets(signo);
	
	if(strcmp(signo,"aries")==0) //se pone cero porque lo ingresado es igual a 'aries
	{							 //se pone uno porque lo ingresado es distinto a 'aries'
		printf("Es signo aries, el nombre es: %s",nombre);		
	}
	else
	{
		printf("No es aries");
	}
	return 0;
}
