#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define MAX 65535
#define MAX_REGISTERS 1000

typedef struct{
    int chave;
    char nomeVeiculo[20];
}Registro;

typedef struct{
    Registro itens[MAX+1];
    int tamanho;
}Tabela;

void preeencherTabela(Tabela *t);
void salvarDados(Tabela *t, char fname[100]);
void restaurarDados(Tabela *t2, char fname[100]);

int main(){
    char palavra[100];
    int operacao = -1;
    srand( (unsigned) time(NULL) );

    Tabela t;
    Tabela t2;

    preeencherTabela(&t);

    while (operacao != 0){
        printf("Sistema de backup de dados\n");
        printf("Informe a operação desejada (1-salvar, 2-restaurar, 3-imprimir):\n");
        scanf("%d", &operacao);
        switch (operacao){
        case 1:
            printf("Informe o nome do arquivo de backup:");
            scanf("%s", palavra);
            salvarDados(&t, palavra);
            break;
        case 2:
            printf("Informe o nome do arquivo de backup:");
            scanf("%s", palavra);
            restaurarDados(&t2, palavra);
            break;
        case 0:
            printf("Programa finalizado");
            break;
        }   
    }
    printf("Operação concluída com sucesso!\n");
    return 0;
}

void insere(Registro *reg, Tabela *t){
    if (t->tamanho == MAX){
        printf("Erro: Tabela cheia\n");
    }else{
        t->itens[t->tamanho] = *reg;
        t->tamanho++;
    }
}

int sorteaNumero(int min, int max){
    return rand() % max + min;
}

void preeencherTabela(Tabela *t){
    int i, numeroSorteado;
    Registro reg;
    for (i = 0; i < 1000; i++){
        numeroSorteado = sorteaNumero(0, 1000);
        reg.chave = numeroSorteado;
        strcpy(reg.nomeVeiculo, "Gol");
        insere(&reg, t);
    } 
}

void salvarDados(Tabela *t, char fname[100]){
    FILE *fptr;
    int i;

    fptr = fopen(fname, "w");
    
    if (fptr == NULL){
        printf("Erro na abertura do arquivo!\n");
    }else {
        printf("Arquivo aberto com sucesso!\n");
    }

    for (i = 0; i < t->tamanho; i++){
        fprintf(fptr, "%d %s\n", t->itens[i].chave, t->itens[i].nomeVeiculo);
    }
    fclose(fptr);   
}

void restaurarDados(Tabela *t2, char fname[100]){
    FILE *fptr;
    int i, chave;
    char veiculo[100];
    Registro reg;

    fptr = fopen(fname, "r");

    if (fptr == NULL){
        printf("Erro na abertura do arquivo!\n");
    }else {
        printf("Arquivo aberto com succeso!\n");
    }
    i = 0;
    do{
        fscanf(fptr, "%d %s", &t2->itens[i].chave, t2->itens[i].nomeVeiculo);
        i++;
    }while(!feof(fptr));
    fclose(fptr);
}