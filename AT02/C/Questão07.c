#include <stdio.h>

int main(){
    int valor[10]={2,4,6,8,10,12,14,16,18,20};
    int elemento[10]={0,1,2,3,4,5,6,7,8,9};
    int i;
    
    printf("Elemento             Valor\n");

    for (i = 0; i<10; i++){
        printf("       %d\t     %d\n", elemento[i], valor[i]);
    }
}