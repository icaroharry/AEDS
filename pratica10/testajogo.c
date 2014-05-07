#include "guerreiro.h"

int main(){
    guerreiro g1, g2;
    int vencedor;

    criaGuerreiro(&g1);
    criaGuerreiro(&g2);

    while(1){
        ataca(&g1, &g2);
        if(g2.pontos_de_vida>0){
            ataca(&g2, &g1);
            if(g1.pontos_de_vida <= 0){
                vencedor = g2.id_jogador;
                break;
            }

        }
        else{
            vencedor = g1.id_jogador;
            break;
        }
    }
    printf("Vencedor: %d\n", vencedor);
    return 0;
}