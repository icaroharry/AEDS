#include "change.h"
#include <stdio.h>


int main(){
    int a = 23, b = 45, c = 46, d = 1923;
    int *pc, *pd;
    pc = &c;
    pd = &d;
    changeIntValues(a, b);
    printf("\nValor nativo a = %d\nValor nativo b = %d", a, b);
    changeValues(pc ,pd);
    printf("\nValor nativo c = %d\nValor nativo d = %d", c, d);
    return 0;
}
