# include < stdio.h >
# inclui < string.h >
# include < stdlib.h >
    int  principal (){
        char nome1[ 10 ],cpf[ 14 ],nome2[ 10 ], senha[ 34 ];
        

        printf ( " Digite o primeiro nome: " );
        scanf ( " %s " , &nome1);
        printf ( " Digite o sobrenome: " );
        scanf ( " %s " , &nome2);
        printf ( " Digite seu CPF: " );
        scanf ( " %s " , &cpf);

        strcpy (senha,nome1);
        strncat (senha, nome1, 1 );
        strncat (senha, cpf, 3 );
       
        printf ( " Sua senha e: %s " , senha);



    }
