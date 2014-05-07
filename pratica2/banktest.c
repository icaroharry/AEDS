#include <math.h>
#include <stdio.h>
#include "bank.h"

int main() {
    float conta = 0;
    conta = deposit(conta, 100);
    conta = readjustment(conta);
    //mes 2
    conta = deposit(conta, 49.50);
    conta = readjustment(conta);
    //mes 3
    conta = withdrawal(conta, 15);
    conta = readjustment(conta);
    //mes 4
    conta = readjustment(conta);
    //mes 5
    conta = deposit(conta, 90.15);
    conta = readjustment(conta);
    //resultado final
    printf("O saldo final eh de: R$%.2f\n", conta);
    return 0;
}
