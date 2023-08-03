//Acertar o número secreto com IF e Else

#include <stdio.h>

#define NUMERO_DE_TENTATIVAS 5

int main()
{
    printf("*************\n");
    printf("* Bem-vindo *\n");
    printf("*************\n \n");
    
    int numerosecreto, chute;
    numerosecreto = 28;
    
    
    for(int i = 1 ; i <= NUMERO_DE_TENTATIVAS ; i++){
        printf("Tentativa %d de %d: ", i, NUMERO_DE_TENTATIVAS);
        scanf("%d", &chute);
        printf("Seu chute foi %d \n", chute);
        
        if (chute < 0) {
                printf("Você não pode chutar números negativos!!!\n");
                i--;
                
                continue;
        }
        
        int acertou = chute == numerosecreto;
        int maior = chute > numerosecreto;
        int menor = chute < numerosecreto;
        
        
        
        if(acertou){
            printf("Parabéns! Você acertou!");
            break;
        } 
        else if (maior) {
                printf("Seu chute foi maior que o numero secreto, tente novamente.\n");
            }
        else if (menor) {
                printf("Seu chute foi menor que o numero secreto, tente novamente.\n");
            }
        
        }
    }
