#include<stdio.h>
#include<string.h>
#include<stdlib.h>

main(){
	char original[200];
	char*p;
	
	printf("\nQual texto deseja armazenar?");
	gets(original);
	
	//Alocação dinâmica
	//strlen( ) --> retorna um inteiro que é o comprimento da string
	//em uma string o último valor é "\0" temos que acrescentar +1
	p = (char*) malloc(strlen(original)+1);
	
	if(p==NULL){
		printf("Erro na alocacao da memoria ");
	}else{
		//cópia do endereco da primeira posição da string para o ponteiro p
		strcpy(p, original);
		printf("String Original: %s\nCopia: %s",original,p);
		
		printf("\nQuantidade de bytes da variavel original = %ld",sizeof(original));
		printf("\nQuantidade de bytes da variavel p = %d", strlen(original)+1);
		free(p);
		p=NULL;
	}
	
}
