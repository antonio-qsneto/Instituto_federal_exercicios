/*Crie uma estrutura representando os alunos de um determinado
curso. A estrutura deve conter a matrícula do aluno, nome, nota da primeira
prova, nota da segunda prova e nota da terceira prova.

TODO:
• Permita ao usuário entrar com os dados de 5 alunos.   ✔
• Encontre o aluno com maior nota da primeira prova.    ✔
• Encontre o aluno com maior média geral.               ✔
• Encontre o aluno com menor média geral                ✔
• Para cada aluno diga se ele foi aprovado ou
reprovado, considerando o valor 6 para aprovação.       ✔
*/

#include<stdio.h>
#include<string.h>
#include"utils.h"

int main(){

        
        struct usuarios alunos[5];
        insertUsers(alunos);
        uploadData(alunos);
        results(alunos);
        isAproved(alunos);

        return 0;

}