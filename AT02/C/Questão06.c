#include <stdio.h>
 
int main(void) {
	int x[2][2] = {{2,2},{2,2}};
    int y[2][2] = {{2,2},{2,2}};
 
    int resultado[2][2] = {0};
 
    int i,j,c;
 
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            for(c=0; c<2; c++){
                resultado[i][j] += x[i][c] * y[c][j];
            }
        }
    }
 
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }
}