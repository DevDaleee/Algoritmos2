#include <stdio.h>

int main(){
    int x=0,y=0,i=0;
    scanf("%d", &x);
    scanf("%d", &y);

    while (x <= y){
        if (x % 2 == 0){
            i +=x;
        }
        x+=1;
    }
    printf("%d", i);
}