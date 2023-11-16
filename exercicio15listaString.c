/*15) Escrever um programa que leia 100 palavras (uma de cada vez) e concatene (CAT) em um Texto
Abreviação somente as três primeiras letras de cada palavras. Exibir ao final o Texto Abreciação*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void leitura (char *a);
void primeirasLetras (char *b, char *c);

int main (void) {
    char palavra [21];
    char letras [4];
    char textoAbreviacao [301];
    
    for (int i = 0; i < 5; i ++) {
        leitura(palavra);
        primeirasLetras(palavra, letras);
        
        strcat(textoAbreviacao, letras);
    }
    printf(textoAbreviacao);
    
    
    //system("pause");
    return 0;
}

void leitura (char *a) {
    printf("Digite uma palavra: ");
    scanf(" %20[^\n]", a);
}

void primeirasLetras (char *b, char *c) {
    int i;
    for (i = 0; i < 3; i ++) {
        b[i] = c[i];
    }
}





