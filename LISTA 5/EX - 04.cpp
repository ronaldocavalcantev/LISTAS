# include < stdio.h >
# inclui < string.h >
    int  principal (){
        char nome1[ 30 ], nome2[ 10 ],nome3[ 10 ];
        inttotal ;
        
        printf ( " Digite o primeiro nome: " );
        scanf ( " %s " , nome1);
        printf ( " Digite o segundo nome: " );
        scanf ( " %s " , nome2);
        printf ( " Digite o ultimo nome " );
        scanf ( " %s " , nome3);

        strcat (nome1, nome2);
        strcat (nome1, nome3);

        printf ( " o nome completo e : %s  " ,nome1);

        


    }
