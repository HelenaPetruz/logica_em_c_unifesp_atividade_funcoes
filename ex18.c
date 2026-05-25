#include <stdio.h>
int soma(int);
int main()
{
    int x;
    printf("X: ");
    scanf("%d", &x);
    printf("Soma: %d", soma(x));
    return 0;
}

int soma(int x){
    int soma=0;
    for(int i=2; i<x; i++){
        soma+=i;
    }
    return soma;
}
