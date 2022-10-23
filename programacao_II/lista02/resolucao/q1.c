#include<stdio.h>

int main(){


        int m = 300;
        float fx = 300.60006;
        char cht = 'z';

        int *Pt1 = &m;
        float *Pt2 = &fx;
        char *Pt3 = &cht;


        printf("\nPonteiros: Demonstracao dos operadores & e *\n\n");
        printf("m = %d\n" ,m);
        printf("fx = %f\n" ,fx);
        printf("cht = %c\n" ,cht);

        printf("\n\nUtilizando o operador &:\n");
        printf("endereco de m = %p\n" ,&m);
        printf("endereco de fx = %p\n" ,&fx);
        printf("endereco de cht = %p\n" ,&cht);


        printf("\n\nUtilizando o operador & e *:\n");
        printf("endereco de m = %d\n" ,*(&m));
        printf("endereco de fx = %f\n" ,*(&fx));
        printf("endereco de cht = %c\n" ,*(&cht));

        printf("\n\nUtilizando as variaveis de ponteiro\n");
        printf("endereco de m = %p\n" ,Pt1);
        printf("endereco de fx = %p\n" ,Pt2);
        printf("endereco de cht = %p\n" ,Pt3);

        printf("\n\nUtilizando as variaveis de ponteiro\n");
        printf("endereco de m = %d\n" ,*Pt1);
        printf("endereco de fx = %f\n" ,*Pt2);
        printf("endereco de cht = %c\n" ,*Pt3);




        return 0;
}