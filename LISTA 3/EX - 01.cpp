#include<stdio.h>
#include<stdlib.h>

/*Faça um programa que leia dois números e mostre qual deles é o maior.*/

int main(){
	float n1, n2;
		printf("Digite um numero:\n");
		scanf("%f", &n1);
			printf(" Digite um segundo numero:\n");
			scanf("%f", &n2);
		
	if(n1 > n2){
		printf(" O numero maior e: %.1f.\n", n1);
	}else {
	if (n2 > n1);{
		printf(" O numero maior e: %.1f.\n", n2);}
}

}
