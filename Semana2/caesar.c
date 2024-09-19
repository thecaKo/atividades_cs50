#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../cs50.h"
#include <ctype.h>

int main(int argc, string argv[]) {
    
    if (!isdigit(argv[1][0]) || argc < 2) {
        printf("Use : ./caesar <int chave>\n");
        return 1;
    }

    string texto = get_string("Texto:");
    int chave = atoi(argv[1]);

    for( int i = 0; i < strlen(texto);i++) {
        char c = texto[i];

        if (isupper(c)) {
            c = 'A' + (c - 'A' + chave) % 26;}
        if (islower(c)) {
            c = 'a' + (c - 'a' + chave) % 26; }
        
        printf("%c", c);
    }
                    

    return 0;
}