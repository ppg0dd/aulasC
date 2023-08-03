//Faça um programa que imprima todos os números de 1 a 100 usando o laço de repetição for.

#include <stdio.h>

int main () {
	for (int i  = 1; i <= 100 ; i++) {
		printf("%d ", i);
	}
}

//Faça o mesmo programa do exercício anterior, só que dessa vez usando um while.

#include <stdio.h>

int main () {
	int i = 1;
	while (i != 101){
		printf("%d ", i);
		i++;
	}
}

//Escreva um programa que imprima a soma de todos os números de 1 até 100. Ou seja, ele calculará o resultado de 1+2+3+4+...+100.

#include <stdio.h>

int main () {
	int soma = 0;
	for (int i = 1 ; i <= 100 ; i++){
		soma += i;
		printf("%d ", soma);
	}
}
