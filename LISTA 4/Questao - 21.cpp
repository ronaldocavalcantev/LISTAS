# include  < stdlib.h >
# include  < stdio.h >
# inclui  < string.h >

principal () {
    float %Feminina;
    int idade, maiorIdade, contPorcentagem, cont;
    char sexo[ 40 ], corOlhos[ 40 ], corCabelos[ 40 ];

    porcentagem = 0 ;
    maiorIdade = 0 ;
    cont = 0 ;

    fazer {
        cont++;
        printf ( " Informe o sexo: \n " );
        scanf ( " %s " , &sexo);
        printf ( " Informe a cor dos olhos: \n " );
        scanf ( " %s " , &corOlhos);
        printf ( " Informe a cor dos cabelos: \n " );
        scanf ( " %s " , &corCabelos);
        printf ( " Informe a idade: \n " );
        scanf ( " %d " , &idade);
        if (( strcmp (sexo, " feminino " ) == 0 ) && ((idade >= 18 ) && (idade <= 35 )) && ( strcmp (corOlhos, " verdes " ) == 0 ) && ( strcmp (corCabelos , " louros " ) == 0 )) {
            contPorcentagem++;
        }
        if (idade > maiorIdade) {
            maiorIdade = idade;
        }
    }
    while (idade != - 1 );
    printf ( " Maior idade: %d \n " , maiorIdade);
    porcentagemFeminina = ( 100 * contPorcentagem)/cont;
    printf ( " Porcentagem feminina com olhos verdes, cabelos louros que est�o entre 18 e 35 anos: %.2f \n " , porcentagemFeminina);
