#include<stdio.h>
#include<iostream>

    float primeiraNota[12], segundaNota[12], media[12], mediaGeral=0;
	int i=1,aprovado=0,reprovado=0,exame=0;
	
	
main(){
	
	
	for(int i=1;i<=10;i++){
		printf("\nQual e a primeira nota do aluno %i\n",i);
		scanf("%f",&primeiraNota[i]);
		printf("\nQual e a segunda nota do aluno %i\n",i);
		scanf("%f",&segundaNota[i]);
		media[i]=(primeiraNota[i]+segundaNota[i])/2;
		mediaGeral+=(media[i]/10);
		if(media[i]>=5){
			aprovado+=1;
		}else{
			if(media[i]<3){
				reprovado+=1;
			}else{
				if(media[1]>=3 && media[i]<=5){
					exame+=1;
				}
			}
		}
	}
	for(int i=1;i<=10;i++){
	printf("A media do aluno %i e %f\n",i,media[i]);
	}
	printf("\nA media geral da sala e %f",mediaGeral);
}
