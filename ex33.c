#include <stdio.h>

void divisores(int n);

int main(){
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("Divisores:\n");
    divisores(n);
}

void divisores(int n){
    for(int i = 1; i <= n; i++){
        if(n % i == 0)
            printf("%d ", i);
    }
}
