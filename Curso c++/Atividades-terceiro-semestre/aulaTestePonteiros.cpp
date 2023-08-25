#include<iostream>

using namespace std;

void somar (float *var, float quantidade){
	*var+=quantidade;
}

int main(){
	float num =0;
	somar (&num,15);
	
	printf("%f",num);
	
	return 0;
}


