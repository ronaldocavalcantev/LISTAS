# include  < stdio.h >
# include  < stdlib.h >
# inclui  < math.h >
 
int  principal ( int argc, char ** argv)
{
 flutuante a, b, c, x1, x2, delta;
 
 printf ( " Digite o primeiro valor: " );
 scanf ( " %f " , &a);
 sistema ( " cls " );
 printf ( " Digite o segundo valor: " );
 scanf ( " %f " , &b);
 sistema ( " cls " );
 printf ( " Digite o terceiro valor: " );
 scanf ( " %f " , &c);
 sistema ( " cls " );
 

delta = b*b - 4 *a*c;
x1 = (-b + sqrt (delta)) / ( 2 *a);
x2 = (-b - sqrt (delta)) / ( 2 *a);
 

 if (delta < 0 ) {
    printf ( " Não existe raiz \n " );
}
    senão  se (delta = 0 ) {
        printf ( " Raiz unica " );
    }
        outra coisa {
            printf ( " O valor de x1: %.2f n " , x1);
            printf ( " O valor de x2: %.2f n " , x2);
        }
}
