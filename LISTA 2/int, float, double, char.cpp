#include<stdio.h>
#include<stdlib.h>
/*Faça um algoritmo que leia um numero inteiro, dois números reais (um float e um
double), um caracter (uma única letra), uma string (conjunto de caracteres) e um
booleano. Na sequência, imprima todos com a formatação abaixo.
Numero inteiro: “valor”
Numeros reais:
“valor”
“valor”
Letra: “valor”
String: “valor”
Logico: “valo*/
int main(){
	int numero;
	int logico;
	float valor;
	float fracao;
	char letra;
	char nome;
		printf(" Digite um numero positivo:\n");
		scanf("%d", &numero);
			printf("Digite um valor negativo:\n");
			scanf("%f", &valor);
				printf(" Digite a primeira letra do seu nome:\n");
				scanf("%s", &letra);
				printf(" Digite seu sobrenome:\n");
				scanf("%s", &nome);
					printf(" Digite um valor acima de 0:\n");
					scanf("%d", &logico);
	printf("Numero inteiro e: %d.\n",numero);
	printf("Numero reais e: %.2f.\n", valor);
	printf("Letra e: %s.\n", letra);
	printf("string e: %s.\n", nome);
	printf("logico e: %d.\n", logico);
}
