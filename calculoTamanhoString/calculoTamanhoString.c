#include <stdio.h>
#include <locale.h>

int strCounter(char str[]){

    int y;

    while(str[y]){

        y++;

    }

    return y+1;

}

int main(){

    setlocale(LC_ALL, "Portuguese_Brazilian");

    char str[] = "Hello World!";

    printf("\n%i", strCounter(str));

}