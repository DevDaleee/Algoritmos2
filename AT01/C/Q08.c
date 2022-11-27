#include <stdio.h>

int main(){
    int lado1, lado2, count=1;

    scanf("%d", &lado1);
    scanf("%d", &lado2);

    while( count <= lado1*lado2){
        if(count % lado2 == 0){
            printf("*\n");
        }else{
            printf("*");
        }
        
        count++;
    }
}