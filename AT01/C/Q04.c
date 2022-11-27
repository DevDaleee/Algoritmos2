#include <stdio.h>

int main(){
    float x=0, prec=0, res=0;
    scanf("%f", &x);

    if (x < 12){
        prec = 1.3;
        res = prec * x;
        printf("%f",res);
    }else{
        prec = 1;
        res = prec * x;
        printf("%f",res);
    }
}