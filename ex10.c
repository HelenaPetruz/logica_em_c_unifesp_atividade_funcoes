#include <stdio.h>

int ehPrimo(int);
int nPrimos(int, int);

int main(){
    int n1, n2;
    printf("N1: ");
    scanf("%d", &n1);
    printf("N2: ");
    scanf("%d", &n2);
    printf("Quantidade de n primos: %d", nPrimos(n1, n2));
}

int ehPrimo(int n){
    if(n==1)
        return 0;
    for(int i=2; i<n; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int nPrimos(int n1, int n2){
    int cont=0;
    for(int i=n1+1; i<n2; i++){
        cont+=ehPrimo(i);
    }
    return cont;
}
