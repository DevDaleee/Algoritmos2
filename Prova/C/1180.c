#include <stdio.h>

struct Menor{
    int tamanho;
    int posicao;
};

int main(){
    struct Menor *v;
    int i, tam, men, pos;

    scanf("%d", &tam);
    int V[tam];

    for(i = 0; i < tam; i++)
        scanf("%d", &V[i]);
    men = V[0];

    for(i = 1; i < tam; i++){
        if(men > V[i]){
            men = V[i];
            pos = i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n", men, pos);
    return 0;
}