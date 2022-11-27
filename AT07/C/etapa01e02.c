#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 30 
#define E 50 
#define T 14 

typedef struct{
    int chave;
    char nome[N];
    char endereco[E];
    char telefone[T];
}Aluno;

void gerarDados(Aluno vet[], int nVet, int ordemChave){
    switch (ordemChave){
    case 0:
        crescente(vet, nVet);
        break;
    case 1:
        aleatorio(vet, nVet);
        break;
    case 2:
        decrescente(vet, nVet);
        break;
    default:
        printf("Numero invalido!\n");
        break;
    }
}

void crescente(Aluno vet[], int tVet){
    int i = 0;
    for (i = 0; i < tVet; i++){
        vet[i].chave = i;
    }
}

void aleatorio(Aluno vet[], int tVet){
    int i = 0;
    for (i = 0; i < tVet; i++){
        vet[i].chave = rand() % 10001;
    }
}

void decrescente(Aluno vet[], int tVet){
    int i = 0, j = 0;
    for (j = tVet - 1; j >= 0; j--, i++){
        vet[i].chave = j;
    }
}

void imprimir(Aluno vet[], int tVet)
{
    int i = 0;

    for (i = 0; i < tVet; i++)
    {
        printf("%d ", vet[i].chave);
    }
    printf("\n");
}

void bolha(Aluno vet[], int tVet){
    int i = 0, j = 0, aux = 0;
    for (i = 0; i < tVet - 1; i++){
        for (j = 1; j < tVet - 1; j++){
            if (vet[j].chave < vet[j - 1].chave){
                aux = vet[j].chave;
                vet[j].chave = vet[j - 1].chave;
                vet[j - 1].chave = aux;
            }
        }
    }
}

void selecao(Aluno vet[], int tVet){
    int i, j, menor = 0, aux = 0;
    for (i = 0; i < tVet - 1; i++){
        menor = i;
        for (j = i + 1; j < tVet; j++){
           if (vet[menor].chave > vet[j].chave){
               menor = j;
           }if (i != menor){
               aux = vet[i].chave;
               vet[i].chave = vet[menor].chave;
               vet[menor].chave = aux;
           }
        }
    }
}
void insercao(Aluno vet[], int tVet){
    int i, j, aux = 0;
    for (i = 1; i < tVet; i++){
        aux = vet[i].chave;
        for (j = i - 1; j >= 0 && (vet[j].chave > aux); j--){
            vet[j + 1].chave = vet[j].chave;
        }
        vet[j + 1].chave = aux;
    }       
}
void main(){
    int VetH = 0, ordChave = 0, tipoOrd = 0;

    srand((unsigned)time(NULL));

    scanf("%d", &VetH);

    Aluno aluno[VetH];

    while(1){
        scanf("%d", &ordChave);
        if (ordChave == 3){
            break;
        }
        scanf("%d", &tipoOrd);

        gerarDados(aluno, VetH, ordChave);

        switch (tipoOrd){
        case 0:
            printf("bolha\n");
            imprimir(aluno, VetH);
            bolha(aluno, VetH);
            break;
        
        case 1:
            printf("selecao\n");
            imprimir(aluno, VetH);
            selecao(aluno, VetH);
            break;
        
        case 2:
            printf("insercao\n");
            imprimir(aluno, VetH);
            insercao(aluno, VetH);
            break;

        default:
            break;
        }
        imprimir(aluno, VetH);
    }
}