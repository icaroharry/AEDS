#include "change.h"
#include <stdio.h>

void changeIntValues(int value1, int value2){
    int aux;
    aux = value1;
    value1 = value2;
    value2 = aux;
    printf("\nValor 1 = %d\nValor 2 = %d", value1, value2);
}

void changeValues(int *value1, int *value2){ //essa fun��o � capaz de trocar o valor das vari�veis,
    int aux;                                 //pois ela acessa a variavel a partir de seu endere�o.
    aux = *value1;                           //A fun��o anterior apenas troca os valores em vari�veis de escopos diferentes, j� essa troca o valor real das vari�veis;
    *value1 = *value2;
    *value2 = aux;
    printf("\nValor 1 = %d\nValor 2 = %d", *value1, *value2);

}

