#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*Fa�a um programa que leia um n�mero e, caso ele seja positivo, calcule e mostre: o
n�mero digitado ao quadrado e raiz quadrada do n�mero digitado.*/

int main (){
	int n1, raiz;
		printf(" Digite um numero.\n",n1);
		scanf("%d", &n1);
		raiz = sqrt(n1);
	
if ( n1 > 0){
	printf(" O numero ao quadrado e: %d\n", n1 * n1);
	printf(" A raiz quadra do numero e:%d\n", raiz);
}
}
