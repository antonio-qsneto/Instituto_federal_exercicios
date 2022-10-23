#include <stdio.h>

/* Swap function declaration */
void swap(int * num1, int * num2);

int main()
{
    int num1, num2;

    /* Input numbers */
    printf("Entre com dois numeros: ");
    scanf("%d%d", &num1, &num2);

    /* Print original values of num1 and num2 */
    printf("Antes da troca:\n");
    printf("valor de num1 = %d \n", num1);
    printf("valor de num2 = %d \n\n", num2);

    /* Pass the addresses of num1 and num2 */
    swap(&num1, &num2);

    /* Print the swapped values of num1 and num2 */
    printf("Depois da troca:\n");
    printf("valor de num1 = %d \n", num1);
    printf("valor de num2 = %d \n\n", num2);

    return 0;
}



void swap(int * num1, int * num2)
{
    int temp;

    // Copy the value of num1 to some temp variable
    temp = *num1;

    // Copy the value of num2 to num1
    *num1= *num2;

    // Copy the value of num1 stored in temp to num2
    *num2= temp;

    printf("Depois da troca na funcao swap");
    printf("valor de num1 = %d \n", *num1);
    printf("valor de num2 = %d \n\n", *num2);
}