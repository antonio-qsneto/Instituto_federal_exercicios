/*Construa uma estrutura aluno com nome, número de matrícula e
curso. Leia do usuário a informação de 5 alunos, armazene em vetor dessa
estrutura e imprima os dados na tela.*/
#include<stdio.h>
#include<string.h>


struct aluno
{
        char nome[30];
        int matricula;
        char curso[20];
}alunos[5];

int main(){

        for (int i = 0; i < 5; i++)
        {
                printf("\n--------- Aluno numero %d ----------\n\n", i+1);
                printf("Entre com o nome do aluno: ");
                fgets(alunos[i].nome, 30, stdin);

                printf("Entre com a matricula do aluno: ");
                scanf("%d", &alunos[i].matricula);

                printf("Entre com o curso do aluno: ");
                getchar();
                fgets(alunos[i].curso, 20, stdin);

        }

        for (int i = 0; i < 5; i++)
        {
                printf("\n--------- Aluno numero %d ----------\n\n", i+1);
                printf("aluno %s, matricula %d, curso %s", alunos[i].nome, alunos[i].matricula, alunos[i].curso);

        }
        


        return 0;
}