#include <stdio.h>

void binario(int, char[]);


int main(){
    int n;
    char texto[50];
    printf("N: ");
    scanf("%d", &n);
    binario(n, texto);
    printf("Em binario: %s", texto);
}

void binario(int n, char texto[]){
    int vet[50];
    int i = 0;
    int j = 0;

    while(n > 0){
        vet[i] = n % 2;
        n = n / 2;
        i++;
    }
    for(int k = i - 1; k >= 0; k--){
        texto[j] = vet[k] + '0';
        j++;
    }
    texto[j] = '\0';
}
