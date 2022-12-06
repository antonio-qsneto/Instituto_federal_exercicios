#include <stdio.h>

#define MAX 100

int main(){


    FILE *file;
    FILE *file2;
    char entrada[MAX];
    int num;

     printf("Entre com o nome do arquvo: ");
     scanf("%s", entrada);
     getchar();

    file = fopen(entrada, "r");
    file2 = fopen("saida_pares.txt","w");

    if (file == NULL || file2 == NULL) {
        printf("Arquivo não encontrado");
        return 0;
    }

    //rewind(file);
       while (fgetc(file) != EOF){
            fscanf(file, "%d", &num);
            if (num % 2 == 0){
                fprintf(file2,"%d ", num);
            }
        }

   fclose(file);
   fclose(file2);

    return 0;
}