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

/*****Configurações do Programa*****/
/*Cores:
	Preto = 0
	Vermelho =  1
	Verde = 2
	Amarelo = 3
	Azul = 4
	Magenta = 5
	Cyan = 6
	Branco = 7

	Verdadeiro 1
	Falso 0

	Bold, Sublinhado e pisca devem ser verdadeiras ou falsas.
		
	
	*/
configuracoes(){

FILE *config;
config = fopen("configuracoes.txt", "rw");

if (config == NULL){
printf("ERRO!!! Arquivo configuracoes.txt está faltando ou está corrompido");
exit(0);
}

/****Carrega as configurações do arquivo ****/
int corfundo;
int corfonte;
int bold, sublinhado, pisca;

fscanf(config, "%d%d%d%d%d", &corfundo, &corfonte, &bold, &sublinhado, &pisca);

setbgrcolor(corfundo);
setfontcolor(corfonte);
setfontbold(bold);
setunderline(sublinhado);
setblink(pisca);

fclose(config);

system("clear");

}

menuConfig(){

		int opcao;

	iniExibecores: //GOTO IF Verificação de erro

		printf("CONFIGURAÇÕES DO SISTEMA\n");
		printf("Deseja exibir código das cores? (1 sim 0 não)  ");
		scanf("%d", &opcao);


		if(opcao == 1){
		printf("\n\tPreto = 0\n");
		printf("\n\tVermelho =  1\n");
		printf("\n\tVerde = 2\n");
		printf("\n\tAmarelo = 3\n");
		printf("\n\tAzul = 4\n");
		printf("\n\tMagenta = 5\n");
		printf("\n\tCyan = 6\n");
		printf("\n\tBranco = 7\n\n\n\n\n");
		}
		
		printf("\tConfigurações Atuais:\n");
	
		int corfundo;
		int corfonte;
		int bold, sublinhado, pisca;

		FILE *config;
		config = fopen("configuracoes.txt", "rw");

		if (config == NULL){
		printf("ERRO!!! Arquivo configuracoes.txt está faltando ou está corrompido");
		exit(0);
		}
		fscanf(config, "%d%d%d%d%d", &corfundo, &corfonte, &bold, &sublinhado, &pisca);

		printf("\t1- Cor de Fundo: %d\n", corfundo);
		printf("\t2- Cor da Fonte: %d\n", corfonte);
		printf("\t3- Bold: %d\n", bold);
		printf("\t4- Sublinhado: %d\n", sublinhado);
		printf("\t5- Piscando: %d\n", pisca);
		
		printf("\t\tDeseja alterar algum valor: (1 sim 0 não) ");
		scanf("%d", &opcao);

		if(opcao != 0 || opcao!= 1){
			printf("Opção inválida");
			goto iniExibecores;
		}

		if(opcao == 1){

			iniAlterar:

			printf("Qual opção você gostaria de alterar? ");
			int alterar;
			scanf("%d", &alterar);
			
			if (alterar >5 && alterar <1){
				printf("opção inválida!");
				goto iniAlterar;
			}
			
			
					
		}
		

		
	
		
}

