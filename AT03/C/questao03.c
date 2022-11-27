#include <stdio.h>
ca = 0;
co = 0;
x = 0;
int jogamoeda(){
    
    for (int i = 0; i < 100; i++){
        x = rand() % 2;
        if (x == 1){
            printf("cara \n");
            ca++;
        }else if (x == 0){
            printf("coroa \n");
            co++;
        }   
    }   
}
int main (){
    srand(time(NULL));
    jogamoeda();
    
    printf("Cara apareceu: %d vezes \n", ca);
    printf("Coroa apareceu: %d vezes", co);
}