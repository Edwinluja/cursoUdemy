/* Problma 3 (if). Visualizar la tarifa de luz segun el gasto de la corriente electrica
 para un gasto menos de 1.000 Kwxh
 la tarifa es de 1.2, entre 1000 y 1850 es de 1.0 y mayor a 1.850kwxh 0.9*/
 
 #include<stdio.h>
 #define TARIFA1 1.2
 #define TARIFA2 1.0
 #define TARIFA3 0.9
 int main(){
 	float gasto, tasa;
 	
 	printf("Ingrese el total de gasto de energia: ");
 	scanf("%f",&gasto);
 	
 	if(gasto < 1000)
 	{
 		tasa = TARIFA1;
	}
 	if(gasto > 1000 && gasto <1850)
 	{
 		tasa = TARIFA2;	
	}
 	if(gasto >= 1850)
 	{
 		tasa =  TARIFA3;
	}
 	
 	printf("La tasa a pagar es: %.1f",tasa);
 	
 	return 0;
 }
