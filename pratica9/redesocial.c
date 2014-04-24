#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "redesocial.h"
//#define NUM_PESSOAS 45


int M[NUM_PESSOAS][NUM_PESSOAS];

void initM(int n){
	int i, j;
	for(i = 0; i < NUM_PESSOAS; i++)
		for(j = 0; j< NUM_PESSOAS; j++)
			M[i][j] = n;
}

float random_float() {
	return (float)rand()/RAND_MAX;
}

void adicionar_amizade(int i, int j) {
	if(i!=j){
		M[i][j] = 1;
		M[j][i] = 1;
	}	

}

void popularRedeSocialAleatoriamente(float P) {
	int i,j;
	for(i = 0; i < NUM_PESSOAS; i++){
		for(j = 0; j< NUM_PESSOAS; j++){
			if(i==j)
				continue;
			else {
				if(random_float() < P){
					M[i][j] = 1;	
					M[j][i] = 1;
				}
			}
		}
	}

}
void imprimirRedeSocial() {
	int i, j;
	printf("  ");
	for(i = 0; i < NUM_PESSOAS; i++)
		printf("%d ", i);
	printf("\n");	
	for(i = 0; i < NUM_PESSOAS; i++) {
		for(j = 0; j< NUM_PESSOAS; j++) {
			if(j == 0)
				printf("%d ", i);
			printf("%d ", M[i][j]);
		}
		printf("\n");
	}

}

int numAmigosEmComum(int v, int u) {
	
	int numAmigos;
	int i, j;
	
	numAmigos = 0;
	for(i = 0; i < NUM_PESSOAS; i++){
		if(M[v][i] == 1 && M[u][i] == 1 && i!=u && i!=v){
			numAmigos++;
		}
	}
	return numAmigos;
}

float coeficienteAglomeracao(int i) {
	int u,v, j;
	int cont = 0;
	int amigosI = 0;
	for(j = 0; j < NUM_PESSOAS; j++){
		if(M[j][i] == 1  && i!=j ){
			amigosI++;
		}
	}
	
	for(u = 0; u < NUM_PESSOAS; u++){
		if(M[u][i] == 1 && i!=u ){
			for(v = u+1; v< NUM_PESSOAS; v++){
				
				if(M[v][i] == 1 && M[u][v] == 1 && i!=v && v!=u && i!=u){
					cont++;
					
				}
			}
		}
	}
	
	printf("\n\n %d %d %d\n\n\n",amigosI, cont, amigosI*(amigosI - 1)/2 );
	return (float)cont/(float)(amigosI*(amigosI - 1)/2);
	
}



