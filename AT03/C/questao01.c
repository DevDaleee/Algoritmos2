#include <stdio.h>

int numeros[4], x, NUM;

int invertendo(){
	for (x = 0; x < 4; x++){
	   numeros[x] = NUM % 10;
	   NUM /= 10;
	   printf("%d", numeros[x]);
	}
}


int main(){
    scanf("%d", &NUM);
    invertendo();
}