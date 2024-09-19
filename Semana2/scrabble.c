#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include "../cs50.h"

int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 69699, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    string texto = get_string("Texto: ");
    string texto2 = get_string("Texto: ");

    int score1 =compute_score(texto);
    int score2 =compute_score(texto2);


    if(score1 > score2) {
        printf("Jogador 1 venceu!");
    }else if (score2 > score1) {
        printf("Jogador 2 venceu!");
    }else if (score1 == score2) {
        printf("Empate!");
    } else {
        printf("Erro interno do sistema.");
    }
}

int compute_score(string word)
{
    char c;
    int pontos = 0;
    for(int i = 0; i < strlen(word); i++) {
        if(isalpha(tolower(word[i]))) {
            c = tolower(word[i]);
        } else {
            c = c;
        }
        if(c > 'a' || c < 'z') {
            pontos += POINTS[c - 97];
        }
    }
    return pontos;
}
