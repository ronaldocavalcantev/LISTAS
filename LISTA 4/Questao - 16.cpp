# include  < stdio.h >
# include  < stdlib.h >

int  principal (){
int eu;
soma flutuante ;
int auxiliar = 1 ;
soma = 0 ;
            
enquanto (auxiliar) {
    printf ( " Digite um numero qualquer ou 0 para finalizar " );
    scanf ( " %d " , &auxiliar);
    printf ( " Usu�rio digitou %d  \n " ,auxiliar);
    soma= 0 ;
    if (auxiliar) {
        
        for (i= 1 ;i<=auxiliar;i++){
            soma += ( 1,0 /i);  // 1.0 ir� for�ar um flutuador calculado
        };
            printf ( " O resultado da s�rie � %f  \n\n " ,soma);
        }
        outra coisa {
            printf ( " entrada terminada pelo usuario \n " );
        }
    }
}
