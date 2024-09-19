#include <stdio.h>
#include <ctype.h>
#include "../cs50.h"
#include <string.h>

int main(int argc, string argv[]) {

    if (strlen(argv[1]) != 26) {
        printf("Use: ./substituicao <key with 26 characters>\n");
        return 1;
    }


    string chave = argv[1];
    string texto = get_string("Texto: ");
    char trad, letra;
    

    for(int i = 0; i < strlen(texto); i++) {

        if(isalpha(texto[i])) {
            if(islower(texto[i])) {
                letra = texto[i] - 'a';
                trad = tolower(chave[letra]);
            } else {
                letra = texto[i] - 'A';
                trad = chave[letra];
            }} else {
                trad = texto[i];
            }
        printf("%c", trad);
    }
    
    return 0;
}