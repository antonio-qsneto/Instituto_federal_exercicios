#include <stdio.h>
long addTwoNumbers(long *, long *);
 
int main()
{
   long fno, sno, sum;
   
   printf("\n\n Pointer : Adicionando dois numeros usando chamada por referencia:\n"); 
   printf("-------------------------------------------------------\n");   
 
   printf(" Entre com o primeiro nuemro : ");
   scanf("%ld", &fno);
   printf(" Entre com o segundo numero : ");
   scanf("%ld", &sno);   
   sum = addTwoNumbers(&fno, &sno);
   printf(" a soma de %ld e %ld  eh %ld\n\n", fno, sno, sum);
   return 0;
}
long addTwoNumbers(long *n1, long *n2) 
{
   long sum;
   sum = *n1 + *n2;
   return sum;
}