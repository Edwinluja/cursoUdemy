/* 11. Calcular la cantidad de segundos que estan incluidos en el numero de horas,
minuto y segundos ingresados */
#include<stdio.h>
int main(){
	int horas, minutos, segundos, t1, t2, t3, total;
	
	printf("Ingrese la hora: ");
	scanf("%i",&horas);
	printf("Ingrese los minutos: ");
	scanf("%i",&minutos);
	printf("Ingrese los segundos: ");
	scanf("%i",&segundos);
	
	t1 = horas * 3600;
	t2 = minutos * 60;
	t3 = segundos * 1;
	
	total = t1 + t2 + t3;
	printf("Segundos Totales: %i",total);
	
	return 0;
}
