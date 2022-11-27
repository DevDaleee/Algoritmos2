#include <stdio.h>

int main(){

    char y;
    int x;

    scanf("%c\n", &y);
    scanf("%d", &x);

    if((y == 'a') && (x == 0)){
        printf("R$ 500.00");
    }
    if((y == 'd') && (x == 0)){
        printf("R$ 300.00");
    }
    if((y == 'b') && (x == 0)){
        printf("R$ 350.00");
    }
    if((y == 'c') && (x == 0)){
        printf("R$ 350.00");
    }
    if((y == 'c') && (x == 1)){
        printf("R$ 600.00");
    }
    if((y == 'b') && (x == 1)){
        printf("R$ 650.00");
    }
    if((y == 'd') && (x == 1)){
        printf("R$ 550.00");
    }
    if((y == 'a') && (x == 1)){
        printf("R$ 900.00");
    }
}