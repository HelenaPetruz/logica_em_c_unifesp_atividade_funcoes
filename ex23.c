#include <stdio.h>
int funcao(int, int);
int main()
{
    int x, y;
    printf("X: ");
    scanf("%d", &x);
    printf("Y: ");
    scanf("%d", &y);
    printf("%d", funcao(x, y));
}

int funcao(int x, int y){
    int cont=0;
    for(int i=x; i<y; i++){
        if(i%13==5){
            cont++;
        }
    }
    return cont;
}
