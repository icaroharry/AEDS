#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "guerreiro.h"

id = 0;

int rolaDados(){
    int somaDados=0;
    int i;
    //srand(time(NULL)); // randomize seed
    for(i = 0; i< 3; i++)
        somaDados += rand() % 6 + 1;
    return somaDados;

}

void criaGuerreiro(guerreiro *g){
    id++;
    (*g).id_jogador = id;
    (*g).ataque = rolaDados();
    (*g).defesa = rolaDados();
    (*g).pontos_de_vida = rolaDados();
}

void ataca(guerreiro *g, guerreiro *h){
    int golpe, escudo, dano;
    golpe = (*g).ataque + rolaDados();
    escudo = (*h).defesa + rolaDados();
    dano = golpe - escudo;
    if(dano > 0)
        (*h).pontos_de_vida -= (golpe-escudo);
    else dano = 0;
    printf("Guerreiro %d ataca Guerreiro %d\n", (*g).id_jogador, (*h).id_jogador);
    printf("Golpe: %d\n Escudo: %d\n Dano: %d\n\n", golpe, escudo, dano);
}