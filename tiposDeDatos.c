//Tipos de Datos
#include <stdio.h>

int main(){
	char a = 'e'; //Tama�o = 1 byte Rango: 0 a 255
	short b = -15; //Tama�o = 2bytes Rango: -128 a 127
	int c = 1024;  //Tama�o = 2 bytes Rango: -32,768  a 32,767
	unsigned int d = 128; //Tama�o = 2 bytes Rango: 0 a 65,535
	long e = 123456; //Tama�o 4 bytes Rango mucho :v
	float f =15.67896; //Tama�o 4 bytes Rango mucho :v
	double g = 1231.121341; //Tama�o 8 bytes Rango: muchote :v
				  	
	printf("El elemento es: %c",a);
	printf("\nEl elemento es: %i",b);
	printf("\nEl elemento es: %i",c);
	printf("\nEl elemento es: %i",c);
	printf("\nEl elemento es: %i",d);
	printf("\nEl elemento es: %li",e);
	printf("\nEl elemento es: %f",f);
	printf("\nEl elemento es: %lf",g);
	
	return 0;
}
