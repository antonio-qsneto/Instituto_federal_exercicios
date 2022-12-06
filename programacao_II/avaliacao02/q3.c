#include <stdio.h>
#include <stdlib.h>


/* Declaracoes das funcoes */
int isEven(const int NUM);
int isPrime(const int NUM);


int main()
{
    FILE * fPtrIn,
         * fptrPar, 
         * fptrImpar;

    
    int num, success;
    char file_name[50];

    printf("Entre com o nome do arquivo: ");
    scanf("%s", file_name);

    fPtrIn   = fopen(file_name, "r");
    fptrPar = fopen("even-numbers.txt" , "w");
    fptrImpar  = fopen("odd-numbers.txt"  , "w");


    if(fPtrIn == NULL || fptrPar == NULL || fptrImpar == NULL)
    {
        printf("Nao eh possivel abrir o arquivo.\n");
        return 0;
    }


    printf("Arquivo aberto com sucesso. Lendo o conteudo do arquivo...\n\n");

    while (fscanf(fPtrIn, "%d", &num) != -1)
    {

        if (isEven(num))
            fprintf(fptrPar, "%d\n", num);
        else
            fprintf(fptrImpar, "%d\n", num);

    }


    fclose(fPtrIn);
    fclose(fptrPar);
    fclose(fptrImpar);

    printf("Data written to files successfully.");


    return 0;
}


/**
 * A funcao checa se o numero passado eh par ou nao. O programa
 * return 1 if given number is odd, otherwise return 0.
 * retorna 1 se passado um numero impar. Se nao, retorna 0
 */
int isEven(const int NUM)
{
    return !(NUM & 1);
}