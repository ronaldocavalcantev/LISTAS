# include < stdio.h >

int  principal () {
    int num;

    printf ( " Digite um numero: " );
    scanf ( " %d " , &num);

    printf ( " Seus divisores sao: \n " );

    for ( int i = 1 ; i < num; i++){
        if (num % i == 0 ){
            printf ( " %d \n " ,i);
        }
    }
    retorna  0 ;
}
