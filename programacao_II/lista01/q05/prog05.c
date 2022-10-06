/*Implemente um sistema de sorteio de cartas baseado em baralho.
Considere que cada carta tem um naipe e seu valor associado, ou seja, deverá
usar o sistema de struct. O sistema deve cadastrar dois jogadores. Deve ser
exibido na tela os jogadores e as cinco cartas sorteadas. Considere usar a
função rand() para gerar as cartas aleatórias, não sortear cartas iguais e
utilizar as bibliotecas para guardar as structs.*/
#include<stdlib.h>
#include<stdio.h>
#include <time.h>
#include<string.h>
#include"utils.h"

int main(){

        
        system("@cls||clear");
        jogador j1[2];

        inserirJogador(j1);

        sorteiaCartas(j1);

        return 0;
}