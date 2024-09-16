#include <stdio.h>
#include "cs50.c"

int main(void) {
    int tamanho;

    do {
        tamanho = get_int("Digite um valor de 1 a 8: ");
    } while (tamanho < 1 || tamanho > 8);

    for (int i = 1; i <= tamanho; i++) {
        for (int j = 0; j < tamanho - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < i; j++) {
            printf("#");
        }
        
        printf(" ");

        for (int j = 0; j < i; j++) {
            printf("#");
        }

        printf("\n");
    }

    return 0;
}
