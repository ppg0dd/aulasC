/*Faça um algoritmo em C que leia:

⟼  Medidas de um Tanque de combustível - LAP (em metros):

⟼  Preço por Litros: Álcool e Gasolina.

e exiba na tela o total a ser pago para encher este tanque de combustível:

⟼  Somente com gasolina;

⟼  Somente com Álcool;

⟼  na proporção: 20% de Álcool e 80% de Gasolina.

(Sabendo que,  1 metro3=1000Litros .)*/

#include <stdio.h>

int main()
{
    //Medidas LAP em metros e cálculo do tanque convertido em litros
    float largura, altura, profundidade, tanque, alcool, gasolina;
    printf("Digite a largura do tanque de combustível (em metros): \n");
    scanf("%f", &largura);
    printf("Digite a altura do tanque de combustível (em metros): \n");
    scanf("%f", &altura);
    printf("Digite a profundidade do tanque de combustível (em metros): \n");
    scanf("%f", &profundidade);
    
    tanque = largura*altura*profundidade*1000;
    
    //valor por litro
    printf("Digite o preço do Álcool por litro: \n");
    scanf("%f", &alcool);
    printf("Digite o preço da Gasolina por litro: \n");
    scanf("%f", &gasolina);
    
    printf("\nO preço a ser pago para encher o tanque com gasolina é de R$ %.2f", gasolina*tanque);
    printf("\nO preço a ser pago para encher o tanque com álcool é de R$ %.2f", alcool*tanque);
    
    //Proporção 20% de Álcool e 80% de gasolina
    float pAlcool, pGasolina;
    pAlcool = alcool*(0.2*tanque);
    pGasolina = gasolina*(0.8*tanque);
    
    printf("\nO preço pagando na proporção 20%% de Álcool e 80%% de Gasolina é de R$ %.2f", pAlcool + pGasolina);
}
