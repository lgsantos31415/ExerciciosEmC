
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include "../calculoTamanhoString/calculoTamanhoString.c"

int sumDigits(int value){

    int counter = 1;

    for(int y = 1; value/y > 9; y *= 10){

        counter++;

    }

    return counter;

}

int sumPointers(int value){

    int counter = 0;

    for(int y = 1, z = 1; y <= value; y++, z++){

        if(z > 3){

            z = 0;
            counter++;

        }
    }

    return counter;

}

int main(){

    setlocale(LC_ALL, "Portuguese");

    float value;

    printf("Escreva um valor: ");

    scanf("%f", &value);

    int digits = sumDigits((int)value);

    int pointers = sumPointers(digits);

    char str[digits+pointers+4];

    sprintf(str, "%.2f", value);

    printf("\n%i", strCounter(str));

}