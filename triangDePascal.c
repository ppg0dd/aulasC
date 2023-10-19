#include <stdio.h>
#include <math.h>

//O �nico problema desse c�digo � que no come�o do tri�ngulo ele imprime  1 1, sendo que era para imprimir apenas 1;

int fatorial (int x);
int combinacao (int n, int p);

int main (void) {
	int linhas;
	printf("Digite quantas linhas voce quer no triangulo de pascal: ");
	scanf("%d", &linhas);
	int i, j;
	for(i = 0; i <= linhas; i++) {
		for(j = 0; j <= linhas; j++) {
			if (combinacao(i, j) != 0) {
				printf("%d ", combinacao(i, j));
			}
		}
		printf("\n");
	}
	
	return 0;
}

int fatorial (int x) {
	int resultado = 1;
	int i;
	for(i = 2; i <= x; i++) {
		resultado *= i;
	}
	return resultado;
}

int combinacao (int n, int p) {
	int resultado;
	int a = fatorial(n);
	int b = fatorial(p) * fatorial (n - p);
	resultado = a / b;
	return resultado;
}
