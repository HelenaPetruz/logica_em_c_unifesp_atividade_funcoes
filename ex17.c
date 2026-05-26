#include <stdio.h>

void romano(int, char[]);


int main(){
    int n;
    char texto[50];
    printf("N: ");
    scanf("%d", &n);
    romano(n, texto);
    printf("Em algarismos romanos: %s", texto);
}

void romano(int n, char texto[]){
    int i = 0;

    while(n >= 1000){
        texto[i] = 'M';
        i++;
        n -= 1000;
    }

    if(n >= 900){
        texto[i] = 'C';
        i++;
        texto[i] = 'M';
        i++;
        n -= 900;
    }

    while(n >= 500){
        texto[i] = 'D';
        i++;
        n -= 500;
    }

    if(n >= 400){
        texto[i] = 'C';
        i++;
        texto[i] = 'D';
        i++;
        n -= 400;
    }

    while(n >= 100){
        texto[i] = 'C';
        i++;
        n -= 100;
    }

    if(n >= 90){
        texto[i] = 'X';
        i++;
        texto[i] = 'C';
        i++;
        n -= 90;
    }

    while(n >= 50){
        texto[i] = 'L';
        i++;
        n -= 50;
    }

    if(n >= 40){
        texto[i] = 'X';
        i++;
        texto[i] = 'L';
        i++;
        n -= 40;
    }

    while(n >= 10){
        texto[i] = 'X';
        i++;
        n -= 10;
    }

    if(n >= 9){
        texto[i] = 'I';
        i++;
        texto[i] = 'X';
        i++;
        n -= 9;
    }

    while(n >= 5){
        texto[i] = 'V';
        i++;
        n -= 5;
    }

    if(n >= 4){
        texto[i] = 'I';
        i++;
        texto[i] = 'V';
        i++;
        n -= 4;
    }

    while(n >= 1){
        texto[i] = 'I';
        i++;
        n -= 1;
    }

    texto[i] = '\0';
}
