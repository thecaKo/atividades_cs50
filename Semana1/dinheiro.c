#include <stdio.h>
#include "cs50.c"

int main(void) {

    float valor;
    int moedas = 0, troco;

    do {
        valor = get_float("Digite o valor: ");
    } while(valor <= 0);


    troco = valor * 100;


    moedas += troco / 25;
    troco %= 25;

    moedas += troco / 10;
    troco %= 10;

    moedas += troco / 5;
    troco %= 5;

    moedas += troco / 1;
    troco %= 1;
    
    printf("%d\n", moedas);

    return 0;
}
