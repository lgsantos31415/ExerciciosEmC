#include <stdio.h>
#include <locale.h>

int strlen(char str[]){

    int y = 0;

    while(str[y] != '\0'){

        y++;

    }

    return y;

}

int main(){

    char str[] = "Hello World!";

    printf("%i", strlen(str));

}