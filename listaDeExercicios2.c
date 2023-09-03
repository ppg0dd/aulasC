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
    int i = 11, a = 100, somador;
    while (i*a > 300) {
        if(i*a < 400) {
        printf("%d ", i*a);
        somador += i*a;
        }
        a--;
    }
    printf("\n%d", somador);
    
    return 0;
}

/*3- Escrever um algoritmo em C para exibir os múltiplos de ƞ compreendidos entre o intervalo:
[LimiteInferior LimiteSuperior] ε N. Sendo que:
✓ {ƞ ∈ N/ ƞ ≥ 2}
✓ {LimiteInferior , LimiteSuperior ∈ N/ LimiteSuperior ≥ LimiteInferior}*/

#include <stdio.h>

int main(void)
{
    int n, limiteInf, limiteSup;
    printf("Digite um número: ");
    scanf("%d", &n);
    if (n < 2) {
        printf("O número deve ser maior ou igual a 2");
        return 0;
    }
    printf("\nDigite o limite inferior: ");
    scanf("%d", &limiteInf);
    printf("\nDigite o limite superior: ");
    scanf("%d", &limiteSup);
    if(limiteSup < limiteInf) {
        printf("O limite superior dever ser maior ou igual ao limite inferior");
        return 0;
    }

    for (int i = 1; i*n <= limiteSup; i++) {
        if (i*n > limiteInf) {
            printf("%d ", i*n);
        }
    }

    return 0;
}




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

/*9- Escrever um algoritmo que leia vários Números N (um por vez) que, no intervalo entre [10 90],
divididos por 5 possuem resto 2. Exiba a soma dos números lidos, parando o programa para N = 0.*/

#include <stdio.h>

int main(void)
{
    int i = 1, a;
    while (i != 0) {
        printf("Digite um número: ");
        scanf("%d", &i);
        if (i >= 10 && i <= 90 && i % 5 == 2) {
            a += i;
        }
    }
    printf("\n%d", a);
    return 0;
}

/*10- Escrever um algoritmo em C para que calcule a média dos números múltiplos de 6 que se encontram no
intervalo de [6, 6x]. Onde x é um (1) único número inteiro positivo (x ≥ 1), lido do usuário.*/

#include <stdio.h>

int main(void)
{
    int x, s;
    printf("Digite um número: ");
    scanf("%d", &x);
    if (x < 1) {
        printf("Digite um valor maior ou igual a 1");
        return 0;
    }
    for (int i = 1; 6*i <= 6*x; i++) {
        s += 6*i;
    }
    printf("%d", s / x);
    return 0;
}


/*11- Escrever um algoritmo em C em que o usuário entre com um número inteiro qualquer {ƞ ∈ Z} e exiba na
tela os 20 números subseqüentes ao que foi digitado pelo usuário.*/

#include <stdio.h>

int main(void)
{
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);
    for(int i = 1; i <= 20; i++) {
        printf("%d ", n+ i);
    }
    return 0;
}

/*12- Os comerciantes das Praias de Vila-Velha querem saber a temperatura média do verão capixaba. Escreva
um algoritmo em C que leia a temperatura diária no verão e exiba a temperatura média da estação
parando o algoritmo quando for digitada uma temperatura fora da estação. Sabe-se que as temperaturas,
na estação de verão Capixaba, ficam acima de 28 °C.*/

#include <stdio.h>

int main(void)
{
    int contador;
    float temp, somador;
    do {
        printf("Digite a temperatura (em °C) do dia: ");
        scanf("%f", &temp);
        if (temp > 28) {
        somador += temp;
        contador++;
        }
    } while (temp > 28);
    printf("A média de temperatura das Praias de Vila-velha foi: %.1f", somador/contador);
    return 0;
}

/*13- Escrever um algoritmo em C, para cada item a seguir, que leia a altura em metros e o sexo (M: para
Masculino ou F: para Feminino) de 50 pessoas. Este algoritmo deverá mostrar na tela:
a) A altura da pessoa mais alta por sexo.
b) Média da altura dos homens e das mulheres.
c) Quantidade de Homens e Mulheres, em porcentagem, com mais de 1.82 metros de altura.*/
#include <stdio.h>
int main(void)
{
    float altura, maiorAltM, maiorAltF, somadorAltM, somadorAltF, contadorM, contadorF;
    char sexo;
    int maisde182M, maisde182F;
    for(int i =0; i < 5; i++) {
        printf("Digite a altura: ");
        scanf("%f", &altura);
        printf("Digite o sexo: ");
        //espaço em branco para pegar um char
        scanf(" %c", &sexo);
        if (sexo == 'M'){
            if (altura > maiorAltM) {
                maiorAltM = altura;
            }
            if (altura > 1.82){
                maisde182M++;
            }
            somadorAltM += altura;
            contadorM++;
        }
        if(sexo == 'F') {
            if (altura > maiorAltF) {
                maiorAltF = altura;
            }  
            if (altura > 1.82){
                maisde182F++;
            }
            somadorAltF += altura;
            contadorF++;
        }
    }
    printf("\nA) Maior altura Masculina: %.2f, Maior altura Feminina: %.2f", maiorAltM, maiorAltF);
    printf("\nB) Média da altura dos Homens: %.2f, Média da altura das Mulheres: %.2f", somadorAltM/contadorM, somadorAltF/contadorF);
    printf("\nC) Homens com mais de 1.82: %.0f%%, Mulheres com mais de 1.82: %.0f%%", (maisde182M/contadorM)*100, (maisde182F/contadorF)*100);
    
    return 0;
}

