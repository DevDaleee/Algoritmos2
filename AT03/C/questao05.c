#include <stdio.h>
#include <stdlib.h>

x=0;
y = 0;
tentativas = 0;

int repeticao(){
    int lower = 1, upper = 1000;
    x = rand() % (upper - lower + 1) + lower;
    while (y != x){
        scanf("%d", &y);
        if (y < x){
            printf("Muito baixo. Tente Novamente.\n");
            tentativas++;
        }else if (y > x){
            printf("Muito alto. Tente Novamente.\n");
            tentativas++;
        }    
    }
    printf("Excelente! Voce adivinhou o numero!\n");
    printf("Tentativas %d", tentativas);
}


int main(){
    srand(time(0));
    printf("Voce pode adivinhar meu numero?\n");
    repeticao();
}