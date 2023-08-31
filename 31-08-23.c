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

/*3- Escrever um algoritmo em C para exibir os múltiplos de ƞ compreendidos entre o intervalo:
[LimiteInferior LimiteSuperior] ε N. Sendo que:
✓ {ƞ ∈ N/ ƞ ≥ 2}
✓ {LimiteInferior , LimiteSuperior ∈ N/ LimiteSuperior ≥ LimiteInferior}*
Perguntar ao professor*/




/*4- Faça um algoritmo que exiba a soma dos PARES e ÍMPARES compreendidos entre [999 100].*/

#include <stdio.h>

int main()
{
    int a = 0;
    for (int i = 999; i > 100; i--) {
        a += i;
    }
    printf("%d", a);

    return 0;
}


/*5- Escreva um algoritmo em C que leia de 10.000 habitantes de uma pequena cidade se está empregado ou
não e exiba em porcentagem a quantidade de empregados e desempregados desta pequena cidade.*/

#include <stdio.h>

int main()
{
    int voto, votoSim, votoNao;
    for (int i = 0; i < 10000; i++) {
        printf("Você está empregado?\n\t1-Sim\n\t2-Não\n");
        scanf("%d", &voto);
        if(voto == 1) {
            votoSim++;
        } else {
            votoNao++;
        }
    }
    printf("Empregados: %d%% \nDesempregados: %d%%", votoSim*100/(votoSim + votoNao), votoNao*100/(votoSim + votoNao));
    return 0;
}

/*6- Escreva um algoritmo em C que leia o salário em reais (R$) de 1000 clientes de um shopping e exiba na
tela, em porcentagem, a divisão dos clientes por tipo: A, B ou C, conforme a seguir:
✓ A: Maior ou igual a 15 Salários Mínimos ou
✓ B: Menor que 15 Salários Mínimos ou maior ou igual a 5 Salários Mínimos ou
✓ C: Menor que 5 Salários Mínimos.
Declarar o Salário Mínimo (SM: R$ 880.05) como constante com o comando: #define.*/

#include <stdio.h>
#define SALARIO_MINIMO 880.05

int main()
{
    int a, b, c;
    float salario;
    for(int i = 0; i < 1000; i++) {
        printf("Digite seu salário: ");
        scanf("%f", &salario);
        if(salario > 15*SALARIO_MINIMO) {
            a++;
        } else if (salario > 5*SALARIO_MINIMO)  {
            b++;
        } else {
            c++;
        }
    }
    printf("\nGrupo A: %d%% \nGrupo B: %d%% \nGrupo C: %d%%", a*100/(a+b+c), b*100/(a+b+c), c*100/(a+b+c));

    return 0;
}

/*7- Escrever um algoritmo que conte e soma todos os números ímpares que são múltiplos de três e NÃO
múltiplos de 5 que se encontram no intervalo [9 90]. Exiba a Contagem e a Soma destes números.*/
#include <stdio.h>
int main()
{
    int a = 3;
    for(int i = 3; a*i <= 90; i++) {
        if (a*i % 5 != 0){
            printf("%d ", a*i);    
        }
    }
    return 0;
}

/*8- Um marca de sucos que saber a opinião dos seus clientes sobre três diferentes novos “mix” de sabores.
As degustações e votação se realizaram num supermercado durante certo período. Faça um algoritmo em
C, que exiba a porcentagem dos clientes que gostaram da opção: 1: Mix 1, 2: Mix 2 ou 3: Mix 3 de
sabores. Pare o algoritmo quando for digitada a opção zero (0).*/
#include <stdio.h>
int main()
{
    int i = 1, voto, mix1, mix2, mix3;
    while (i != 0) {
        printf("1- Mix 1\n2- Mix 2\n3- Mix 3\n");
        scanf("%d", &voto);
        if (voto == 0) {
          i = 0;  
        } else if (voto == 1) {
            mix1++;
        } else if (voto == 2) {
            mix2++;
        } else {
            mix3++;
        }
    }
    printf("\nMix 1: %d%%\nMix 2: %d%%\nMix 3: %d%%", mix1*100/(mix1+mix2+mix3), mix2*100/(mix1+mix2+mix3), mix3*100/(mix1+mix2+mix3));
    
    return 0;
}