/*14- Escrever um algoritmo em C que leia o voto de 50 eleitores de um condomínio nos candidatos (1 ou 2 ou
0 (Nulo ou Inválido)) para síndico e exiba na tela, em porcentagem, o resultado da eleição por
candidato e os votos nulos ou inválidos. Crie um Menu de Opções para o eleitor.*/

#include <stdio.h>

int main(void)
{
    int voto, voto1, voto2, votoNulo;
    
    for (int i = 0; i < 50; i++) {
        printf("\nDigite o seu voto:\n(1) Candidato 1.\n(2) Candidato 2.\n(0) Nulo ou inválido.\n");
        scanf("%d", &voto);
        if (voto == 1) {
            voto1++;
        } else if (voto == 2) {
            voto2++;
        } else{
            votoNulo++;
        }
    }
    float totalVotos = voto1+voto2+votoNulo;
    printf("\n\tResultado:\nCandidato 1: %.0f%%\nCandidato 2: %.0f%%\nNulo ou inválido: %.0f%%", voto1*100/totalVotos, voto2*100/totalVotos, votoNulo*100/totalVotos);

    return 0;
}

/*15- Escrever um algoritmo que leia vários números reais (um por um) e exiba, em porcentagem, a
quantidade de positivos e de negativos lidos. Pare o programa quando o usuário digitar ZERO.*/

#include <stdio.h>

int main(void)
{
    int x = 1, positivos, negativos;
    while (x != 0) {
        printf("Digite um número: ");
        scanf("%d", &x);
        if (x > 0) {
            positivos++;
        } else if (x < 0) {
            negativos++;
        }
    }
    float total = (positivos + negativos)*0.01;
    printf("\nPositivos: %.0f%%\nNegativos: %.0f%%", positivos/total, negativos/total);
    return 0;
}

/*16- Escreva um algoritmo que leia 300 números positivos e exiba o menor e o maior: par e ímpar.*/

#include <stdio.h>

int main(void)
{
    int x, maiorPar, maiorImpar, menorPar, menorImpar;

    
    for(int i = 0; i < 300; i++) {
        printf("Digite um número: ");
        scanf("%d", &x);
        
        if (x <= 0) {
            printf("\tPor favor, digite apenas números positivos.\n");
            return 0;
        }
        
        if (x % 2 == 0) {
              if (x > maiorPar) {
                maiorPar = x;
            } if(x < menorPar || menorPar == 0) {
                menorPar = x;
            }
        }
        
        else {
            if (x > maiorImpar) {
                maiorImpar = x;
            } if(x < menorImpar || menorImpar == 0) {
                menorImpar = x;
            }
        }
    }
    printf("\n\tPar\nMaior número: %d\nMenor número: %d\n\tÍmpar\nMaior número: %d\nMenor número: %d", maiorPar, menorPar, maiorImpar, menorImpar);
    return 0;
}

/*17- Escreva um algoritmo que leia vários números reais positivos e exiba o menor deles.
Pare a leitura quando for digitado o número zero.*/

#include <stdio.h>

int main(void)
{
    float x, menorX;
    do {
        printf("Digite um número: ");
        scanf("%f", &x);
        if ((x < menorX || menorX == 0 )&& x > 0) {
            menorX = x;
        }
        
    } while (x != 0);
    
    printf("\nO menor número real positivo digitado foi: %f", menorX);
    
    return 0;
}

/*18- Escreva um algoritmo que leia 100 números ímpares e múltiplos de 7. Exiba a média dos números lidos.*/

#include <stdio.h>

int main(void)
{
    int x, soma;
    float total;
    
    while(total < 5) {
        printf("Digite um número ímpar e múltiplo de 7: ");
        scanf("%d", &x);
        if (x % 2 == 1 && x % 7 == 0) {
            soma += x;
            total++;
        } else {
            printf("\nDigite um número válido!\n");
        }
    }
    printf("A média dos valores digitados foi: %.1f", soma/total);
    
    return 0;
}