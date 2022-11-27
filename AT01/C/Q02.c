#include <stdio.h>

int main(){
    float x = 0, des = 0, res = 0;
    scanf("%f", &x);

    if (x <= 600){

        des = 0.0;
        printf("%.2f\n%.2f", des,x);
        
    }else if (x > 600 && x <= 1200){

        des = x * 0.2;
        res = x - des;
        printf("%.2f\n%.2f", des,res);

    }else if (x > 1200 && x <= 2000){

        des = x * 0.25;
        res = x - des;
        printf("%.2f\n%.2f", des,res);

    }else if(x > 2000){

        des = x * 0.3;
        res = x - des;
        printf("%.2f\n%.2f", des,res);

    }
      
}