/*1) Escrever um programa em C que leia uma string e exiba a string original e ao contrário na tela*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ler (char *p);
void inverter (char *n, char *m);

int main (void) {
    char stringO [21];
    ler (stringO);
    printf("%s\n", stringO);
    
    char stringI [21];
    inverter(stringI, stringO);
    printf("\n%s\n", stringI);
    
    //system("pause");
    return 0;
}

void ler (char *p) {
    printf("Digite uma palavra: ");
    scanf(" %20[^\n]", p);
}

void inverter (char *n, char *m) {
    int i;
    for(i = (strlen(m) - 1); i>= 0; i--) {
        n[strlen(m) - 1 - i] = m[i];
    }
}


/*2) Escrever um programa em C que leia uma mensagem e conte a quantidade de caracteres brancos.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ler (char *n);
void contarB (char *x);

int main (void) {
    char p [41];
    ler (p);
    contarB(p);
    
    
    //system("puase");
    return 0;
}

void ler (char *n) {
    printf("Digite uma frase: ");
    scanf(" %40[^\n]", n);
}

void contarB (char *x) {
    int i, contador = 0;
    for (i = 0; i < strlen(x); i++) {
        if (x[i] == ' ') {
            contador++;
        }
    }
    
    printf("\nO numero de espacos em branco é: %d\n", contador);
}


/*4) Escrever um programa que leia 100 palavras (uma por uma) e inverta somente as N primeiras letras.
Onde o valor de N é inteiro: [ N ≥ 2 𝑒 N ≤ 𝑇𝑎𝑚𝑎𝑛ℎ𝑜 𝑑𝑎 𝑃𝑎𝑙𝑎𝑣𝑟𝑎 ] escolhido pelo usuário.*/

#include <stdio.h>
#include <string.h>

void inverterNPrimeirasLetras(char *palavra, int n) {
    int tamanho = strlen(palavra);
    if (n > 1 && n <= tamanho) {
        char temp [n-1];
        for (int i = 0; i<n; i++) {
            temp[i] = palavra[n - 1 - i];
        }
        for (int i =0; i < n; i++) {
            palavra[i] = temp [i];
        }
    }
}

int main() {
    char palavra1[50], palavra2[50];
    int n;

    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);

    printf("Digite a segunda palavra: ");
    scanf("%s", palavra2);

    printf("Digite o valor de N (inteiro entre 2 e o tamanho da palavra): ");
    scanf("%d", &n);

    printf("\nPalavra 1 invertendo as primeiras %d letras: ", n);
    inverterNPrimeirasLetras(palavra1, n);
    printf("%s\n", palavra1);

    printf("Palavra 2 invertendo as primeiras %d letras: ", n);
    inverterNPrimeirasLetras(palavra2, n);
    printf("%s\n", palavra2);

    return 0;
}
