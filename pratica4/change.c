#include "change.h"
#include <stdio.h>

void changeIntValues(int value1, int value2){
    int aux;
    aux = value1;
    value1 = value2;
    value2 = aux;
    printf("\nValor 1 = %d\nValor 2 = %d", value1, value2);
}

void changeValues(int *value1, int *value2){ //essa função é capaz de trocar o valor das variáveis,
    int aux;                                 //pois ela acessa a variavel a partir de seu endereço.
    aux = *value1;                           //A função anterior apenas troca os valores em variáveis de escopos diferentes, já essa troca o valor real das variáveis;
    *value1 = *value2;
    *value2 = aux;
    printf("\nValor 1 = %d\nValor 2 = %d", *value1, *value2);

}

