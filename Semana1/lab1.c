#include <stdio.h>
#include "../cs50.c"

int main(void) {

    int populacaoInicial, populacaoFinal, anos = 0;

    do {
        populacaoInicial = get_int("Populacao inicial: ");
    } while (populacaoInicial < 9);
    do {
        populacaoFinal = get_int("Populacao final: ");
    } while (populacaoFinal < populacaoInicial);


    while (populacaoInicial < populacaoFinal) {
        populacaoInicial = populacaoInicial + (populacaoInicial / 3) - (populacaoInicial / 4);
        anos++;
    }

    printf("Anos: %d\n", anos);

    return 0;
}

