#include <stdio.h>

void main(){
char X[100], espacado[100], up;
int i = 0, j = 0, count = 0;

for(i = 0; (X[i]=getchar())!='\n'; i++){}        

X[i] = '\0';

count = i;       
    
for(i = 0; i<count; i++){
    espacado[j] = X[i];
    j++;
    espacado[j] = ' ';
    j++;

}
espacado[j] = '\0';   

printf("%s",strupr(espacado));
}