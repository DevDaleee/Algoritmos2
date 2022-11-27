#include <stdio.h>
void cubo(int *nPrt);

int main(){
    int x;
    scanf("%d", &x);
    cubo(&x);
    printf("%i", x);
} 
void cubo(int *nPrt){  
    
    *nPrt = *nPrt * *nPrt * *nPrt;
}