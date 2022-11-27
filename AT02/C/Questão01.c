#include <stdio.h>
int main(){
    int x[40] = {0}, y[100] = {0}, n=40, indicator = 1, index=0;
    int i,j,a,c;

    for (i = 0; i < n; i++){ 
        scanf("%d", &x[i]);
    }
    for (i = 0; i < n; i++){
        for (j = i + 1; j < n; j++){
            if (x[i] > x[j]){
                a =  x[i];
                x[i] = x[j];
                x[j] = a;
            }
        }
    }
    for(int i = 0; i<n;i++) {
        indicator = 1;
    for(j = i+1;j<n;j++) {
        if(x[i] == x[j]){
            indicator = -1;
            break;
        }
    }
        if(indicator == 1){
            y[index] = x[i];
            index++;
        }
    }
    for(int k = 0; y[k]; k++) {
        c = 0;
    for(int m = 0; m<n;m++){
        if(y[k] == x[m]){
            c++;
        }
    }
    printf("%d\t %d\n",y[k],c);
}
}