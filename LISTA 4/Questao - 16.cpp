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
    printf ( " Usuário digitou %d  \n " ,auxiliar);
    soma= 0 ;
    if (auxiliar) {
        
        for (i= 1 ;i<=auxiliar;i++){
            soma += ( 1,0 /i);  // 1.0 irá forçar um flutuador calculado
        };
            printf ( " O resultado da série é %f  \n\n " ,soma);
        }
        outra coisa {
            printf ( " entrada terminada pelo usuario \n " );
        }
    }
}
