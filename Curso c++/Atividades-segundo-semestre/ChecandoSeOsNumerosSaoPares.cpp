#include<stdio.h>
#include<iostream>

    int numeros[35];
	int contador=0,contador2=0;
	
main(){
	
	
	for(int i=1;i<=30;i++){
	printf("\nDigite o %i numero\n",i);
	scanf("%i",&numeros[i]);
	if(numeros[i]%2==0){
		contador+=1;
	}else{
		contador2+=1;
	}
	}
	printf("\nA quantidade de numeros pares entre os 30 digitados sao %i\n",contador);
	printf("\nA quantidade de numeros impares entre os 30 digitados sao %i\n",contador2);
}
