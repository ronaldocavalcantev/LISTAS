# include < stdio.h >
int  principal (){
	
	int cont = 0 , n, maior = 0 , menor = 1000 , soma = 0 ;
    m�dia flutuante ;
	
    printf ( " Digite um numero: " );
	scanf ( " %d " , &n);
	
	enquanto (n > 0 ){
        
		se (n > maior)
			maior = n;
		se (n < menor)
			menor = n;

        soma += n;
        printf ( " Soma: %d " , soma);
        cont++;
        printf ( " Digite um numero: " );	
		scanf ( " %d " , &n);
	}

    m�dia = soma/cont;
	
    printf ( " Maior: %d \n " ,maior);
	printf ( " Menor: %d \n " ,menor);
    printf ( " M�dia: %.2f \n " , m�dia);
		
}
