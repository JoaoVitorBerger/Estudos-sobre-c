#include <stdio.h>
#include <stdlib.h>

//push inserir na pilha
//pop retirar da pilha

struct st_no{//Aqui esta sendo criada uma estrutura com as variaveis info e um ponteiro que aponta para prox que seria o proximo endere�o de mem�ria 
	int info;
	struct st_no* prox;
};

typedef struct st_no pilha;//O typedef � uma simplifica��o do nome da struct, ao inv�s de chamar por struct st_no pliha.voc� chama por pilha

pilha* topo;//Aqui voc� cria um ponteiro que aponta para a estrutura pilha e da o nome de topo

void push(int valor){//Aqui voc� tem um m�todo que adiciona um elemento na pilha
	
	pilha* novo = (pilha*)malloc(sizeof(pilha));
	//Aqui estou criando um novo ponteiro do tipo novo que recebe uma aloca��o din�nmica com o tamanho de pilha e apontando para o tipo de ponteiro no caso pilha
	
	novo->info = valor;//informando que novo recebe um valor
	novo->prox = topo;//informando que o prox ira apontar para o topo
	
	//como est� sendo inserido no inicio eu preciso que a nova estrutura aponte para o mesmo item que o topo est� apontado e em seguida fa�a com que o topo aponte para esse nova estrutura
	
	printf("\nnovo-> info = %d\n\n", novo->info);
	//criando um print do valor que est� inserido em info
	topo = novo;	
	//Aqui estou fazendo o que havia descrevido acima, o topo aponta para o novo, se caso isso n�o fosse feito a lista seria perdida
}

int vazia(pilha* topo){
	//Aqui � checado se topo est� vazio, se caso estiver vazio ele retorna true
	return (topo == NULL);
}

void pop(){
	//Aqui temos uma fun��o que ser� responsavel por remover um elemento da pilha, lembrando que a inser��o e remo��o de uma pilha � feita pelo topo
	pilha* T;
	//aqui estou declarando um ponteiro t que aponta para a estrutura
	
	//Aqui � conferido pelo m�todo vazia, se topo est� vazio, se caso o metodo de true para vazio � printado Pilha vazia na tela
	if(vazia(topo)){
		printf("Pilha vazia!!\n\n");
		exit(1);
	}
	//Caso false para vazia, o T aponta para o topo que seria o primeiro elemento da pilha 
	T = topo;
	
	//Feito isso o topo recebe o T -> prox que faz com que o topo aponte para o pr�ximo elemento 
	topo = T->prox;
	//Feito isso a lista n�o ser� perdida e � possivel liberar a estrutura selecionada
	
	//Para isso � utilizado o free que ira liberar os valores inseridos em info e prox
	free(T);
}



void limpar(){	
//Aqui novamente temos a fun��o vazia que checa se topo est� nuLL, se null for true � printado na tela a mensagem Pilha vazia


	if(vazia(topo)){
		printf("Pilha vazia!!\n\n");
		exit(1);
	}else{
		
		//Nesse caso o ponteiro T ira percorrer a pilha enquanto o T for diferente de null
		pilha* T = topo;
		while(T != NULL){
			topo = T->prox;
			//topo recebe o t prox enquanto ele nao for null e libera o armazenamento da estrutura
			free(T);
			//Esvaziando a estrutura
			T = topo;
			//o ponteiro t recebe o novo elemento que topo est� apontando e reinicia o processo
		}
		//quando ele encontrar um T com seu resultado Null ele libera o ponteiro topo, esvaziando a pilha
		free(topo);
	}
}

int exibetopo(pilha* topo){
	
	pilha* T;
	
	//Aqui novamente temos a fun��o vazia que checa se topo est� nuLL, se null for true � printado na tela a mensagem Pilha vazia
	if(vazia(topo)){
		printf("Pilha vazia!!\n\n");
		exit(1);
	}else{
		//Aqui temos uma impress�o dos valores de info
		
		//T aponta para o que topo est� apontando
		T = topo;
		
		//enquanto T for diferente de NULL ele far� a impress�o do T info
		
		while(T != NULL){
			printf("--> %d\n", T->info);
			//em seguida o ponteiro t pega o t prox e aponta para o proximo elemento da pilha 
			T = T->prox;
		}
	}
	//quando a fun��o der NULL ele retorna o valor de info de topo que seria o elemento restante
	return topo->info;
}


int main(){
	
	
	topo = NULL;
	int valor;

    int op;
    do{
    	system("cls");
    	printf("\n***Menu de opcoes:***\n");
    	printf("1 - Adicionar na pilha:\n");
    	printf("2 - Remover da pilha:\n");
    	printf("3 - Exibir a pilha\n");
    	printf("4 - Limpar a pilha\n");
    	printf("5 - Explicaao das vantagens de pilha e fila\n");
    	printf("0 - Sair\n");
    	printf("Entre com a opcao desejada: ");
    	scanf("%d", &op);
    	switch(op){
    		case 0:
    			printf("\nSair do programa.\n");
    			break;
    		case 1:
    			printf("\nEntre com um valor para inserir na pilha: ");
    			scanf("%d", &valor);
    			push(valor);
    			break;
    		case 2:
    			pop();
    			break;
    		case 3:
    			printf("\nTopo: %d\n",  exibetopo(topo));
    			break;
    		case 4:
    			limpar();
    			break;
    		default:
    			printf("Opcao invalida!!");
    		case 5:	
    			printf("Tanto pilhas quanto filas s�o estruturas de dados que podem ser implementadas usando ponteiros, e isso pode trazer efici�ncia em rela��o a outras formas de implementa��o.Uma pilha � uma estrutura de dados em que os elementos s�o adicionados e removidos somente do topo da pilha. A implementa��o de uma pilha usando ponteiros pode ser feita de forma que o topo da pilha seja representado por um ponteiro que aponta para o elemento no topo. Adicionar um elemento � pilha envolve simplesmente a cria��o de um novo n� com o elemento a ser adicionado e o ajuste do ponteiro do topo para apontar para esse novo n�. Remover um elemento da pilha envolve a exclus�o do n� no topo e o ajuste do ponteiro do topo para apontar para o n� abaixo dele. Essa implementa��o � eficiente porque as opera��es de adicionar e remover elementos s�o feitas em tempo constante O(1), independentemente do tamanho da pilha.outro lado, � uma estrutura de dados em que os elementos s�o adicionados no final da fila e removidos do in�cio da fila. A implementa��o de uma fila usando ponteiros pode ser feita de forma que o in�cio e o fim da fila sejam representados por dois ponteiros. Adicionar um elemento � fila envolve simplesmente a cria��o de um novo n� com o elemento a ser adicionado e o ajuste do ponteiro do �ltimo elemento para apontar para esse novo n�. Remover um elemento da fila envolve a exclus�o do n� no in�cio e o ajuste do ponteiro do in�cio para apontar para o n� seguinte. Essa implementa��o tamb�m � eficiente porque as opera��es de adicionar e remover elementos s�o feitas em tempo constante O(1), independentemente do tamanho da fila Em geral, a utiliza��o de ponteiros permite uma implementa��o mais eficiente de estruturas de dados como pilhas e filas, pois as opera��es de adicionar e remover elementos podem ser feitas em tempo constante. Isso torna essas estruturas de dados �teis para muitos algoritmos e problemas computacionais.");
    			break;
		}
    	system("pause");
	}while(op != 0);

	
	return 0;
}
