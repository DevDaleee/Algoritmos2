#include <stdio.h>
#include <math.h>

typedef struct _PONTO{
     float X, Y;
 } ponto;

int main() {

    ponto p1, p2;
    float distancia;

    scanf("%f %f %f %f", &p1.X, &p1.Y, &p2.X, &p2.Y);

    distancia = sqrt(pow(p1.X - p2.X, 2) + pow(p1.Y - p2.Y, 2));

    printf("%.4f", distancia);
    printf("\n");

    return 0;
}