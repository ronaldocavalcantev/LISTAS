#include<stdio.h>
#include<stdlib.h>

/*Construa um algoritmo que a partir da leitura de dois n�meros forne�a o resto e o
quociente da divis�o do primeiro pelo segundo n�mero.
� Lembre-se das express�es aritm�ticas:
1. mod ? m mod i: resto da divis�o de m por i
2. (\) ? m \ i: quociente da divis�o de m por i
Exemplo: 5 mod 2 � 1
5 \ 2 � 2*/

int main(){
int num1, num2, resultado, resto;
		printf(" Digite o primeiro numero:z\n", num1);
		scanf("%d", &num1);
			printf(" Digite o segundo numero:\n", num2);
			scanf("%d", &num2);
	
/*Calculo*/
resultado = num1 / num2;

	printf(" O resultado da divisao e: %d\n", resultado);
	resto = num1 % num2;
	printf(" O resto e: %d.\n", resto);


	
}
