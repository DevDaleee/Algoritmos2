#include <stdio.h>

int valor[10]={0};
int elemento[10]={0,1,2,3,4,5,6,7,8,9};
int i,j;

int main(){
    for (int d = 0; d < 10; d++){
        scanf("%d", &valor[d]);
    }

    printf("Elemento             Valor             Histograma\n");

    for (i = 0; i<10; i++){
        printf("%-23d\t%-9d\t", elemento[i], valor[i]);
        for ( j = 0; j < valor[i]; j++){
            printf("*");
        }
        printf("\n");
    }
}