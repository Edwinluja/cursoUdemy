/* 12. Calcular la media geometrica de 3 numeros */
#include<stdio.h>
#include<math.h>

int main(){
	float a,b,c,mg;
	
	printf("Ingrese 3 numeros: ");
	scanf("%f %f %f",&a,&b,&c);
	mg = sqrt(a * b * c);
	printf("La media geometrica es: %f",mg);
	
	return 0;
}
