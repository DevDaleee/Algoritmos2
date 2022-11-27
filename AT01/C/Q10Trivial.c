#include <stdio.h>

int mdc(){
    int resto, a, b; 
    scanf("%d", &a);
    scanf("%d", &b);

    while (b != 0){
        resto = a%b;
        a = b;
        b = resto;
    }
    return a;
}
int main(){
    printf("%d", mdc());
}