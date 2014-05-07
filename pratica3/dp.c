#include <math.h>
#include "dp.h"

double cauchy(double x){
    return 1/(M_PI*(1 + pow(x, 2)));
}

double gumbel(double x, double mi, double beta){
    double z = (x - mi)/beta;
    return (1/beta)*exp(-1*(z+exp(-z)));
}

double laplace(double x, double mi, double b){
    return 1/(2*b)*exp(-1*fabs(x-mi)/b);
}
