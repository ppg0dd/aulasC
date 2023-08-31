//1- Escrever um algoritmo em C para exibir os múltiplos de 3 compreendidos no intervalo: [3 100].
#include <stdio.h>

int main(void)
{
    int a = 3, i = 1;
    
    while(i*a < 100) {
        printf("%d ", i*a);
        i++;
    }

    return 0;
}

/*2- Escrever um algoritmo em C para exibir os múltiplos de 11 e a soma dos múltiplos de 11, em ordem
decrescente (inversa), compreendidos entre o intervalo: [300 400].*/
#include <stdio.h>
int main(void)
{
    int i = 11, a = 100;
    while (i*a > 300) {
        if(i*a < 400) {
        printf("%d ", i*a);
        }
        a--;
    }
    
    return 0;
}
