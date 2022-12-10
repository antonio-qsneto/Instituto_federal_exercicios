#include<stdio.h>

#define MAX 100

int main(){

        FILE *file;
        FILE *file2;
        char entrada[MAX];
        int num;

        printf("Entre com o nome do arquivo: ");
        scanf("%s", entrada);

        file = fopen(entrada, "r");
        file2 = fopen("saida_pares.txt", "w");

        if (file == NULL || file2 == NULL)
        {
                printf("Nao foi possivel abrir o arquivo\n");
                return 0;
        } 

        while (fgetc(file) != EOF)
        {
                fscanf(file, "%d", &num);
                if (num % 2 == 0)
                {
                        fprintf(file2, "%d\n", num);
                }
        }
        
        fclose(file);
        fclose(file2);

        return 0;
}