#include <stdio.h>
#include <string.h>

int potencia(int, int);

int main(){
    int a, b;
    printf("Digite a base x:");
    scanf("%d", &a);
    printf("Digite a potência y:");
    scanf("%d", &b);
    printf("x^y = %d", potencia(a, b));
}

int potencia(int a, int b) {
    int resultado=1;
    if(b>0){
        for(int i=0; i<b; i++){
            resultado = resultado*a;
        }
    }
    else{
        b=-b;
        for(int i=0; i<b; i++){
            resultado = resultado*a;
        }
        resultado=1/resultado;
    }
    return resultado;
}
