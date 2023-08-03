#include <stdio.h>

int main()
{
    printf("*************\n");
    printf("* Bem-vindo *\n");
    printf("*************\n \n");
    
    int numerosecreto, chute, ganhou, tentativa;
    numerosecreto = 28;
    ganhou = 0;
    tentativa = 1;
    
    while (ganhou == 0){
        printf("Tentativa %d: ", tentativa);
        
        scanf("%d", &chute);
        printf("Seu chute foi %d \n", chute);
        
        if (chute < 0) {
                printf("Você não pode chutar números negativos!!!\n");
                tentativa--;
                continue;
        }
        
        int acertou = chute == numerosecreto;
        int maior = chute > numerosecreto;
        
        
        
        if(acertou){
            printf("Parabéns! Você acertou!");
            ganhou = 1;
            printf("Você acertou em %d tentativas\n", tentativa);   
        } 
        else if (maior) {
                printf("Seu chute foi maior que o numero secreto, tente novamente.\n");
            }
        else{
                printf("Seu chute foi menor que o numero secreto, tente novamente.\n");
            }
         
        tentativa++;
        }
    }
