#include <stdio.h>

void fibonacci(int n, int vet[]);

int main(){
    int n;

    printf("Quantos termos? ");
    scanf("%d", &n);
    int vet[n];
    fibonacci(n, vet);
    printf("Sequencia de Fibonacci:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", vet[i]);
    }
}

void fibonacci(int n, int vet[]){
    vet[0] = 0;
    if(n > 1)
        vet[1] = 1;

    for(int i = 2; i < n; i++)
        vet[i] = vet[i - 1] + vet[i - 2];
}
