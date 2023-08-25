#include <stdio.h>
#include <stdlib.h>

//push inserir na pilha
//pop retirar da pilha

struct st_no{//Aqui esta sendo criada uma estrutura com as variaveis info e um ponteiro que aponta para prox que seria o proximo endereço de memória 
	int info;
	struct st_no* prox;
};

typedef struct st_no pilha;//O typedef é uma simplificação do nome da struct, ao invés de chamar por struct st_no pliha.você chama por pilha

pilha* topo;//Aqui você cria um ponteiro que aponta para a estrutura pilha e da o nome de topo

void push(int valor){//Aqui você tem um método que adiciona um elemento na pilha
	
	pilha* novo = (pilha*)malloc(sizeof(pilha));
	//Aqui estou criando um novo ponteiro do tipo novo que recebe uma alocação dinânmica com o tamanho de pilha e apontando para o tipo de ponteiro no caso pilha
	
	novo->info = valor;//informando que novo recebe um valor
	novo->prox = topo;//informando que o prox ira apontar para o topo
	
	//como está sendo inserido no inicio eu preciso que a nova estrutura aponte para o mesmo item que o topo está apontado e em seguida faça com que o topo aponte para esse nova estrutura
	
	printf("\nnovo-> info = %d\n\n", novo->info);
	//criando um print do valor que está inserido em info
	topo = novo;	
	//Aqui estou fazendo o que havia descrevido acima, o topo aponta para o novo, se caso isso não fosse feito a lista seria perdida
}

int vazia(pilha* topo){
	//Aqui é checado se topo está vazio, se caso estiver vazio ele retorna true
	return (topo == NULL);
}

void pop(){
	//Aqui temos uma função que será responsavel por remover um elemento da pilha, lembrando que a inserção e remoção de uma pilha é feita pelo topo
	pilha* T;
	//aqui estou declarando um ponteiro t que aponta para a estrutura
	
	//Aqui é conferido pelo método vazia, se topo está vazio, se caso o metodo de true para vazio é printado Pilha vazia na tela
	if(vazia(topo)){
		printf("Pilha vazia!!\n\n");
		exit(1);
	}
	//Caso false para vazia, o T aponta para o topo que seria o primeiro elemento da pilha 
	T = topo;
	
	//Feito isso o topo recebe o T -> prox que faz com que o topo aponte para o próximo elemento 
	topo = T->prox;
	//Feito isso a lista não será perdida e é possivel liberar a estrutura selecionada
	
	//Para isso é utilizado o free que ira liberar os valores inseridos em info e prox
	free(T);
}



void limpar(){	
//Aqui novamente temos a função vazia que checa se topo está nuLL, se null for true é printado na tela a mensagem Pilha vazia


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
			//o ponteiro t recebe o novo elemento que topo está apontando e reinicia o processo
		}
		//quando ele encontrar um T com seu resultado Null ele libera o ponteiro topo, esvaziando a pilha
		free(topo);
	}
}

int exibetopo(pilha* topo){
	
	pilha* T;
	
	//Aqui novamente temos a função vazia que checa se topo está nuLL, se null for true é printado na tela a mensagem Pilha vazia
	if(vazia(topo)){
		printf("Pilha vazia!!\n\n");
		exit(1);
	}else{
		//Aqui temos uma impressão dos valores de info
		
		//T aponta para o que topo está apontando
		T = topo;
		
		//enquanto T for diferente de NULL ele fará a impressão do T info
		
		while(T != NULL){
			printf("--> %d\n", T->info);
			//em seguida o ponteiro t pega o t prox e aponta para o proximo elemento da pilha 
			T = T->prox;
		}
	}
	//quando a função der NULL ele retorna o valor de info de topo que seria o elemento restante
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
    			printf("Tanto pilhas quanto filas são estruturas de dados que podem ser implementadas usando ponteiros, e isso pode trazer eficiência em relação a outras formas de implementação.Uma pilha é uma estrutura de dados em que os elementos são adicionados e removidos somente do topo da pilha. A implementação de uma pilha usando ponteiros pode ser feita de forma que o topo da pilha seja representado por um ponteiro que aponta para o elemento no topo. Adicionar um elemento à pilha envolve simplesmente a criação de um novo nó com o elemento a ser adicionado e o ajuste do ponteiro do topo para apontar para esse novo nó. Remover um elemento da pilha envolve a exclusão do nó no topo e o ajuste do ponteiro do topo para apontar para o nó abaixo dele. Essa implementação é eficiente porque as operações de adicionar e remover elementos são feitas em tempo constante O(1), independentemente do tamanho da pilha.outro lado, é uma estrutura de dados em que os elementos são adicionados no final da fila e removidos do início da fila. A implementação de uma fila usando ponteiros pode ser feita de forma que o início e o fim da fila sejam representados por dois ponteiros. Adicionar um elemento à fila envolve simplesmente a criação de um novo nó com o elemento a ser adicionado e o ajuste do ponteiro do último elemento para apontar para esse novo nó. Remover um elemento da fila envolve a exclusão do nó no início e o ajuste do ponteiro do início para apontar para o nó seguinte. Essa implementação também é eficiente porque as operações de adicionar e remover elementos são feitas em tempo constante O(1), independentemente do tamanho da fila Em geral, a utilização de ponteiros permite uma implementação mais eficiente de estruturas de dados como pilhas e filas, pois as operações de adicionar e remover elementos podem ser feitas em tempo constante. Isso torna essas estruturas de dados úteis para muitos algoritmos e problemas computacionais.");
    			break;
		}
    	system("pause");
	}while(op != 0);

	
	return 0;
}
