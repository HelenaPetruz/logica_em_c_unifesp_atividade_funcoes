#include <stdio.h>
#include <string.h>

int meuStrlen(char texto[]);
int meuStrcmp(char texto1[], char texto2[]);
void meuStrcat(char texto1[], char texto2[]);

int main(){

    char texto[50], texto2[50];

    printf("Digite um texto: ");
    fgets(texto, sizeof(texto), stdin);
    texto[strlen(texto)-1]='\0';

    printf("Tamanho: %d\n", meuStrlen(texto));

    printf("Digite outro texto para comparar: ");
    fgets(texto2, sizeof(texto2), stdin);
    texto2[strlen(texto2) - 1] = '\0';

    if(meuStrcmp(texto, texto2) == 1)
        printf("Strings iguais\n");
    else
        printf("Strings diferentes\n");

    meuStrcat(texto, texto2);

    printf("Concatenada: %s", texto);

    return 0;
}

int meuStrlen(char texto[]){
    int i = 0;
    while(texto[i] != '\0'){
        i++;
    }
    return i;
}

int meuStrcmp(char texto1[], char texto2[]){
    int i = 0;
    while(texto1[i] != '\0' || texto2[i] != '\0'){
        if(texto1[i] != texto2[i])
            return 0;
        i++;
    }
    return 1;
}

void meuStrcat(char texto1[], char texto2[]){
    int i = 0, j = 0;
    while(texto1[i] != '\0'){
        i++;
    }
    while(texto2[j] != '\0'){
        texto1[i] = texto2[j];
        i++;
        j++;
    }
    texto1[i] = '\0';
}
