#include<stdio.h>
#include<stdlib.h>

struct usuarios
{
        char nome[20];
        int matricula;
        float notas[3];
        float result;
};

float maior_media=0, menor_media=0, maior_prova=0;
int indice_maior_media=0, indice_menor_media=0, index_aluno_m_prova;

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

                for (int j = 0; j < 3; j++)
                {
                        printf("entre com a %d nota: ", j+1);
                        scanf("%f", &users[i].notas[j]);
                }
                printf("\n");
                getchar();
        }
}

// Verifica se os alunos estao aprovados ou nao
void isAproved(struct usuarios users[]){
        printf("\n***Resultado***");
        for (int i = 0; i < 5; i++)
        {
                if (users[i].result >= 6)
                {
                        printf("\nAluno(a) %s esta [aprovado]", users[i].nome);
                }else{
                        printf("\nAluno(a) %s esta [reprovado]", users[i].nome);
                }
        }
        
}

// funcao que ira carregar os resultados na struct
void uploadData(struct usuarios users[]){

        for (int i = 0; i < 5; i++)
        {
                //encontra maior nota da prova
                if (users[i].notas[0] > maior_prova)
                {
                        maior_prova = users[i].notas[0];
                        index_aluno_m_prova = i;
                }

                // for Encontrar media
                for (int j = 0; j < 3; j++)
                {
                        //encontrando a media
                        users[i].result += users[i].notas[j]/3;
                }
                
                // maior media geral
                if (users[i].result > maior_media)
                {
                        maior_media = users[i].result;
                        indice_maior_media = i;
                }

                // menor media geral
                if (users[i].result < maior_media)
                {
                        menor_media = users[i].result;
                        indice_menor_media = i;
                }
        }
}

// Exibe os resultados como a atividade exige
void results(struct usuarios users[]){
        printf("\n\n***Resumo de notas***");
        printf("\nA maior primeira nota: aluno %s com nota [%.2f]", users[index_aluno_m_prova].nome, users[index_aluno_m_prova].notas[0]);
        printf("\nA maior nota de media geral: aluno %s com media [%.2f]", users[indice_maior_media].nome, users[indice_maior_media].result);
        printf("\nA menor nota de media geral: aluno %s com media [%.2f]", users[indice_menor_media].nome, users[indice_menor_media].result);
}