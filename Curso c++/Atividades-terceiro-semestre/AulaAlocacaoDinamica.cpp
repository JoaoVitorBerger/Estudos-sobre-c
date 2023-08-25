#include<stdio.h>
#include<string.h>
#include<stdlib.h>

main(){
	char texto[200];
	char copia[200];
	
	printf("Qual a sua String");
	gets(texto);
	
	//comando para copiar string
	strcpy(copia,texto);
	printf("String Original: %s\nCopia: %s",texto,copia);
	
	printf("\n\nQuantidade de bytes da variavel original = %ld", sizeof(texto));
	printf("\nQuantidade de bytes da variavel copia = %ld",sizeof(copia));
	
}
