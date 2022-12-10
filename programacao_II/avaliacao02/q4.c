#include<stdio.h>

#define MAX 100

int main(){


        // caminho relativo temporario/arquivo/positivos

        FILE *file, *file2;
        char arquivo[MAX];
        int num, soma=0;

        printf("Entre com o nome do arquivo: ");
        scanf("%s", arquivo);

        file = fopen(arquivo, "r");
        file2 = fopen("../temporario/arquivo/soma.txt", "w");


        if (file == NULL || file2 == NULL)
        {
                printf("Nao foi possivel abrir os arquivos\n");
                return 0;
        }

        while (fgetc(file) != EOF)
        {
                fscanf(file, "%d", &num);
                soma+=num;
        }
        fprintf(file2, "%d", soma);

        printf("\n\nA soma foi efetuada e registrada no arquivo!");

        return 0;
}