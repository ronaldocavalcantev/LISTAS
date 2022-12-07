#include<stdio.h>
#include<stdlib.h>

/*Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, os dois
números forem iguais, imprima a mensagem “Números iguais”.*/

int main(){
	float n1, n2;
		printf("Digite um numero:\n");
		scanf("%f", &n1);
			printf(" Digite um segundo numero:\n");
			scanf("%f", &n2);
		
	if(n1 > n2)
		printf(" O numero maior e: %.1f.\n", n1);

	if (n2 > n1) 
		printf(" O numero maior e: %.1f.\n", n2);
	if ( n1 == n2)
		printf(" Os numeros sao iguais");
	

}
