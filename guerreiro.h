
int id;

typedef struct {
        int id_jogador;
        int ataque;
        int defesa;
        int pontos_de_vida;
    } guerreiro;

int rolaDados();

void criaGuerreiro(guerreiro *g);

void ataca(guerreiro *g, guerreiro *h);


