#include <stdio.h>

int main(){
    int x = 0, i = 0;
    scanf("%d",&x);

    while (x > 0){
        i = i + x;
        scanf("%d",&x);
    }
    printf("%d", i);
}