#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*Faça um programa que leia o salário de um trabalhador e o valor da prestação de um
empréstimo. Se a prestação, for maior que 20% do salário, imprima: “Empréstimo não
concedido.”, caso contrário, imprima: “Empréstimo concedido.”*/

int main(){
	float emprestimo, salario, porcentagem;
		printf(" Digite seu salario.\n");
		scanf("%f", &salario);
		printf(" Digite o valor da sua prestacao.\n");
		scanf("%f", &emprestimo);
		
porcentagem = (20 * salario) / 100;

if( emprestimo <= porcentagem)
{
	printf(" Emprestimo concedido.\n");
}
else if (emprestimo > porcentagem){
printf(" Emprestimo negado.\n");
}
system("pause");
}

