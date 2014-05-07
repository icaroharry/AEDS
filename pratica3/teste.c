//--include
#include "dp.h"

int main(){

    printf("Cauchy: %f\n", cauchy(-2));
    printf("Gumbel: %f\n", gumbel(0, 0.5, 2));
    printf("Laplace: %f\n", laplace(-6, -5, 4));
    return 0;
}

