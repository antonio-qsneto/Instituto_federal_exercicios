#include<stdio.h>

#define BUFFER_SIZE 1000

void deleteLine(FILE *srcFile, FILE *tempFile, int line){

        char buffer[BUFFER_SIZE];
        int count = 1;

        while ((fgets(buffer, BUFFER_SIZE, srcFile)) != NULL)
        {
               if (line != count)
               {
                        fputs(buffer, tempFile);
               }
                count++;
        }
        

}