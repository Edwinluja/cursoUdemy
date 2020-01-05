/******Video 30*****
Convertir un numero decimal a un romano
*/

#include<stdio.h>
int main(){

	int numero, unidad, decena, centenas, millar;

	printf("\nDigite un numero: ");
	scanf("%i",&numero);

	unidad =  numero%10;
	numero = numero/10;
	decena = numero%10;
	numero = numero/10;
	centenas =  numero%10;
	numero = numero/10;
	millar =  numero%10;
	numero = numero/10;


	switch(millar){
		case 1:
			printf("\nM");
		break;
		case 2:
			printf("\nMM");
		break;
		case 3:
			printf("\nMMM");
		break;

	}

	switch(centenas){
		case 1:
			printf("C");
		break;
		case 2:
			printf("CC");
		break;
		case 3:
			printf("CCC");
		break;
		case 4:
			printf("CD");
		break;
		case 5:
			printf("D");
		break;
		case 6:
			printf("DC");
		break;
		case 7:
			printf("DCC");
		break;
		case 8:
			printf("DCCC");
		break;
		case 9:
			printf("CM");
		break;
	}

switch(decena){
		case 1:
			printf("X");
		break;
		case 2:
			printf("XX");
		break;
		case 3:
			printf("XXX");
		break;
		case 4:
			printf("XL");
		break;
		case 5:
			printf("L");
		break;
		case 6:
			printf("LX");
		break;
		case 7:
			printf("LXX");
		break;
		case 8:
			printf("LXXX");
		break;
		case 9:
			printf("XC");
		break;
	}

	switch(unidad){
		case 1:
		printf("I");
		break;
		case 2:
		printf("II");
		break;
		case 3:
		printf("III");
		break;
		case 4:
		printf("IV");
		break;
		case 5:
		printf("V");
		break;
		case 6:
		printf("XI");
		break;
		case 7:
		printf("VII");
		break;
		case 8:
		printf("VIII");
		break;
		case 9:
		printf("IX");
		break;
	}

	return 0;
}