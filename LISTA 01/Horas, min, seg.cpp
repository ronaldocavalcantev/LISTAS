#include<stdio.h>
#include<stdlib.h>
/* Construa um algoritmo que leia um n�mero inteiro de horas e mostre ao usu�rio o
correspondente em minutos e segundos destas horas.*/

int main(){
	int horas, minutos, segundos;
		printf(" Digite a hora desejada: \n", horas);
		scanf("%d", &horas);
		
	minutos = ( 60 * horas);
		
		printf(" A quantidade de minutos e: %d.\n", minutos);
	segundos = (60 * minutos);
		printf(" A quantidade de segundos e: %d.\n", segundos);

}
