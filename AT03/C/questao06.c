#include <stdio.h>
#include <string.h>
#define NUM_STRINGS 6

int a=0, s=0, v=0, p=0, a2=0, s2=0;

char *artigo[NUM_STRINGS] = {"o", "um", "algum", "todo", "qualquer"};
char *substantivo[NUM_STRINGS] = {"menino", "homem", "cachorro", "carro", "gato"};
char *verbo[NUM_STRINGS] = {"passou", "pulou", "correu", "saltos", "andou"};
char *preposicao[NUM_STRINGS] = {"sobre", "sob", "ante", "ate", "com"};

char escrever(){
    srand(time(0));
    for (int i = 0; i < 20; i++){
       a = rand() % 5;
       s = rand() % 5;
       v = rand() % 5;
       p = rand() % 5;
       a2 = rand() % 5;
       s2 = rand() % 5;
       printf("%d - %s %s %s %s %s %s\n",i+1,artigo[a],substantivo[s],verbo[v],preposicao[p],artigo[a2],substantivo[s2]);
       a=0, s=0, v=0, p=0, a2=0, s2=0;
    }
}
int main(){
    escrever();
}