#include<stdio.h>
#include<stdlib.h>

/*Fa�a um programa que mostre ao usu�rio um menu com quatro op��es de opera��es
matem�ticas (as opera��es b�sicas, por exemplo). O usu�rio escolhe uma das op��es, e
o seu programa pede dois valores num�ricos e realiza a opera��o, mostrando o
resultado.*/

int main(){
	int n1, n2, resultado;
	float calculo;
		printf(" Digite o calculo que deseja:\n (1-soma) \n (2-Subtracao)\n (3-multiplicacao)\n (4-Divisao)\n");
		scanf("%d", &resultado);
			printf(" Digite o valor de n1:\n");
			scanf("%d", &n1);
				printf(" Digite o valor de n2:\n");
				scanf("%d", &n2);
switch (resultado)
{
case 1: calculo = n1 + n2; printf(" O resultado e: %.1f.\n", calculo); break;
case 2: calculo = n1 - n2; printf(" O resultado e: %.1f.\n", calculo); break;
case 3: calculo = n1 * n2; printf(" O resultado e: %.1f.\n", calculo); break;
case 4: calculo = n1 / n2; printf(" O resultado e: %.1f.\n", calculo); break;
}
}
