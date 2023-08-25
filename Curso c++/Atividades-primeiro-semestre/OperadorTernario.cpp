#include<stdio.h>
#include<iostream>


main(){
	
	float num1,num2,res;
	char op,n,s;
	int loop=1;
	
	
	while(loop==1){
	
	printf("Insira um numero\n",num1);
	scanf("%f",&num1);
	printf("Insira sua outo numero\n",num2);
	scanf("%f",&num2);
	
	printf("Selecione a operacao\n *\n -\n +\n / \n Para sair tecle s\n\n\n",op);
	scanf("%s",&op);
		switch(op){
		
		
		case '*':
		res=num1*num2;
			printf("O resultado da sua multiplicacao e %f\n",res);
				break;		
		case '-':
		res=num1-num2;
			printf("O resultado da sua subtracao e %f\n",res);
				break;
		case '+':
		res=num1+num2;
			printf("O resultado da sua soma e %f\n",res);	
				break;
		case '/':
		res=num1/num2;
			printf("O resultado da sua divisao e %f\n",res);
				break;
		case 's':
			printf("Obrigado por usar meu programa");
			break;
		
	
	
	
	
	
				}
				}
	

