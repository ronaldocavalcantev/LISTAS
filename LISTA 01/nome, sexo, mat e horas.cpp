#include<stdio.h>
#include<stdlib.h>

/*Escreva um programa que leia o nome do funcionário, o sexo (F ou M), o número de
matrícula do funcionário, o número de horas trabalhadas, o valor que recebe por hora*/

int main(){
	char nome, sexo;
	float matricula, horas = 5.50, resultado;
		
		printf(" Digite seu nome e sexo:\n", nome);
		scanf("%s%s", &nome, &sexo);
			printf("Digite sua matricula e o numero de horas trabalhadas:\n");
			scanf("%f%f", &matricula, &horas);
/*Calculo*/
resultado =(5.50 * horas);
	printf(" O valor a receber por hora e: %.2f.\n", resultado);	

}
