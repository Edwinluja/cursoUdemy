/*Problema 10. Una distribuidora de motocicletas tiene la promocion siguiente: 
  Las Honda tiene un 5% de descuento, Yamaha 8% y Suziki del 10%, las otras marcas 2% */
  
#include<stdio.h>

int main(){
	int m1 = 70000;
	int m2 = 50000;
	int m3 = 65000;
	int m4 = 10000;
	int m5 = 80000;
	int resp;
	
	printf("\n****MENU****\n");
	printf("1. Honda:	$%d\n",m1);
	printf("2. Yamaha:	$%d\n",m2);
	printf("3. Suzuki:	$%d\n",m3);
	printf("4. Italik:	$%d\n",m4);
	printf("5. Kawasaki:	$%d\n",m5);
	
	printf("\nQue moto va a comprar?: \n");
	scanf("%c",&resp);
	
	if(resp == '1')
	{
		fflush(stdin);
		system("cls");
		float total = m1 * .95 ;
		printf("Vas a pagar en total $%.2f",total);
	}
	if(resp == '2')
	{
		fflush(stdin);
		system("cls");
		float total = m2 * .92 ;
		printf("Vas a pagar en total $%.2f",total);
	}
	if(resp == '3')
	{
		fflush(stdin);
		system("cls");
		float total = m3 * .90 ;
		printf("Vas a pagar en total $%.2f",total);
	}
	if(resp == '4')
	{
		fflush(stdin);
		system("cls");
		float total = m4 * .98 ;
		printf("Vas a pagar en total $%.2f",total);
	}
	if(resp == '5')
	{
		fflush(stdin);
		//system("cls");
		float total = m5 * .98 ;
		printf("Vas a pagar en total $%.2f",total);
	}
	
	
	
return 0;
}
