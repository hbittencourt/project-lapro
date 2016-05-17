
/*========================================================================================*/
/******************************           Aula 1            *******************************/
/*========================================================================================*/

aula1() {


    system("clear");
    printf("\t\t\t    Aula 1\n");
    printf("\t\t\tSomar 2 números\n");

    int numero1=0;
    int numero2=0;
    int soma=0;

    printf("informe o valor de a:");
    scanf("%i", &numero1);

    printf("informe o valor de b:");
    scanf("%i", &numero2);

    soma = numero1 + numero2;

    printf(" %i \n", soma);

    pausa();


}

/*========================================================================================*/
/******************************           Aula 2            *******************************/
/*========================================================================================*/


aula2() {

    system("clear");
    printf("\t\t\t   Aula 2\n");
    printf("\t\t\tPar ou Ímpar?\n");


    int n, r;
    n=r=0;

    r = scanf("%d", &n);
    printf("R= %d \n", r);

    if ( r != 1) {

        printf("entrada inválida!!!");
        return 1;
    }


    if ( n % 2 == 0 ) {
        printf( "É PAR!!!\n" );
    }
    else {
        printf( "É IMPAR!!!\n" );
    }

    printf("\n");

    pausa();


}

/*========================================================================================*/
/******************************           Aula 3            *******************************/
/*========================================================================================*/

aula3() {

    system("clear");

    printf("\t\t\t   Aula 3\n");
    printf("\t\t\tDia da semana\n");


    int dia;
    dia=0;

    printf("Digite o dia da semana como um inteiro: ");
    scanf("%i", &dia);

    if( dia == 1) {
        printf("DOMINGO");
    } else if( dia == 2) {
        printf("Segunda");
    } else if( dia == 3) {
        printf("TERÇA");
    } else if( dia == 4) {
        printf("QUARTA");
    } else if( dia == 5) {
        printf("QUINTA");
    } else if( dia == 6) {
        printf("SEXTA");
    } else if( dia == 7) {
        printf("SABADO");
    } else {
        printf("ENTRADA INVÁLIDA");
    }

    printf("\n");

    pausa();


}

/*========================================================================================*/
/******************************           Aula 4            *******************************/
/*========================================================================================*/

aula4() {
    system("clear");
    int anoNascimento, anoHoje, idade; // cria as variáveis para cálculo e armazenamento da idade
    int frequenciamaxima, freq50, freq85; // cria as variáveis para armazenar as frequencias cardiacas

    anoNascimento=anoHoje=idade=0;
    frequenciamaxima=freq50=freq85=0;

    printf("\t\t\t  Aula numero 4\n");
    printf("\t\t\tCalculadora Cardiaca\n\n\n");

    //Recebe o ano de nascimento e o ano atual
    printf("Digite seu ano de nascimento no formato aaaa: ");
    scanf("%i", &anoNascimento);
    printf("Digite o ano atual: ");
    scanf("%i", &anoHoje);

    //Calcula e armazena a idade
    idade = anoHoje - anoNascimento;

    //Calcula as frequencias
    frequenciamaxima = 220 - idade;
    freq50 = frequenciamaxima*(0.5);
    freq85 = frequenciamaxima*(0.85);

    //Exibe os resultados na tela
    printf("Você tem %i anos, sua frequencia cardiaca máxima é %i ", idade, frequenciamaxima);
    printf(" e sua frequencia cardiaca normal deve estar entre %i e %i \n", freq50, freq85);

    printf("\n\n\n\n");

    pausa();

}

/*========================================================================================*/
/******************************           Aula 5            *******************************/
/*========================================================================================*/

aula5() {
    system("clear");

    /* o código desta função foi desenvolvido por kin gusmão */

    int nh;
    float sph, sal, x, vhe;

    nh=sph=sal=x=vhe=0; //Modificado

    nh = 0;

    printf ("\nDigite o número de horas trabalhadas (-1 para finalizar): ");
    scanf ("%d", &nh);

    while (nh != -1)
    {
        printf ("Digite o salário por hora do funcionário: ");
        scanf ("%f", &sph);
        if (nh <= 40)
        {
            sal = nh*sph;
        }
        else
        {
            x = 40*sph;
            vhe = (nh-40)*sph*1.5;
            sal = x+vhe;
        }

        printf ("O salário é de R$ %.2f\n\n", sal);

        printf ("\nDigite o número de horas trabalhadas (-1 para finalizar): ");
        scanf ("%d", &nh);

    }
    pausa();

}

/*========================================================================================*/
/******************************           Aula 6            *******************************/
/*========================================================================================*/

aula6() {
    system("clear");
    logo_formas();
    printf("\t\t\t  Aula numero 6\n");
    printf("\t\t\tFormas Geométricas\n\n\n");

    int menu;
    printf("\t\t Opções:\n \t 1- Quadrado\n \t 2- Retângulo\n\t 3- Sair\n");
    printf("Digite a opção desejada: ");
    scanf("%i", &menu);


    if ((menu>2) || (menu<1)) {
        printf("Opção Inválida!!!");
        return 1;
    }

    switch(menu) {
    case 1:
        printf("QUADRADO\n");
        quadrado();
        break;
    case 2:
        printf("RETÂNGULO\n");
        retangulo();
        break;

    }//fim switch


    pausa();


}




/*========================================================================================*/
/******************************Rotinas Formas Geométricas**********************************/
/******************************          Aula 6          **********************************/
/*========================================================================================*/


/***Rotina_Quadrado***/
quadrado() {
    int lado, b, e, l;

    lado=b=e=l=0;

    printf("Digite o tamanho do lado do quadrado: ");
    scanf("%i", &lado);
    l=lado;

    /****Topo****/
    printf("\t\t\t+");
    for(b=1; b <= lado; b++) {
        printf("_");
    }//for
    printf("+\n");
    e=0;

    /****Meio****/
    while(e<(l-1)) {
        printf("\t\t\t|");
        for(b=1; b <= lado; b++) {
            printf(" ");
        }//for
        printf("|\n");
        e++;
    }//while

    /****Base****/
    printf("\t\t\t+");
    for(b=1; b <= lado; b++) {
        printf("_");
    }//for
    printf("+\n\n");
}//quadrado


/***Rotina_Retângulo***/
retangulo() {
    int b, h, i;

    i=h=b=0;

    printf("Digite o tamanho da base e da altura separadas por um espaço: ");
    scanf("%d%d", &b, &h);
    h=h-1;

    /****Topo****/
    printf("\t\t\t+");
    for(i=1; i <= b; i++) {
        printf("_");
    }//for
    printf("+\n");

    /****Meio****/
    while(h>0) {
        printf("\t\t\t|");
        for(i=1; i<= b; i++) {
            printf(" ");
        }//for
        printf("|\n");
        h= h-1;
    }//while

    /****Base****/
    printf("\t\t\t+");
    for(i=1; i <= b; i++) {
        printf("_");
    }//for
    printf("+\n\n");
}//retangulo

