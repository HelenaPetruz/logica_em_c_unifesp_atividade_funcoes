#include <stdio.h>
#include <string.h>

int palindromo(char[]);


int main(){
    char p[30];
    int cont=0;

    fgets(p, sizeof(p), stdin);
    p[strlen(p)-1] = '\0';
    if(palindromo(p))
        printf("Palindromo");
    else
        printf("Não é palindromo"); 
}

int palindromo(char p[]){
    for(int i=0; i<strlen(p)/2; i++){
        if(p[i] != p[strlen(p)-1-i]){
            return 0;
        }












































[i] = '\0';
}
