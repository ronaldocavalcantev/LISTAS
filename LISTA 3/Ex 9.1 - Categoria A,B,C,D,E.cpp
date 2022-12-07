#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>

/* Faça um programa que leia a altura e o peso de uma pessoa. De acordo com a tabela a seguir,
verifique e mostre qual a classificação dessa pessoa.*/

int main (){
	float altura, peso;
		printf(" Digite sua altura:\n");
		scanf("%f", &altura);
		printf(" Digite seu peso:\n");
		scanf("%f", &peso);
if(peso < 60 && altura < 1.20){
	printf(" Categoria A.\n");}
else if (peso <= 90 && altura <1.20){
	printf(" Categoria D.\n");}
else if (peso >90 && altura <1.20){
	printf(" Categoria G.\n");}

if ( peso <=60 && altura <=1.70){
	printf(" Categoria B.\n");
} else if ( peso <=90 && altura <=1.70){
printf(" Categoria E.\n");
} else if ( peso > 90 && altura <= 1.70){
printf(" Categoria H.\n");}

if (peso <= 60 && altura > 1.70){
printf(" Categoria C.\n");}
	else if(peso <=90 && altura >1.70){
	printf(" Categoria F.\n");}	
	else if ( peso > 90 && altura > 1.70){
	printf(" categoria I.\n");}
}
