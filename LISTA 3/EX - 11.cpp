#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>
/*Leia 2 valores com uma casa decimal (x e y), que devem representar as
coordenadas de um ponto em um plano. A seguir, determine qual o quadrante
ao qual pertence o ponto, ou se está sobre um dos eixos cartesianos ou na
origem (x = y = 0). Se o ponto estiver na origem, escreva a mensagem
“Origem”. Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou “Eixo Y”,
conforme for a situação.*/

int main(){
	float x, y;
		printf(" Digite o valor X:\n");
		scanf("%f", &x);
		printf(" Digite o valor Y :\n");
		scanf("%f", &y);
	
if ( x > 0 && y > 0 ){
	printf(" Estao no quadro: Q1");
} else if(x < 0 && y > 0){
	printf(" Estao no quadro: Q2");
} else if ( x > 0 && y < 0){
	printf(" Estao no quadro: Q4");
} else if( x <0 && y < 0){
	printf(" Estao no quadro: Q3");
}
}
