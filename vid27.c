#include<stdio.h>
#include<stdlib.h> 

int main(){
	char tecla;
	printf("Programa de borrado de pantalla");
	printf("\n--------------------------\n");
	printf("\n--------------------------\n");
	printf("\n--------------------------\n");
	printf("\n--------------------------\n");
	printf("Digite el numero 1: ");
	scanf("%c",&tecla);
	if(tecla=='1')
	{
		system("cls");
		printf("\n Se borro la pantalla ");
	}
	else{
		fflush(stdin);
		printf("No funciono :( \n");
		printf("Digite el numero 1: ");
		scanf("%c",&tecla);
		if(tecla=='1')
		{	
			system("cls");
			printf("\n Se borro la pantalla ");
		}
	}
	

return 0;
}
