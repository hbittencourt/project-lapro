/*********************************************************************/
/*********************************************************************/
/**          /\  /\ ___  _ __   _ __ (_)  __ _  _   _   _          ***/
/**         / /_/ // _ \| '_ \ | '__|| | / _` || | | | / _ \       ***/
/**        / __  /|  __/| | | || |   | || (_| || |_| ||  __/       ***/
/**        \/ /_/  \___||_| |_||_|   |_| \__, | \__,_| \___|       ***/
/**                                         |_|                    ***/
/**                                                                ***/
/**                             10/04/2016                         ***/
/**        Projeto:Compilação com programas desenvolvidos em       ***/
/**                lapro I                                         ***/
/**        Autor: Henrique Bittencourt                             ***/
/**                henrique.bittencourt@acad.pucrs.br              ***/
/*********************************************************************/
/*********************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<curses.h>

#include"menu.h"
#include"ascii.h"
#include"pausa.h"
#include"aulas.h"
#include"conio.h"
#include"configuracoes.h"


main() {
    configuracoes();
    system("clear");
    printf("\n\n\n");
    
    bem_vindo();

    printf("\n\t\t");
    system("chmod +x progresso.sh");
    system("./progresso.sh");
    system("./resolucao.sh");
    printf("\n\n\n");

    menu();

}
