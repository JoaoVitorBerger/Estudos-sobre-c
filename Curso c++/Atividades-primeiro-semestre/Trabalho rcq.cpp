#include<stdio.h>
#include<iostream>



main(){
	int idade;
	float cintura, quadril, conta;
	int masculino=1;
	int feminino=2;
	int sexo;
	
	
	printf("Indique seu sexo, 1 para masculino e 2 para feminino\n\n",masculino && feminino);
	scanf("%i",&sexo);
	printf("Indique sua idade\n\n",idade);
	scanf("%i",&idade);
	printf("Indique a circunferencia da sua cintura\n\n",cintura);
	scanf("%f",&cintura);
	printf("Insira a circunferencia do seu quadril\n\n",quadril);
	scanf("%f",&quadril);
	conta=cintura/quadril;
	printf("Seu rcq e de %f\n\n",conta);
	
	if((idade>0 && idade<=29) && (sexo==1) && (conta<=.83)){
		printf("Seu rcq esta normal");
		}else{
			if(conta>.83 && conta<=.88){
			printf("Seu rcq esta moderado");
										}else{
											if(conta>=.89 && conta<=.94){
												printf(" Seu rcq esta alto");
																		}else{
																			if (conta>94){
																				printf("Seu rcq esta muito alto");
																						}
																			}
											
											
											}
			
			}
	
	
	

}
