#include<stdio.h>
#include<stdlib.h>

/*Fazer um algoritmo para auxiliar um construtor a descobrir a quantidade de rolos e a
quantidade de metros avulsos de fios que ele precisa adquirir. Sabe-se que o
construtor tem a quantidade total de fios em metros a serem utilizados na instalação
elétrica da obra e que cada rolo de fio tem 50 metros.*/

int main(){
	int qrolos, qma, metros, rolos = 50;
		printf("digite a quantidade de metros para sua obra: \n ");
		scanf("%i", &metros);
		
qrolos = (metros / rolos);
qma = ( metros % rolos);
	printf(" A quantide de rolos e: %i.\n", qrolos);

	printf(" A quantiade de metros e: %i. \n", qma);
	
	
}
