#include<stdio.h>

/*Leia 4 valores inteiros A, B, C e D. A seguir, se B for maior do que C e se D for maior
do que A, e a soma de C com D for maior que a soma de A e B e se C e D, ambos, forem
positivos e se a vari�vel A for par escrever a mensagem "Valores aceitos", sen�o
escrever "Valores nao aceitos"*/

int main(){
	int a,b,c,d;

    printf("Informe o valor de A : ");
    scanf("%d", &a);
    printf("Informe o valor de B : ");
    scanf("%d", &b);
    printf("Informe o valor de C : ");
    scanf("%d", &c);
    printf("Informe o valor de D : ");
    scanf("%d", &d);

    if(b>c && d>a && c+d>a+b && c >0 && d>0 && a%2==0)
    {
        printf("Valores aceitos");
    }
    else
    {
        printf("Valores nao aceitos");
    }

}
			

