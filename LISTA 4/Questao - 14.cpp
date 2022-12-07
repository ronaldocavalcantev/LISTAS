# include < stdio.h >
int  principal (){
	
	int cont = 0 , n, maior = 0 , menor = 1000 , soma = 0 ;
    mídia flutuante ;
	
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

    média = soma/cont;
	
    printf ( " Maior: %d \n " ,maior);
	printf ( " Menor: %d \n " ,menor);
    printf ( " Mídia: %.2f \n " , mídia);
		
}
