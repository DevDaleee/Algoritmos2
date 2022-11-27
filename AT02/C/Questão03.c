#include<stdio.h>

int main(){
    char palavra[20];
    int i;
    int troca[20]={0};

    printf("Informe uma palavra: ");
    scanf("%s", &palavra);

    for (i = 0; i < 20; i++){
        if(palavra[i] == 'r'){
            palavra[i] = 'l';
            troca[i] = i;
        }
    }
    printf("Cebolinha falaria: %s\n", palavra);
    printf("Houve troca nos caracteres: ");

    for (i = 0; i < 20; i++){
        if (troca[i] != 0){
            printf(" %d  ",troca[i]);
        }   
    }
    
}