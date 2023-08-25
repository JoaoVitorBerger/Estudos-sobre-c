#include<iostream>

int main(){
	int numero = 10;
	int *pv;
	
	pv=&numero;//Ponteiro pv recebe o endereço de memoria de numero
	
	printf("%p e o  endereco de memoria de numero",pv);
	
	*pv=5;//No endereço de memoria apontado por pv recebe um novo valor que no caso
		  // é 5
}
