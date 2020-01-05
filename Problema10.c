/* 10.  */
#include<stdio.h>
int main(){
	float p1, p2, p3, promPar, exFin, traFin, calFinal;
	
	printf("Ingrese las 3 calificaciones de los parciales: ");
	scanf("%f %f %f",&p1,&p2,&p3);
	promPar = (p1+p2+p3)/3;
	promPar = promPar*0.55;
	printf("Ingrese la calificacion del examen y trabajo final: ");
	scanf("%f %f",&exFin,&traFin);
	exFin = exFin*0.30;
	traFin = traFin*0.15;
	calFinal = promPar + exFin + traFin;
	printf("La calificacion es: %.2f",calFinal);
	
	
	return 0;
}
