#include <stdio.h>
#include <math.h>

float a1,a2;
float b1,b2;
float result;

int calcula(){
    result = sqrt(pow(a2-a1,2) + pow(b2-b1,2));
    return result;
}

int main(){
    scanf("%f", &a1);
    scanf("%f", &b1);
    scanf("%f", &a2);
    scanf("%f", &b2);

    calcula();
    printf("A distancia entre os dois pontos e: %.2f", result);
}