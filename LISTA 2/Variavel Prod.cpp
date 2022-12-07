#include<stdio.h>
#include<stdlib.h>

/*Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e
atribua esta operação à variável PROD. A seguir mostre a variável PROD com
mensagem: PROD = “valor de PROD”.
*/

int main(){
	int n1, n2, PROD;
		printf(" Digite um valor:\n", n1);
		scanf("%d", &n1);
			printf(" Digite um segundo valor:\n", n2);
			scanf("%d", &n2);

PROD = (n1 + n2) * 2;
	printf(" O valor de PROD e: %d", PROD);
}
