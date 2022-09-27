#include<stdio.h>
#include<stdlib.h>

struct usuarios
{
        char nome[20];
        int matricula;
        float media;
};

struct aprovados{
        struct usuarios aprovados[5];
}aprov;

struct reprovados
{
        struct usuarios reprovados[5];
}reprov;

// inserindo os valores na struct
void insertUsers(struct usuarios users[]){
        system("@cls||clear");
        printf("\n\n**** Inserindo usuarios no sistema ****\n\n");
        for (int i = 0; i < 5; i++)
        {
                printf("Nome: ");
                //fgets(users[i].nome, 20, stdin);
                scanf ("%[^\n]%*c", users[i].nome);
                printf("Matricula: ");
                scanf("%d", &users[i].matricula);


                printf("entre com a media final: ");
                scanf("%f", &users[i].media);
                
                printf("\n");
                getchar();
        }
}


void isAproved(struct usuarios users[]){
        for (int i = 0; i < 5; i++)
        {
                if (users[i].media > 5)
                {
                        aprov.aprovados[i] = users[i];
                }
        }
        for (int i = 0; i < 5; i++)
        {
                if(users[i].media < 5){
                        reprov.reprovados[i] = users[i];
                }
        }
        
}

void showResults(){
        printf("\n\nAprovados: \n");
        for (int i = 0; i < 5; i++)
        {
                printf("%s nota %d\n", aprov.aprovados[i].nome, aprov.aprovados[i].media);
        }
        printf("\n\nReprovados: \n");
        for (int i = 0; i < 5; i++)
        {
                printf("%s nota %d\n", reprov.reprovados[i].nome, reprov.reprovados[i].media);
        }
        printf("\n");
}