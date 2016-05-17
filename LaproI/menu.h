menu(){

    int opcao;    
    int padrao = 0;

    inicio:  //GOTO
    system("clear");

    laproi();
    printf("\n\n\n");

    printf("\t\t\t\tAulas de LAPRO I 2016.\n");
    printf("\tProgramas desenvolvidos durante as aulas de LAPRO de 2016/1\n");
    printf("\tDigite 0 para terminar\n\t Opção\tNumero\n");
    printf("\tAula1\t1\n \tAula2\t2\n \tAula3\t3\n");
    printf("\tAula4\t4\n \tAula5\t5\n \tAula6\t6\n");
    printf("\tAscii\t7\n \tConfigurações 8\n");

    printf("\t\tDigite a opção desejada: ");
    scanf("%i", &opcao);


    if ((opcao < 0) || (opcao > 8)) { /***Alterar para o numero de aulas***/

        printf("Opção Inválida");

        goto inicio;     

    }//fim if

    switch (opcao) {

    case 1:
        aula1();
        break;

    case 2:
        aula2();
        goto inicio;
        break;

    case 3:
        aula3();
        goto inicio;
        break;

    case 4:
        aula4();
        goto inicio;
        break;

    case 5:
        aula5();
        goto inicio;
        break;

    case 6:
        aula6();
        goto inicio;
        break;

    case 7:
        printf("\t\tASCII arts existentes no programa\n\n\n");
        bem_vindo();
        laproi();
        logo_formas();
        break;

    case 8:
        menuConfig();
        exit(0);

    case 0:
        system("clear");
        exit(0);

    }//fim switch

}
