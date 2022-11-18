#include <stdio.h>
#include <stdlib.h>


int main()
{
    
    FILE * file;

    char ch;

    file = fopen("data/file1.txt", "r");


    if(file == NULL)
    {

        printf("Nao foi possivel abrir o arquivo!\n");
        return 0;
    }


    /* File open success message */
    printf("Arquivo aberto com sucesso! \n\n");

    do 
    {
        /* le cada caracter do arquivo e guarda em ch */
        ch = fgetc(file);

        /* printa no terminal o caractere */
        putchar(ch);

    } while(ch != EOF); 


    fclose(file);


    return 0;
}