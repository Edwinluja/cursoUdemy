/*7. Descuento del 15% en el total, el cliente quiere saber cuanto va a pagar */
#include<stdio.h>

int main(){
	float total, descuento, precio;
	
	printf("Ingrese el total de la compra $");
	scanf("%f",&total);
	descuento = total * 0.15;
	precio = total - descuento;
	printf("El precio es $%f",precio);
	
	return 0;
}
