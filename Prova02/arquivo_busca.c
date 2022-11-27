#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    int cod;
    char descricao[24];
    int idade;
    float preco;
}Registro;

void cadastrar(Registro reg);
void imprimir(Registro reg);
void busca(Registro reg);
void buscaMultipla(Registro reg);

int main(int argc, char *argv[]){
    int opcao=0;
    Registro reg = {0,"",0.00};
    while (opcao != 5){
        if (opcao == 0){
            printf(" 1 - Cadastrar\n 2 - Visualizar \n 3 - Buscar um Registro\n 4 - Buscar Muitos Registros\n 5 - Finalizar \n Informe o modulo desejado: ");
            scanf("%d", &opcao);
        }

        switch (opcao){
        case 1:
            cadastrar(reg);
            break;
        case 2:
            imprimir(reg);
            break;
        case 3:
            busca(reg);
            break;
        case 4:
            buscaMultipla(reg);
            break;
        }
        printf("\nInforme o modulo desejado: ");
        scanf("%d", &opcao);
    }
}
void cadastrar(Registro reg){
    FILE *fptr;
    if((fptr = fopen("dados.bin", "rb+")) == NULL){
        printf("Arquivo nao encontrado\n");
    }else{
            printf("Digite o codigo: ");
            scanf("%d", &reg.cod);
            setbuf(stdin, NULL);
            printf("Digite a descricao: ");
            scanf("%[^\n]s", reg.descricao);
            printf("Digite a idade: ");
            scanf("%d", &reg.idade);
            printf("Digite o preco: ");
            scanf("%f", &reg.preco);
            fseek(fptr, (reg.cod - 1) * sizeof (reg), SEEK_SET );
            fwrite(&reg, sizeof(reg), 1 ,fptr);

        printf("Operacao de escrita finalizada\n");
    }
    fclose(fptr);
}

void imprimir(Registro reg){
    FILE *fptr;
    if((fptr = fopen("dados.bin", "rb")) == NULL){
        printf("Arquivo nao encontrado\n");
    }else{
        while (!feof(fptr)){
          fread(&reg, sizeof(Registro), 1, fptr);
          if (reg.cod != 0){
                printf("Codigo, descricao, idade e preco\n");
                printf("%d,%s,%d,%.2f\n", reg.cod, reg.descricao, reg.idade, reg.preco);
            }
        }
        printf("Operacao de leitura finalizada\n");
    }
    fclose(fptr);
}


void busca(Registro reg){
  FILE *arq;
  int busca;
  printf("Codigo de busca: ");
  scanf("%d",&busca);
  if(busca == 0){
    exit(1);
  }
  else{
    if(!(arq = fopen("dados.bin","rb"))){
      printf("[!]Erro - Abertura incorreta!\n");
      exit(1);
    }
    else{
      while( !feof(arq) ){
        fread(&reg,sizeof(Registro),1,arq);
        if(reg.cod != 0 && reg.cod == busca){
          printf("%d %s %d %.2f\n",reg.cod,reg.descricao,reg.idade, reg.preco);
        }
      }
    }
  }
}

void buscaMultipla(Registro reg){
  FILE *arq;
  int busca = -1,n, i = 0;
  printf("Quantidade de Códigos para busca: ");
  scanf("%d",&n);
  int codigos[n];
  while(busca != 0 &&  i < n){
    printf("Codigo de busca: ");
    scanf("%d",&busca);
    if(busca == 0){
      exit(1);
    }
    else{
      codigos[i] = busca;
      i++;
    }
  }
  if(!(arq = fopen("dados.bin","rb"))){
    printf("[!]Erro - Abertura incorreta!\n");
    exit(1);
  }
  else{
    i = 0;
    while( !feof(arq) && i < n){
      fread(&reg,sizeof(Registro),1,arq);
      if(reg.cod != 0 && reg.cod == codigos[i]){
        printf("%d %s %d %.2f\n",reg.cod,reg.descricao,reg.idade, reg.preco);
        i++;
      }
    }
  }
}
