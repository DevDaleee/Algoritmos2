#include <stdio.h>

void preencheFibVetor(long long fibVetor[], int tamanho){
    long long int i, a = 0, b = 1, c;
    fibVetor[0] = a;

    for(i = 1; i <= tamanho; i++){
        fibVetor[i] = b;
        c = b;
        b += a;
        a = c;
    }
    printf("Fib(%d) = %lld\n", tamanho, fibVetor[tamanho]);
    a = 0;
    b = 1;
    c = 0;
}
int main(){
    int i, N, m;
    long long fib[64];

    scanf("%d", &m);

    for(i = 0; i < m; i++){
        scanf("%d", &N);
        preencheFibVetor(fib,N);
    }
}