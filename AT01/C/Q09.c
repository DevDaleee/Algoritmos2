#include <stdio.h>

int main(){
    int lado1, lado2, count=1;
   
    scanf("%d", &lado1);
    scanf("%d", &lado2);

    while(count<=lado2){
        printf("*");
        count++;
    }
        printf("\n");
        count=1;
    while( count <= lado2*(lado1-2)){
        if( (count%lado2 == 1))
            printf("*");
        else
        if( (count%lado2 == 0))
            printf("*\n");
        else
            printf(" ");

            count++;
        }
        count=1;
        while(count<=lado2){
            printf("*");
            count++;
        }
        printf("\n");
}