# include < stdio.h >
# inclui < string.h >

int  principal () {
    char nome[ 50 ], email[ 30 ], endereco[ 35 ], reserva_nome[ 50 ], reserva_email[ 30 ], reserva_endereco[ 35 ];

    printf ( " Digite seu nome completo: " );
    obtém (nome);
    printf ( " Digite seu e-mail: " );
    recebe (e-mail);
    printf ( " Digite seu endereco: " );
    fica (endereco);

    strcpy (reserva_nome, nome);
    strcpy (reserva_email, e-mail);
    strcpy (reserva_endereco, endereco);

    printf ( " Dados que tiveram backup \n " );
    printf ( " Nome: %s \n " ,reserva_nome);
    printf ( " Email: %s \n " ,reserva_email);
    printf ( " Endereco: %s \n " ,reserva_endereco);
}
