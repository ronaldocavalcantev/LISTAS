# include < stdio.h >
int  principal ()
{
 int numero, guarda_maior, guarda_menor;
 int eu;

 printf ( " Entre com o primeiro numero inteiro: " );
 scanf ( " %i " , &numero);

guarda_maior=n�mero;
guarda_menor=n�mero;

 para (i= 1 ; i< 10 ; i++)
{
 printf ( " \n Entre com o %d o numero inteiro: " ,i+ 1 );
 scanf ( " %i " , &numero);

 if (n�mero>guarda_maior)
guarda_maior=n�mero;
 sen�o
 if (n�mero<guarda_menor)
guarda_menor=n�mero;
}


 printf ( " \n O menor numero entrado e: %d " , guarda_menor);
 printf ( " \n O maior numero entrado e: %d " , guarda_maior);

}
