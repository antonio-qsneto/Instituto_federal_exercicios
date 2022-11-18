#include<stdio.h>
#include<string.h>
#include<stdlib.h>
  
void compareFiles(FILE *file1, FILE *file2)
{

    char ch1 = getc(file1);
    char ch2 = getc(file2);
  
    int error = 0, pos = 0, line = 1;
  
    while (ch1 != EOF && ch2 != EOF)
    {
        pos++;
  
        if (ch1 == '\n' && ch2 == '\n')
        {
            line++;
            pos = 0;
        }
  

        if (ch1 != ch2)
        {
            error++;
            printf("Linha numero : %d posicao : %d \n", line, pos);
        }
  
        ch1 = getc(file1);
        ch2 = getc(file2);
    }
  
    printf("Total de erros : %d\t", error);
}
  
// Driver code
int main()
{

    FILE *file1 = fopen("file1.txt", "r");
    FILE *file2 = fopen("file2.txt", "r");
  
    if (file1 == NULL || file2 == NULL)
    {
       printf("Error : Files not open");
       exit(0);
    }
  
    compareFiles(file1, file2);
  
    // closing both file
    fclose(file1);
    fclose(file2);
    return 0;
}