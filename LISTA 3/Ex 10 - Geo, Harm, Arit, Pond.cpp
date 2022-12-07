#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>

/**Faça um programa que leia três números inteiros positivos e efetue o cálculo de uma das
seguintes médias de acordo com um valor numérico digitado pelo usuário e mostrado na tabela
a seguir:*/

int main (){
	int x,y,z, media;
	float calculo;
	printf(" Digite a media que deseja. \n(1 Geometrica), \n(2 Ponderada), \n(3 Harmonica), \n(4 Aritmetica).\n");
	scanf("%d", &media);
		printf(" Digite um numero.\n");
		scanf("%d", &x);
			printf(" Digite segundo numero.\n");
			scanf("%d", &y);
				printf(" Digite terceiro numero.\n");
				scanf("%d", &z);
if (media == 1 ){
	calculo = x*y*z;
	printf(" Media igual: %.1f.\n", calculo);
} else if(media == 2){
	calculo =  ( x+2 * y + 3 * z )/6; 
		printf(" Media igual: %.2f.\n", calculo);
} else if (media == 3){
	calculo = 1 / (1/x+1/y+1/z);
	printf(" Media igua: %.2f.\n", calculo);
} else if (media == 4){
	calculo = (x + y + z) / 3;
	printf(" Media igual: %.2f.\n", calculo);
}
}
