#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*Fa�a um programa que leia o sal�rio de um trabalhador e o valor da presta��o de um
empr�stimo. Se a presta��o, for maior que 20% do sal�rio, imprima: �Empr�stimo n�o
concedido.�, caso contr�rio, imprima: �Empr�stimo concedido.�*/

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

