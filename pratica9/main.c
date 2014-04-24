#include <stdio.h>
#include "redesocial.h"

void main() {
	initM(0);
	popularRedeSocialAleatoriamente(0.6);
	imprimirRedeSocial();
	int n = numAmigosEmComum(2,4);
	printf("\nnumero de amigos em comum entre 2 e 4: %d", n);
	//se voce eh forte, remova o comentario da linha abaixo
	printf("\ncoef. de aglomeracao da pessoa 2 eh: %f", coeficienteAglomeracao(2));
	getch();
}
 
