#include <stdio.h>

typedef struct{
    int cod;
    char nomeVeiculo[20];
    float valor;
}Registro;

void formatacao();
void escrita();
void leitura();
void busca();

int main() {
    int opcao; 
    do{
        printf("Sistema de locação baseado em arquivo\n");
        printf("Informe a opção desejada (1-formatar, 2-escrever, 3-ler, 4-buscar, 0-finalizar):");
        printf("\n");
        scanf("%d", &opcao);
        switch (opcao){
        case 1:
            formatacao();
            break;
        case 2:
            escrita();
            break;
        case 3:
            leitura();
            break;
        case 4:
            busca();
            break;
        case 0:
            break;
        }
    }while (opcao != 0);
    return 0;
}
void formatacao(){
    FILE *fptr;
    Registro reg = {0, "", 0.00};
    int i;

    if((fptr = fopen("dados.bin", "wb")) == NULL){
        printf("Arquivo não encontrado\n");
    }else{
        for (i = 0; i < 1001; i++){
            fwrite(&reg, sizeof(reg), 1, fptr);
        }
        printf("Operação de formatacao finalizada\n");
        fclose(fptr);
    }
}
void escrita(){
    FILE *fptr;
    Registro reg;
    int i;
    if((fptr = fopen("dados.bin", "rb+")) == NULL){
        printf("Arquivo não encontrado\n");
    } else {
        printf("Digite o codigo da locacao (0-finalizar): ");
        scanf("%d", &reg.cod);

        while (reg.cod != 0)
        {
            printf("Digite o nome do veiculo: ");
            scanf("%[^\n]s", reg.nomeVeiculo);
            setbuf(stdin, NULL);
            printf("Digite o valor da locacao: ");
            scanf("%f", &reg.valor);
            fseek(fptr, (reg.cod - 1) * sizeof (reg), SEEK_SET );
            fwrite(&reg, sizeof(reg), 1 ,fptr);
            printf("Digite o codigo da locacao (0-Finalizar): ");
            scanf("%d", &reg.cod);
        }
        printf("Operação de escrita finalizada\n");
        fclose(fptr);
    }
}

void leitura(){
    FILE *fptr;

    if((fptr = fopen("dados.bin", "rb+")) == NULL){
        printf("Arquivo não encontrado\n");
    }else{
        while (!feof(fptr)){
            Registro reg = {0, "", 0.0};
            fread(&reg, sizeof(Registro), 1, fptr);
            if (reg.cod != 0){
                printf("Codigo de locacao  Nome do veiculo  Valor da locacao\n");
                printf("%-18d %-16s %.2f\n", reg.cod, reg.nomeVeiculo, reg.valor);
            }
        }
        printf("Operação de leitura finalizada\n");
        fclose(fptr);
    }
}

void busca(){
    FILE *fptr;
    Registro reg;
    int i;

    if((fptr = fopen("dados.bin", "rb+")) == NULL){
        printf("Arquivo não encontrado\n");
    }else{
        printf("Digite o codigo da locacao: ");
        scanf("%d", &reg.cod);
        fseek(fptr,((reg.cod - 1) * sizeof(reg)), SEEK_SET);
        fread(&reg, sizeof(reg), 1, fptr);
        
        if (reg.cod == 0){
            printf("=> Nenhum registro de locação com a chave informada foi encontrado.\n");
        }else{
            printf("Codigo de locacao  Nome do veiculo  Valor da locacao\n");
            printf("%-18d %-16s %.2f\n", reg.cod, reg.nomeVeiculo, reg.valor);
        }
        printf("Operação de busca finalizada\n");
        fclose(fptr);
    }
}