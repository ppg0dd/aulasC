//cálculo IMC

#include <stdio.h>

int main(void)
{
    float H, M, IMC;
    printf("Digite o seu peso (em kg):\n");
    scanf("%f", &M);
    printf("Digite a sua altura (em metros, trocando a vírgula pelo .):\n");
    scanf("%f", &H);
    IMC = M / (H*H);
    printf("Seu IMC é %.2f\n\n", IMC);
    if (IMC < 18.5) {
        printf("Você está em estado de magreza, por favor procure um médico.");
    } else if(IMC < 24.9) {
        printf("Você está com um IMC normal, parabéns!");
    } else if(IMC < 29.9) {
        printf("Você está com sobrepeso, busque se exercitar e melhorar a alimentação.");
    } else if(IMC < 34.9) {
        printf("Você está com obesidade grau I, busque cuidar da sua saúde para que esse quadro não agrave.");
    } else if(IMC < 39.9) {
        printf("Você está com obesidade grau II, procure um médico para realizar um acompanhamento para melhorar a saúde");
    } else {
        printf("Você está com obesidade grau III, por favor procure um médico.");
    }
    
    return 0;
}
