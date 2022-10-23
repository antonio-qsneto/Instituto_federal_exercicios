/*
Faça um programa que leia os dados de 10 alunos (Nome, matrí-
cula, Média Final), armazenando-os em um vetor. 
Uma vez lidos os dados, divida estes dados em 2 novos vetores, o vetor dos aprovados e o vetor dos 
reprovados, considerando a média mínima para a aprovação como sendo 5.0.
Exibir na tela os dados do vetor de aprovados, seguido dos dados do vetor
de reprovados.*/

#include<stdio.h>
#include<stdlib.h>
#include"utils.h"

int main(){
        
        usuarios alunos[5];
        aprov aprovados[5];
        reprov reprovados[5];

        insertUsers(alunos);
        categorization(alunos, aprovados, reprovados, 5);
        show(aprovados, reprovados, 5);



        return 0;
}