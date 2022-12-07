#include <stdio.h>
/*Faça um programa que mostre uma contagem regressiva na tela, iniciando em 10 e
terminando em 0. Mostre uma mensagem “FIM!” após a contagem.*/

int main(){
	int i = 10;
		while(i >=0){
			printf("%d ", i);
			i--;
		}
		printf("FIM");
}
