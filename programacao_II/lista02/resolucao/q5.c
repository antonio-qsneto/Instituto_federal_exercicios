#include <stdio.h>
void swapNumbers(int *x,int *y,int *z);
int main()
{
    int e1,e2,e3;
	printf("\n\n Pointer : Trocando os elementos por referencia :\n"); 
	printf("------------------------------------------------------\n");	
    printf(" entre com o primeiro numero : ");
    scanf("%d",&e1);
	printf(" entre com o segundo numero : ");
    scanf("%d",&e2);
	printf(" entre com o terceiro numero : ");
    scanf("%d",&e3);
	
	
    printf("\n Os valores antes da troca :\n");
    printf(" element 1 = %d\n element 2 = %d\n element 3 = %d\n",e1,e2,e3);
    swapNumbers(&e1,&e2,&e3);
    printf("\n Os valores depois da troca :\n");
    printf(" element 1 = %d\n element 2 = %d\n element 3 = %d\n\n",e1,e2,e3);
    return 0;
}
void swapNumbers(int *x,int *y,int *z)
{
    int tmp;
    tmp=*y;
    *y=*x;
    *x=*z;
    *z=tmp;
}