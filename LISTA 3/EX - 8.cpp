#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>

int main(){
    /*
    Fa�a um programa em que o
    usu�rio entre com o valor e o estado de destino do produto e o programa retorne o pre�o
    final do produto acrescido do imposto do estado em que ele ser� vendido. Se o estado
    digitado n�o for v�lido, mostrar� uma mensagem de erro.*/
    
    setlocale(LC_ALL, "Portuguese");

        float produto, imposto, total;
        char estado[3];
        char minas_gerais[3] = ("mg");
        char sao_paulo[3] = ("sp");
        char rio_de_janeiro[3] = ("rj");
        char mato_grosso_do_sul[3] = ("ms");

        printf("Informe o valor do produto : R$");
        scanf("%f", &produto);
        printf("Informe o estado de destino (MG, SP, RJ ou MS): ");
        scanf ("%s", estado);

        if(strcmp(estado,minas_gerais) == 0)
        {
            imposto = (produto * 7) / 100;
        }
        else if(strcmp(estado, sao_paulo) == 0)
        {
            imposto = (produto * 12) / 100;
        }
        else if(strcmp(estado, rio_de_janeiro) == 0)
        {
            imposto = (produto * 15) / 100;
        }
        else if(strcmp(estado, mato_grosso_do_sul) == 0)
        {
            imposto = (produto * 8) / 100;
        }
        else
        {
            printf("Estado n�o registrado no sistema");
            return 0;
        }

        total = produto + imposto;
        printf("O pre�o final do produto � : R$%.2f", total);
}
