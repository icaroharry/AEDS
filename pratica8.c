#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

double mediaVetor(void *v, int n, char type){
    int i = 0;
    int valorTotal = 0;
    for(i = 0; i < n; i++){
        if(type == "c")
        valorTotal += v[i];
    }
    return valorTotal/n;
}

double desvioPadrao(int v[], int n){
    double media = mediaVetor(v, n);
    double *desvio = malloc(n * sizeof(double));
    int i = 0;
    for(i = 0; i < n ; i++){
        desvio[i] = pow((v[i] - media), 2); //calcula o valor - a media e eleva ao quadrado
        prinft("\n\n\n\n\n\n\n\ %f\n", desvio[i]);
    }
    return mediaVetor(desvio, n);
}

int main(){
    int valores[100];
    int valorAtual;
    int i = 0;
    int maiorValor=-1;
    int menorValor=100;
    //srand (time(NULL));

    //zera todo o vetor
    for (i=0;i<=100;i++)
        valores[i]=0;

    for (i=0;i<=10000;i++){
        valorAtual = rand() % 100;
        valores[valorAtual]++;
    }
    for(i=0; i<=100; i++) {
        if(valores[i] >= maiorValor){
            maiorValor = valores[i];
        }
        if(valores[i] <= menorValor){
            menorValor = valores[i];
        }
    }

    for (i=0;i<=100;i++)
        printf("[%d]:%d\n", i,valores[i]);


    printf("M:%d\nm:%d\nmaiorValor - menorValor = %d\nDesvio Padrao: %f",menorValor, maiorValor, maiorValor - menorValor, desvioPadrao(valores, 100));


    return 0;
}
