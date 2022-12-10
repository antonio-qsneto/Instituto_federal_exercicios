#include<stdio.h>
#include<stdlib.h>
#include"utils.h"

int main(){

        FILE *srcFile;
        FILE *tempFile;
        char nome_pasta[30];
        int linha;

        printf("Entre com o nome do arquivo: ");
        scanf("%s", nome_pasta);

        printf("Entre com o numero da linha para remover: ");
        scanf("%d", &linha);

        srcFile = fopen(nome_pasta, "r");
        tempFile = fopen("delete-line.tmp", "w");

        if (srcFile == NULL || tempFile == NULL)
        {
                printf("Nao foi possivel abrir o arquivo\n");
                return 0;
        }       

        deleteLine(srcFile, tempFile,linha);

        fclose(srcFile);
        fclose(tempFile);

        remove(nome_pasta);
        rename("delete-line.tmp", nome_pasta);


        printf("\n\nO arquivo foi editado com sucesso!");
        


        return 0;
}