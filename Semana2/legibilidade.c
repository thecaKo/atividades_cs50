#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include "../cs50.h"
#include <math.h>


int main(void) {

    int palavras = 0, letras = 0, frases = 0, indiceRounded = 0;
    float indice, mediaLetras, mediaFrases;
    string texto = get_string("Texto: ");
    bool dentroDaPalavra = false;
    
    for(int i = 0; i < strlen(texto); i++) {
        char c = texto[i];
        if(isalpha(c)) {
            letras++;
            dentroDaPalavra = true;

        } 
        else if (c == ' ' || c == '\n' || c == '\t') {
            if(dentroDaPalavra) {
                palavras++;
                dentroDaPalavra = false;
            }
        } 
        else if(c == '.' || c == '!' || c == '?') {
            frases++;
            if (dentroDaPalavra) {
                palavras++;
                dentroDaPalavra = false;
            }
        }    

    } 


    mediaLetras = ((float)letras / (float)palavras) * 100;
    mediaFrases = ((float)frases / (float)palavras) * 100;

    indice = 0.0588 * mediaLetras - 0.296 * mediaFrases - 15.8;
    indiceRounded = round(indice);
    
    if (indiceRounded >= 16) {
        printf("Grade 16+\n");
    } else if (indiceRounded < 1) {
        printf("Antes da Grade 1\n");
    } else {
        printf("Grade %d\n", indiceRounded);
    }

    return 0;
}