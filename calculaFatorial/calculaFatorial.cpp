#include <stdio.h>
#include <locale.h>

int factorial(int value){

    if(value == 0 or value == 1){

        value = 1;

    }
    else if(value > 1){

        for(int y = value-1; y > 0; y--){

        value = value*y;

        }
    }
    else{

        value = 0;

    }

    return value;

}

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil");

    int value;

    printf("Digite um valor: ");

    scanf("%i", &value);

    factorial(value) != 0 ? printf("%i", factorial(value)) : printf("Fatorial se aplica somente a números reais!");

}