/* Problema 3. Sacar hipotenuza de un triangulo rectangulo
pidiendo el valor de los dos catetos */
#include<stdio.h>
#include<math.h>
int main(){
	float x,y,z;
	
	printf("Ingrese los dos catetos: ");
	scanf("%f %f",&x,&y);
	
	z = sqrt(pow(x,2)+pow(y,2)); //pow se utiliza para elevar a alguna potencia
	
	printf("La hipotenusa es: %f",z);
	return 0;
}
