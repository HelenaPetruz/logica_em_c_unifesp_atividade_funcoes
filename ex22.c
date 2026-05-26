#include <stdio.h>

int menorQuadrado(int n);

int main(){
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("Resultado: %d", menorQuadrado(n));
}

int menorQuadrado(int n){
    int i = 1;

    while(i * i <= n){
        i++;
    }
    return i;
}
