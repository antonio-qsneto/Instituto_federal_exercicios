#include<stdio.h>

#define MAX 100

int ehPar(int num){
        if (num > 0)
        {
                return 1;
        }else{
                return 0;
        }       
}


int main(){

        FILE *file, *file_positivo, *file_negativo;
        char arquivo[MAX];
        int num;

        printf("Entre com o nome do arquivo: ");
        scanf("%s", arquivo);

        file = fopen(arquivo, "r");
        file_positivo = fopen("positivos", "w");
        file_negativo = fopen("negativos", "w");

        if (file == NULL || file_positivo == NULL || file_negativo == NULL)
        {
                printf("Nao foi possivel abrir os arquivos\n");
                return 0;
        }

        while (fgetc(file) != EOF)
        {
                fscanf(file, "%d", &num);
                if (num > 0)
                {
                        fprintf(file_positivo, "%d\n", num);
                }else{
                        fprintf(file_negativo, "%d\n", num);
                }
        }


        return 0;
}