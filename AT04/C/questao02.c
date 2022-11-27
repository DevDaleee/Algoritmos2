#include <stdio.h>
#include <math.h>

struct distancia{
    int x1,y1,x2,y2;
};

int main(){
    struct distancia c[1];
    float result=0;

    scanf("%f %f", &c[1].x1,&c[1].y1);
    scanf("%f %f", &c[2].x2,&c[2].y2);

    result = sqrt(pow(c[2].x2-c[1].x1,2) + pow(c[2].y2-c[1].y1,2));

    printf("Distancia: %.4f", result);
}