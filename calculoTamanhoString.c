#include <stdio.h>
#include <locale.h>

int strCounter(char str[]){

    int y = 0;

    while(str[y] != '\0'){

        y++;

    }

    return y+1;

}