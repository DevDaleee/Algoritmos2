#include <stdio.h>

int main(){

    float x, lucro;
    
    scanf("%f", &x);
    if(x < 20){
        lucro = x * 0.45;
        printf("%.2f", lucro+x);
    }else{
        lucro = x * 0.30;
        printf("%.2f", x+lucro);
    }
}