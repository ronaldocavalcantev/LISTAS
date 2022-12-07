# include  < stdio.h >

int  principal (){

int num, a = 0 ;

mídia flutuante = 0 ;

printf ( " Digite 10 numeros inteiros positivos: " );

for ( int i = 1 ; i <= 10 ; i++){

printf ( " \n %d - " , i);

scanf ( " %d " , &num);

enquanto (num<= 0 ){

printf ( " Número não positivo. \n %d  " ,i);

scanf ( " %d " , &num);

}

a = a+num;

}

média = a/ 10 ;

printf ( " \n media dos numeros %.2f " , media);

retorna  0 ;

}
