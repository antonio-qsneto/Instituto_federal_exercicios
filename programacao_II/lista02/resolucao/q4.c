#include <stdio.h>
int calculateLength(char*);
 
void main() 
{
   char str1[25];
   int l;
	printf("\n\n Pointer : Calculando o tamanho de uma string :\n"); 
	printf("---------------------------------------------------\n");
   
   printf(" entre com a string : ");
   fgets(str1, sizeof str1, stdin);
   
   l = calculateLength(str1);
   printf(" O tamanho passado da string %s eh : %d ", str1, l-1);
   printf("\n\n");

}
 
int calculateLength(char* ch) // ch = base address of array str1 ( &str1[0]  )
{
   int ctr = 0;
   while (*ch != '\0') 
   {
      ctr++;
      ch++;
   }
   return ctr;
}