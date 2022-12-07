#include<stdio.h>
#include<stdlib.h>

/*Leia 2 valores A e B, que correspondem a 2 notas de um aluno. A seguir, calcule a
média do aluno, sabendo que a nota A tem peso 3.5 e a nota B tem peso 7.5 (A soma
dos pesos portanto é 11). Assuma que cada nota pode ir de 0 até 10.0.*/

int main(){
	float notaA = 3.5;
	float notaB = 7.5, resultado;
		printf(" Digite a nota A: \n", notaA);
		scanf("%f", &notaA);
			printf(" Digite a nota B: \n", notaB);
			scanf("%f", &notaB);
/*Calculo*/
resultado = notaA + notaB;
	
	if (resultado > 10)
	{
	printf(" Sua media e: 10");
	}
	else {
	printf(" Sua media e: %0.f.\n", resultado);
	}
}
