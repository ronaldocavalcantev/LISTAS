# include < stdio.h >

int  principal () {
    int num;

    printf ( " Digite um valor: " );
    scanf ( " %d " , &num);

    if (num % 3 || num % 5 ) {
        printf ( " %d e divis�vel por 3 ou 5 " , num);
        retorna  0 ;
    }
    outra coisa {
        printf ( " N�o � divis�vel " );
        retorna  0 ;
    }
}
