#include<string.h>
#include<stdio.h>

typedef struct{
        char faces;
        char nipes[4][8];
}cartas;

typedef struct{
        cartas cards[5];
        char nome[10];
}jogador;

void inserirJogador(jogador j[]){
        for (int i = 0; i < 2; i++)
        {
                printf("Entre com o %io jogador: ", i+1);
                scanf("%s", &j[i].nome);
        }
}


void sorteiaCartas(jogador player[]){

        // gerando a semente do numero aleatorio
        srand(time(NULL));

        //Padroes das cartas
        char faces[13] = {'A', '2', '3', '4', '5', '6', '7', '8', '9','X', 'j', 'Q', 'K'};
        char nipes[4][8] = {"ESPADAS", "PAUS", "COPAS", "OURO"};

        printf("\n");       


        // primeiro for percorre os dois jogadores, ou seja o array player de 2 posicoes
        for (int i = 0; i < 2; i++)
        {
                // exibe o nome dos jogadores passados anteriormente
                printf("%s ", player[i].nome);


                // loop que percorre o array do tipo cards e insere os valores aleatorios
                for (int j = 0; j < 5; j++)
                {       
                        
                        // guarda no array player->cards->nipe e faces uma carta com uma posicao aleatoria escolhida
                        strcpy(player[i].cards[j].nipes[0],  nipes[rand()%4]);
                        //player[i].cards[j].faces = faces[rand()%13];
                        char face_x = faces[rand()%13];

                        // loop para verificar se existe cartas iguais para o mesmo jogador. Se existir, ele gera um novo e guarda
                        for (int l = 0; l < 5; l++)
                        {
                                if (player[i].cards[l].faces == face_x)
                                {
                                        player[i].cards[l].faces = faces[rand()%13];
                                }else{
                                        player[i].cards[j].faces = face_x;
                                } 
                        }

                        // loop para verificar se existem cartas iguais entre os jogadores
                        for (int k = 0; k < 5; k++)
                        {
                                if (player[i].cards[j].faces == player[i+1].cards[k].faces)
                                {
                                        player[i].cards[j].faces = faces[rand()%13];
                                }else{
                                        player[i].cards[j].faces = faces[rand()%13];
                                }
                        }

                        
                        // imprime todos os dados
                        printf("[%c %s]", player[i].cards[j].faces, player[i].cards[j].nipes);
                        
                }
                printf("\n\n");
        }

}