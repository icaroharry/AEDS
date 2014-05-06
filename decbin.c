#include <stdio.h>
#include <math.h>

//função recursiva que converte decimal em binário, armazenando o valor binário
//em uma variável inteira
int decToBin(int n, int x){
    if(n==0)
        return;
    else
        return (n%2)*pow(10, x) + decToBin(n/2, x+1);
}

//função que recebe uma variável inteira que representa um valor binário
//e retorna o valor correspondente em decimal
int binToDec(int n, int x){
    if(n==0)
        return;
    else
        return (n%10)*pow(2,x) + binToDec((int)(n/10), x+1);
}


void main()
{
   printf("%d", decToBin(1000, 0));
   printf("\n%d", binToDec(1111101000, 0));
}
