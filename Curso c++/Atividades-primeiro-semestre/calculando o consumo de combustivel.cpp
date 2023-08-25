#include<stdio.h>
#include<iostream>


float gasolina=10,distancia,consumo,gasto;
float alcool=8,distancia1,consumo1,gasto1;


main(){;
	printf("a gasolina gera um rendimento de %f km por litro\n\n",gasolina );
	printf("insira seu trajeto em km :\n\n",distancia);
	scanf("%f",&distancia);	
	consumo=distancia/gasolina;
	printf("sendo assim o seu veiculo tem um consumo de %f L no espaco selecionado\n\n");
	gasto=6.79*consumo;
	printf("seu carro tera um gasto de %f reais nesse trajeto\n\n\n\n",gasto);
	printf("o alcool gera um rendimento de %f km por litro\n\n",alcool );
	printf("insira seu trajeto em km :\n\n",distancia1);
	scanf("%f",&distancia1);	
	consumo1=distancia1/alcool;
	printf("sendo assim o seu veiculo tem um consumo de %f L no espaco selecionado\n\n",consumo1);
	gasto1=4.89*consumo1;
	printf("seu carro tera um gasto de %f reais nesse trajeto",gasto1);

}
