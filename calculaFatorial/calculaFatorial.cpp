#include <stdio.h>
#include <locale.h>

int factorial(int value){

    for(int y = value-1; y > 0; y--){

        value = value*y;

    }
}

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil");

    int value;

    printf("Digite um valor: ");

    scanf("%i", &value);

    printf("\n%i", factorial(value));

}