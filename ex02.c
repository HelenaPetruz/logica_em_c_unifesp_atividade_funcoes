#include <stdio.h>
#include <string.h>

int divisao(int, int);

int main(){
    int a, b;
    printf("Digite a:");
    scanf("%d", &a);
    printf("Digite b:");
    scanf("%d", &b);
    printf("a / b = %d", divisao(a, b));
}

int divisao(int a, int b) {
    if (b == 0)
        return 0;
    int resultado = 0, negativo = 0;
    if ((a < 0 && b > 0) || (a > 0 && b < 0))
        negativo = 1;
    if (a < 0)
        a = -a;
    if (b < 0)
        b = -b;
    while (a >= b) {
        a-=b;
        resultado++;
    }
    if (negativo)
        resultado = -resultado;
    return resultado;
}
