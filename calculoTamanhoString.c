#include <stdio.h>
#include <locale.h>

int tamanhoStr(char str[]){

    int y = 0;

    while(str[y] != '\0'){

        y++;

    }

    return y;

}

int main(){

    char str[] = "Hello World!";

    printf("%i", tamanhoStr(str));

}