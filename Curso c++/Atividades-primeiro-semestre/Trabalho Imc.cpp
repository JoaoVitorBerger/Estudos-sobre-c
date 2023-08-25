#include<stdio.h>
#include<iostream>
    main(){
        
        float imc;
		float peso;
		float altura;
        
        
        printf("Indique sua altura\n\n",altura);
        scanf("%f",&altura);
        printf("Indique seu peso\n\n",peso);
        scanf("%f",&peso);
        imc=peso/(altura*altura);
        printf("Seu imc e de %f\n\n",imc);

        if(imc<=18.5){
            printf("Peso baixo");
                    }else{
                     if(imc>18.5 && imc<24.9){
                         printf("Peso normal");
                                            }else{
                                                if(imc>=24.9 && imc<=29.9){
                                                    printf("Sobrepeso");
                                                                          }else{
                                                                              if(imc>29.9 && imc<=34.9){
                                                                                  printf("Obesidade Grau 1 ");
                                                                                                        }else{
                                                                                                            if(imc>34.9 && imc<=39.9){
                                                                                                                printf("Obesidade Grau2");
                                                                                                                                    }else{
                                                                                                                                        if(imc>40){
                                                                                                                                            printf("Obesidade Grau3");
                                                                                                                                        }
                                                                                                                                    }
                                                                                                        }
                                                                          }
                                                }
                    }








    }

