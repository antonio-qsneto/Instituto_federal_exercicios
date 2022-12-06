#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1000

/* Declaracao das funcoes */
void deleteLine(FILE *srcFile, FILE *tempFile, const int line);
void printFile(FILE *fptr);


int main()
{
    FILE *srcFile;
    FILE *tempFile;

    char path[100];

    int line;


    printf("Entre com o nome do arquivo: ");
    scanf("%s", path);

    printf("Entre com o numero da linha para remover: ");
    scanf("%d", &line);


    
    srcFile  = fopen(path, "r");
    tempFile = fopen("delete-line.tmp", "w");


    if (srcFile == NULL || tempFile == NULL)
    {
        printf("Unable to open file.\n");
        printf("Please check you have read/write previleges.\n");

        exit(EXIT_FAILURE);
    }



    printf("\nFile contents before removing line.\n\n");
    printFile(srcFile);


    // Move o ponteiro do arquivo para o comeco
    rewind(srcFile);

    // Deleta a linha que foi passada
    deleteLine(srcFile, tempFile, line);


    fclose(srcFile);
    fclose(tempFile);


    /* Deleta o arquivo fonte e renomeia o arquivo temporario com o nome do original */
    remove(path);
    rename("delete-line.tmp", path);


    printf("\n\n\nConteudo do arquivo dos de remover a linha %d.\n\n", line);

    // Abre o arquivo fonte e exibe o conteudo
    srcFile = fopen(path, "r");
    printFile(srcFile);
    fclose(srcFile);

    return 0;
}


/**
 * Exibe o conteudo do arquivo
 */
void printFile(FILE *fptr)
{
    char ch;

    while((ch = fgetc(fptr)) != EOF)
        putchar(ch);
}



/**
 * Funcao que deleta a linha passada
 */
void deleteLine(FILE *srcFile, FILE *tempFile, const int line)
{
    char buffer[BUFFER_SIZE];
    int count = 1;

    while ((fgets(buffer, BUFFER_SIZE, srcFile)) != NULL)
    {
        /* If current line is not the line user wanted to remove */
        if (line != count)
            fputs(buffer, tempFile);

        count++;
    }
}