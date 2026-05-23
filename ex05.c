#include <stdio.h>

int ehPrimo(int);

int main(){
    int n;
    printf("N: ");
    scanf("%d", &n);
    if(ehPrimo(n)){
        printf("Primo");
    }
    else{
        printf("Não é primo");
    }
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
