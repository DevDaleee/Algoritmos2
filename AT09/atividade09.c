#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct locacao{
    int codigo;
    char nome[20];
};
typedef struct locacao Lista_locacao[1000];

int main(){
    int chave, soma_sequencial = 0, codigo_esc = 0, remove_cod = 0;
    char nomev[20] = "Gol";
    int chave2;
    char nome_veiculo[20];

    srand((unsigned)time(NULL));
    Lista_locacao lista;

    for(int i = 1; i < 1001; i++){
        strcpy(lista[i].nome, "Gol");
        lista[i].codigo = rand()%1000;
    }


    return 0;
}