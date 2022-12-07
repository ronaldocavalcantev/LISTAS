#include<stdio.h>
#include<stdlib.h> 

/*Leia 2 valores inteiros e armazene-os nas variáveis A e B. Efetue a soma
de A e B atribuindo o seu resultado na variável X. Imprima o resultado da seguinte
forma “valor de A” + “valor de B” = “valor de X”.*/

int main(){
	int valor1, valor2, resultado;
		printf(" Digite um valor: \n", valor1);
		scanf("%d", &valor1);
			printf("Digite um segundo valor:\n", valor2);
			scanf("%d", &valor2);

resultado = valor1 + valor2;

	printf(" valor de 1 + valor de 2 e igual: %d\n", resultado);	
	
	
}
