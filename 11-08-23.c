#include <stdio.h>

int main()
{
    int num1, num2, num3;
    
    printf("Digite o numero 1: ");
    scanf("%d", &num1);
    printf("Digite o numero 2: ");
    scanf("%d", &num2);
    printf("Digite o numero 3: ");
    scanf("%d", &num3);
    
    if ((num1 > num2) && (num1 > num3)) {
        if(num2 > num3) {
            printf("Em ordem crescente fica: %d %d %d", num1, num2, num3);
        } else {
            printf("Em ordem crescente fica: %d %d %d", num1, num3, num2);
        }
    } else if ((num2 > num1) && (num2 > num3)) {
        if(num1 > num3) {
            printf("Em ordem crescente fica: %d %d %d", num2, num1, num3);
        } else {
            printf("Em ordem crescente fica: %d %d %d", num2, num3, num1);
        }
    } else {
        if(num1 > num2) {
            printf("Em ordem crescente fica: %d %d %d", num3, num1, num2);
        } else {
            printf("Em ordem crescente fica: %d %d %d", num3, num2, num1);
        }
    }
}
