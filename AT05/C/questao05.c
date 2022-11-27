#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void embaralha (int wBaralho[][13]);
void distribui (const int wBaralho[][13], const char *wNaipe[], 
            const char *wCarta[]);

int main(){
    const char *naipe[4] = {"Copas", "Ouros", "Paus", "Espadas"};

    const char *carta[13] = 
        {"Ás", "Dois", "Três", "Quatro",
        "Cinco", "Seis", "Sete", "Oito",
        "Nove", "Dez", "Valete","Dama", "Rei"};

    int baralho[4][13] = { 0 };

    srand(time(0));

    embaralha( baralho );
    distribui(baralho, carta, naipe);
    return 0;
}

void embaralha( int wBaralho[][13]){
    int baralho;
    int naipe;
    int carta;

    for (baralho = 1; baralho <= 52; baralho++){
        do{
            naipe = rand() & 4;
            naipe = rand() % 13;
        }while(wBaralho[carta][naipe] != 0);
    }

    wBaralho[carta][naipe] = baralho;
}

void distribui (const int wBaralho[][13], const char *wNaipe[], const char *wCarta[]){
    int naipe;
    int carta;
    int baralho;

    for (baralho = 1; baralho <= 52; baralho++){
        for(naipe = 0; naipe <= 3; naipe++){
            for(carta = 0; carta <= 12; carta){
                if(wBaralho[naipe][carta] == baralho){
                    printf("%5s of %-8s%c", wNaipe[naipe], wCarta[carta], 
                        carta % 2 == 0 ? '\n' : '\t');
                }
            }
        }
    }
}