#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>

/*Escreva um programa que, dada a idade de um nadador, classifique-o em uma das
seguintes categorias:*/
int main(){
	int idade;
	
	printf("Digite sua idade\n");
	scanf("%d", &idade);
	
	if (idade>=5 && idade<=100)
	{

    if (idade >=5 && idade<=7){
 		printf("Infantil A");}
	
	else if (idade >=8 && idade<=10){
		printf("Infantil B");}
			
	else if (idade >=11 && idade<=13){
		printf("Juvenil A");}
	
	else if (idade >=14 && idade<=17){
		printf("Juvenil B");}
			else printf("Senior");					
				
}
	else printf("idade errada");

	
}
