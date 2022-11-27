#include <stdio.h>>
#include <stdlib.h>

int main(){
    srand(time(NULL));
    int dado1 = 0, dado2 = 0, soma = 0, ponto, gameStatus;

    soma = JogaDado();
    if((soma == 7)||(soma == 11)){
        gameStatus = 1;
    }
    else{
        if ((soma == 2)||(soma == 3)||(soma == 12)){
            gameStatus = 2;
        }
        else{
            ponto = soma;
            gameStatus = 0;
            printf("O ponto eh %d\n", ponto);
        }
    }
    while (gameStatus == 0) { 
        soma = JogaDado();
        if(soma == ponto) 
            gameStatus = 1;
        else
            if(soma == 7) 
            gameStatus = 2;
    }
    if(gameStatus == 1)
        printf("O jogador ganhou :)\n") ;
    else
        printf("O jogador perdeu :(\n");
    return 0;
}
int JogaDado(void) {
    int dado1, dado2, soma;
    dado1 = 1 + (rand() % 6);
    dado2 = 1 + (rand() % 6);
    soma = dado1 + dado2;
    printf("Soma dos dados %d + %d = %d\n", dado1, dado2, soma);
    return soma;
}
