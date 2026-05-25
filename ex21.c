#include <stdio.h>
int triangulo(int, int, int);
int main()
{
    int a, b, c;
    printf("A: ");
    scanf("%d", &a);
    printf("B: ");
    scanf("%d", &b);
    printf("C: ");
    scanf("%d", &c);
    if(triangulo(a,b,c)==0){
        printf("Não é triangulo");
    }
    if(triangulo(a,b,c)==1){
        printf("Triangulo equilátero");
    }
    if(triangulo(a,b,c)==2){
        printf("Triangulo isóceles");
    }
    if(triangulo(a,b,c)==3){
        printf("Triangulo escaleno");
    }
}

int triangulo(int a, int b, int c){
    if(a>b+c || b>a+c || c>b+c){
        return 0;
    }
    if(a==b && b==c){
        return 1;
    }
    if((a==b && (b!=c || b!=a)) || (a==c && (b!=c || b!=a)) || (b==c && (a!=b || a!=c))){
        return 2;
    }
    if(a!=b && b!=c && c!=a){
        return 3;
    }
}
