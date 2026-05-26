#include <stdio.h>

float celsius(int f);

int main(){
    for(int f = 50; f <= 150; f++)
        printf("%d°F - %.2f°C \n", f, celsius(f));
}

float celsius(int f){
    return 5.0 * (f - 32) / 9.0;
}
