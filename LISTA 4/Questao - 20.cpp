# include  < stdio.h >
# inclui < math.h >
int  principal (){
    int iniciar, repetir, m, a, p, soma1;

    printf ( " ABACAXI 5,00 a unidade \n 2 MACA 1,00 a unidade \n 3 PERA 4,00 a unidade " );
    printf ( " \n Deseja iniciar compra? 1p/sim 2 p/ nao " );
    scanf ( " %d " , &iniciar);


    while ( iniciar == 1 ){
    printf ( " Quantas macas voce quer? " );
    scanf ( " %d " , &m);
    printf ( " Quantas peras voce quer? " );
    scanf ( " %d " , &p);
    printf ( " Quantos abacaxi você quer? " );
    scanf ( " %d " , &a);
    
    printf ( " \n Deseja repetir?1p/sim 2 p/ nao " );
    scanf ( " %d " , &repetir);

    if (repetir== 1 ){

     printf ( " Quantas macas voce quer? " );
    scanf ( " %d " , &m);
    printf ( " Quantas peras voce quer? " );
    scanf ( " %d " , &p);
    printf ( " Quantos abacaxi você quer? " );
    scanf ( " %d " , &a);
    
    printf ( " Desejo repetir?1p/sim 2 p/ nao " );
    scanf ( " %d " , &repetir);}
    
    if (repetir== 2 ){
        soma1= 1 *m + 5 *a+ 4 *p;
        printf ( " o valor e %d \n " , soma1); pausa ;}
    
    }

}
