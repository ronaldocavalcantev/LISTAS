# include < stdio.h >
int  principal (){

 int n, i, resultado = 0 ;
 
 scanf ( " %d " , &n);
 
 for (i = 1 ; i <= n; i++) {
    if (n % i == 0 ) {
       resultado++;
    }
}
 
 if (resultado == 2 )
    printf ( " %d - primo \n " , n);
 sen�o
    printf ( " %d - nao primo \n " ,n);
 

}
