#include<stdio.h>
#include<iostream>

    float primeiraNota[31], segundaNota[31], media[60];
	int i=1,aprovado=0,reprovado=0,exame=0;
	
	
main(){
	
	
	for(int i=1;i<=60;i++){
		printf("\nQual e a primeira nota do aluno %i\n",i);
		scanf("%f",&primeiraNota[i]);
		printf("\nQual e a segunda nota do aluno %i\n",i);
		scanf("%f",&segundaNota[i]);
		media[i]=(primeiraNota[i]+segundaNota[i])/2;
		
		if(media[i]>=5){
			aprovado+=1;
		}else{
			if(media[i]<3){
				reprovado+=1;
			}else{
				if(media[i]>=3 && media[i]<=5){
					exame+=1;
				}
			}
		}
	}

	printf("\nA quantidade de aprovados entre os 60 alunos e igual a %i\n",aprovado);
	printf("\nA quantidade de reprovados entre os 60 alunos e igual a %i\n",reprovado);
	printf("\nA quantidade de alunos de exame entre os 60  e igual a %i\n",exame);
	

}
