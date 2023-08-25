#include<iostream>
#include<stdio.h>


void funcao(int *n ){
	 *n=4;
}


int main(){
	int n;
	
	n=3;
	
	printf("\nn = %d",n);
	printf("\n endereco de n = %p",&n);
	
	funcao(&n);
	printf("\nn =%d",n);
	
	return 0;
	
}
