#include<stdio.h>
#include<iostream>

    float altura[6];
	float media=0;
	float resultado=0;
main(){
	
	
	for(int i=1;i<=5;i++){
		printf("\nQual e a altura da pessoa %i\n",i);
		scanf("%f",&altura[i]);
	}
	for(int i=1;i<=5;i++){
	media= media+altura[i];
	resultado=(media/5);
	}
	printf("A media das alturas das 5 pessoas e : %f",resultado);
}
