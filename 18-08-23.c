/*Exibir na tela, contagem progressiva e
regressiva, os números PARES entre [0, 100].*/

#include <stdio.h>

int main(void)
{
    printf("\n\tContagem progressiva: \n\n");
    for(int i = 2; i <= 100; i += 2){
        printf(" %i ",i);
    }
    printf("\n\n\tContagem progressiva: \n\n");
    for(int i = 100; i > 0; i -= 2) {
        printf(" %i ", i);
    }
    
    return 0;
}

/* Enumerar e exibir na tela todas as sugestões de senhas numéricas
de 4 digitos com a seguinte "criptografia fraca":
-> ÍMPARES e (AND) MÚLTIPLAS DE 39.
VALOR INICIAL.           : START : 1000
VALOR FINAL              : STOP  : 9999*/

#include <stdio.h>

int main(void)
{
    for (int senha = 1000; senha < 9999; senha++){
        if (senha % 39 == 0 && senha % 2 == 1) {
            printf("criptografia fraca: %d\n", senha);
        }
    }
    
    return 0;
}


/* Enumerar e exibir na tela os números ímpares entre [X,  X3 ]. 
Onde X é um valor >= 1 lido do usuário.

VALOR INICIAL - START: X

VALOR FINAL - STOP:  X3
*/
#include <stdio.h>

int main(void)
{  
    int x, contador;
    printf("Digite um valor: ");
    scanf("%d", &x);
    contador = x;
    printf("%i ", contador);
    while (contador < x*x*x - 1) {
        if (contador % 2 == 1) {
            contador += 2;
        } else {
            contador += 1;
        }
        printf("%d ", contador);
    } 
    if(x*x*x % 2 == 0) {
        printf("%d", x*x*x);
    }
    
    return 0;
}
