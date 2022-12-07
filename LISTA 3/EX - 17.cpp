# include < stdio.h >

int  principal () {
    int num;

    printf ( " Digite um valor: " );
    scanf ( " %d " , &num);

    if (num % 3 || num % 5 ) {
        printf ( " %d e divisível por 3 ou 5 " , num);
        retorna  0 ;
    }
    outra coisa {
        printf ( " Não é divisível " );
        retorna  0 ;
    }
}
