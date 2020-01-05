/* Video 28-29. Sentencias switch */
#include<stdio.h>

int main(){
	int numero;
	
	printf("Digite un numero entre 1 y 3: ");
	scanf("%i",&numero);
	
	switch(numero){
		case 1:  //si fueran con letras los casos van -----case 'A':
			printf("Caso 1");
		break;
		case 2:
			printf("Caso 2");
		break;
		case 3:
			printf("Caso 3");
		break;
		
		default:
			printf("Nada");
		break;
	}
	
	
	return 0;
}
