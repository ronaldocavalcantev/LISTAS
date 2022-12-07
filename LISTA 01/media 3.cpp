#include<stdio.h>
#include<stdlib.h>

/*Construa um algoritmo que calcule a média aritmética de 3 números quaisquer
fornecidos pelo usuário.*/

int main(){
	int nota1, nota2, nota3, resultado;
		printf("Digite a sua primeira nota: \n", nota1);
		scanf("%d", &nota1);
			printf("Digite a sua segunda nota: \n", nota2);
			scanf("%d", &nota2);
				printf("Digite a sua terceira nota: \n", nota3);
				scanf("%d", &nota3);
	/*Calculo*/
resultado = (nota1 + nota2 + nota3) / 3;
		
		printf("Sua media e: %d.\n", resultado);
	
	
	
	
	
	
}
