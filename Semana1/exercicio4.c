#include <stdio.h>
#include "cs50.c"
#include <math.h>

int main(void) {

    long long credito, copiaCredito;
    int digitos, copiaDigitos, digitoEsq, DigitoDir, somaPar = 0, somaImpar = 0,  posicao = 0;
    int primeiroDigito = 0;

    do {
        credito = get_long_long("Digite o cartao: "); 
    } while (credito <= 0);

    digitos = log10(credito) + 1;

    copiaCredito = credito;
    copiaDigitos = digitos;

    for (int i = digitos; i > 0; i--) {
        digitos = credito % 10;
        credito /= 10;
        primeiroDigito = digitos;

       if (posicao % 2) {
            if (digitos * 2 > 9) {
                DigitoDir = (digitos * 2 ) % 10;
                digitoEsq = (digitos * 2) / 10;
                somaImpar += digitoEsq + DigitoDir;
            } else {
                somaImpar += digitos * 2;
            }
        posicao++;
       } else {
            somaPar += digitos;
            posicao++;
       }
    }


    if ((somaImpar + somaPar) % 10 == 0) {
        if (copiaDigitos == 13 || copiaDigitos == 16) {
            if (primeiroDigito == 4) {
                printf("Visa\n");
            } else if (primeiroDigito == 5) {
                printf("MasterCard\n");
            }
        } else if (copiaDigitos == 15 && primeiroDigito == 3) {
            printf("American Express\n");
        } else {
            printf("Tipo de cartão desconhecido.\n");
        }
    } else {
        printf("Cartão inválido!\n");
    }

    return 0;
}
