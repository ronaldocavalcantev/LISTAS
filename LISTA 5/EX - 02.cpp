# include < stdio.h >
# inclui < string.h >

int  principal () {
    char cor[ 7 ];
    char branco[] = " branco " , verde[] = " verde " , amarelo[] = " amarelo " ;

    printf ( " (Digite branco, verde ou amarelo) \n " );
    printf ( " Digite uma cor: " );
    scanf ( " %s " ,cor);

    if ( strcmp (cor,branco) == 0 ){
        printf ( " S�o iguais " );
        retorna  0 ;
    }
    else  if ( strcmp (cor,verde) == 0 ) {
        printf ( " S�o iguais " );
        retorna  0 ;
    }
    else  if ( strcmp (cor, amarelo) == 0 ) {
        printf ( " S�o iguais " );
        retorna  0 ;
    }
    outra coisa {
        printf ( " N�o s�o iguais " );
        retorna  0 ;
    }
}
