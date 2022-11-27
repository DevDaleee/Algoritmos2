#include <stdio.h>
int n,T,t,p[31],d[31];
int main(){
    p[0] = 1;
    for(int i=1; i<31; i++) p[i] = p[i-1] << 1;
    for(int i=0; i<31; i++) d[i] = (int) ceil(log10(p[i]+1));
    while(scanf("%d",&n) and n){
        T = d[2*n-2];
        for(int i=0; i<n; i++){
            for(int j=0; j<n-1; j++){
                t = T - d[i+j];
                while(t--) printf(" ");
                printf("%d ",p[i+j]);
            }
            t = T - d[i+n-1];
            while(t--) printf(" ");
            printf("%dn",p[i+n-1]);
        }
        printf("n");
    }
    return 0;
}