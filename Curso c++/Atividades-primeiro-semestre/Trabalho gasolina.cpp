#include<stdio.h>
#include<iostream>
/*==================

==================*/
float consumo,gasto,gasto2,gasolina1=10,alcool1=8, consumo2;
float deslocamento=10;
float distancia=0;
float distancia2=0;
char gasolina, alcool,resultado=gasolina or alcool;
main()

{
	 printf("selecione seu combustivel: alcool ou gasolina?\n\n",alcool ,gasolina);
	 scanf("%c",&resultado);
	 if(gasolina){
	 printf("seu veiculo se desloca a %f km por litro de alcool\n\n",alcool1);
	 printf("escolha uma distancia em km \n",distancia);
	 scanf("%f",&distancia);
	 consumo=distancia/deslocamento;
	 printf("ou seja seu veiculo dentro do espaco selecionado tem um consumo de =%f L de gasolina\n\n",consumo);
	 gasto2=consumo*6.89;
	 printf("na cotacao da gasolina voce vai gastar %f reais  \n\n",gasto2);
	 } 
	 
	 if(alcool){
	 alcool=deslocamento-2;
	 printf("seu veiculo se desloca a %f km por litro de alcool\n\n",alcool1);
	 printf("escolha uma distancia em km\n",distancia2);
	 scanf("%f",&distancia2);
	 consumo2=distancia2/alcool1;
	 printf("ou seja seu veiculo dentro do espaco selecionado tem um consumo de =%f L de alcool\n\n",consumo2);
	 gasto=consumo2*5.34;
	 printf(" na cotacao do alcool voce vai gastar %f reais \n\n",gasto);
	 	
	 }
	 
	 
	
	 
	 
	 
}
