#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	int *p;
	int quantidade;
	
	printf("Quantos elementos deseja armazenar no vetor");
	scanf("%d", &quantidade);
	
	//p recebe a quantidade necessaria para alocar os dados no vetor
	p= (int*) malloc(quantidade * sizeof(int));
	
	int i;
	printf("\nCadastrando os dados no vetor \n");
	
	for(i=0; i<quantidade; i++){
		printf("[%d] = ",i);
		scanf("%d", &p[i]);// Esta informando que no espaço de memoria do vetor na posicao i
							//ele vai armazenar um valor do tipo inteiro
	}
	
	printf("\nExibindo os dados no vetor\n");
	for(i=0; i< quantidade; i++){
		printf("[%d] = %d\n", i, p[i]);
	}
	
	printf("\nA variavel p ocupa %d bytes", quantidade * sizeof(int));
	free(p);
	p = NULL;
	return 0;
}
