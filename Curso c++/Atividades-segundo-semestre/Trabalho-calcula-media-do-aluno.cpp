#include<stdio.h>
#include<iostream>
#include<string.h>
	

main(){


	int nralunos=0;
	printf("Insira a quantidade de alunos\n\n\n",nralunos);
	scanf("%i",&nralunos);
	char nome[nralunos][20], nconsulta[20];
	float p1[nralunos],p2[nralunos],trab1[nralunos],trab2[nralunos],pi[nralunos],media[nralunos],mediaGeral[nralunos],mediaSala;
	int i, opcao; 
	do{
	
	
	printf("\n\n\n1-Para cadastrar alunos\n\n2-Lancar notas\n\n3-Consultar boletim de um aluno especifico\n\n4-Consultar boletim de todos os alunos\n\n5-Calcular media geral\n\n6-Sair\n\n");
		scanf("%i",&opcao);
			system("cls");
	
	if(opcao==1){//Area de cadastro dos nomes dos alunos
	
		for(i=1;i<=nralunos;i++){	
			printf("Digite o nome do aluno %d\n",i);
				scanf("%s",& nome[i]);
					system("cls");
								}	
}else{
	if(opcao==2){//Area de cadastro das notas dos respectivos alunos
	
		
		for(i=1;i<=nralunos;i++){
		printf("Digite a nota p1 do aluno%i\n",i);
			scanf("%f",&p1[i]);
				printf("Digite a nota da p2 do aluno%i\n ",i);
					scanf("%f",&p2[i]);
						printf("Digite a nota do trab1 do aluno%i\n ",i);
							scanf("%f",&trab1[i]);
								printf("Digite a nota do trab2 do aluno%i\n ",i);
									scanf("%f",&trab2[i]);
										printf("Digite a nota da PI do aluno%i\n ",i);
											scanf("%f",&pi[i]);
												system("cls");
													media[i]=(p1[i]*.1) + (p2[i]*.1) + (trab1[i]*.15) + (trab2[i]*.15) + (pi[i]*.5 );
								}							
	
				}
	}
	if(opcao==3){//Dentro desta opção sera exibido a lista de alunos cadastrados e qual aluno ele deseja ver a nota
		         printf("=========ALUNOS CADASTRADOS==========\n\n");
			for(i=1;i<=nralunos;i++){
				printf("%i -%s\n\n",i,nome[i]);
								}for(i=1;i<=nralunos;i++){
									printf("Digite o nome da pessoa que voce quer saber a nota\n\n",nconsulta);  
										scanf("%s",&nconsulta);
											if(  strcmp(nconsulta , nome[i])==0){
												printf(" As notas de %s sao\n",nconsulta);
														printf("\n===============================================================\n");
															printf("PROVA1 | |PROVA2| |TRAB1| |TRAB2| |PROVA INTEGRADA| |MEDIA|\n\n");
																printf("  %.2f | |  %.2f| | %.2f| | %.2f| |     %.2f      | | %.2f|\n\n",p1[i],p2[i],trab1[i],trab2[i],pi[i],media[i]);
																	printf("\n===============================================================\n");
									       										}else{
																						printf("Insira um nome valido\n");
																					}
		
														}		
}else{

		if(opcao==4){//Aqui e onde sera exibido a nota geral dos alunos
			printf("\n\n==========================MEDIA GERAL DOS ALUNOS================================\n\n");
			for(i=1;i<=nralunos;i++){
				printf("As notas de %s\n\n",nome[i]);
					printf("\n===============================================================\n");
						printf("PROVA1 | |PROVA2| |TRAB1| |TRAB2| |PROVA INTEGRADA| |MEDIA|\n\n");
							printf("  %.2f | |  %.2f| | %.2f| | %.2f| |     %.2f      | | %.2f|\n\n",p1[i],p2[i],trab1[i],trab2[i],pi[i],media[i]);
								printf("\n===============================================================\n");
				
									}
					}
		
}      if(opcao==5){//Área destinada a media geral da sala
					float soma=0;
					for(i=1;i<=nralunos;i++){
						soma+=media[i];	
					}
					mediaSala=soma/nralunos;
					printf("A Media Geral da sala e %.2f",mediaSala);
		}
		
	
	
}while(opcao!=6);
printf("\nObrigado por usar");
	
		
		
	}	
				
	
	
	
	
	

