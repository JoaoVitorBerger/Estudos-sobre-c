#include<stdio.h>
#include<iostream>

float mi, cm, m, km;

main()
{
    printf("insira uma distancia em km\n\n", km);
    scanf("%f", &km);
    mi = km / 1.6; printf(" Isso em milhas equivale a %f milhas\n\n",mi);
    m = km * 1000; printf(" A distancia selecionada em m e igual a %f metros\n\n",km);
    cm = km * 100000; printf(" A distancia seleciona em cm e igual a %f centimetros\n\n", cm);
    
 }

    
    

