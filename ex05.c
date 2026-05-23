#include <stdio.h>
#include <string.h>

int fatorial(int);

int main(){
    int a;
    printf("Digite um numero:");
    scanf("%d", &a);
    printf("fatorial = %d", fatorial(a));
}

int fatorial(int n){
    int fat=1;
    for(int i=n; i>0; i--){
        fat = fat * i;
    }
    return fat;
}
