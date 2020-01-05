/* 5. Areas de trapecios */
#include<stdio.h>
int main(){
	float bmay, bmen, alt, area;
	
	printf("Ingrese la base mayor, la menor y la altura: ");
	scanf("%f %f %f",&bmay,&bmen,&alt);
	
	area = ((bmay + bmen)/2)*alt;
	printf("Area = %f",area);
	
	return 0;
}
