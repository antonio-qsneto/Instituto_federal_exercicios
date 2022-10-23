#include<stdio.h>
#include<stdlib.h>

typedef struct
{
        char nome[20];
        int matricula;
        float media;
}usuarios;

typedef struct{
        usuarios aprovados;
}aprov;

typedef struct
{
        usuarios reprovados;
}reprov;

// inserindo os valores na struct
void insertUsers(usuarios users[]){
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


// Categorizando os alunos reprovados na struct reprov e reprovados na struct reprov
void categorization(usuarios alunos[], aprov aprovados[], reprov reprovados[], int size){

        int index_aproved = 0, index_reproved;

        for (int i = 0; i < 5; i++)
        {
                if (alunos[i].media >= 5)
                {
                        aprovados[index_aproved].aprovados = alunos[i];
                        index_aproved++;
                }else{
                        reprovados[index_reproved].reprovados = alunos[i];
                        index_reproved++;
                }
        }

        
}


//Exibindo os dados da struct aprov e reprov
void show(aprov aprovados[], reprov reprovados[], int size){
        printf("\nAprovados:\n");
        for (int i = 0; i < 5; i++)
        {
                printf("Aluno(a) %s, nota [%.2f]\n", aprovados[i].aprovados.nome, aprovados[i].aprovados.media);
                if (aprovados[i+1].aprovados.media == 0)
                {
                        break;
                }
                
        }

        printf("\n\nReprovados\n");
        for (int i = 0; i < 5; i++)
        {
                printf("Aluno(a) %s, nota [%.2f]\n", reprovados[i].reprovados.nome, reprovados[i].reprovados.media);
                if (reprovados[i+1].reprovados.media == 0)
                {
                        break;
                }
        }
}

