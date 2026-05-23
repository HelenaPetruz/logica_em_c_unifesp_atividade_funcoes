#include <string.h>

int inverso(int);

int main(){
    int a, b;
    printf("Digite um numero:");
    scanf("%d", &a);
    printf("inverso = %d", inverso(a));
}

int inverso(int a) {
    int resultado=0, ultimo, var;
    var=a;
    while(var>0){
        ultimo = var%10;
        var=var/10;
        resultado=resultado*10+ultimo;
    }
    return resultado;
}
