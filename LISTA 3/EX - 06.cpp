#include<stdio.h>

/*Faca um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu
peso ideal, utilizando as seguintes formulas (em que ÅghÅh corresponde a altura):
. Homens: (72,7 * h) . 58
. Mulheres: (62,1 * h) . 44,7*/

int main(){
char sexo;
float altura, resultadoHomem, resultadoMulher;
	
	printf("Digite o sexo e altura:\n");
	scanf("%c%f", &sexo, &altura);
	
if(sexo == 'f'){
	resultadoHomem = (72,7 * altura) - 58;
	printf("Resultado %.1f\n", resultadoHomem);
	}
else {

	resultadoMulher = (62.1 * altura) - 44.7;
	printf("Resultado %.1f\n", resultadoMulher);
	}
	
	
}
