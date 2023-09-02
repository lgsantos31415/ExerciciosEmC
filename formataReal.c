
#include <stdio.h>
#include <string.h>
#include <locale.h>

void somaDigitos(int valor, int *numeroDigitos, int *digitoDivisivel){

    int y, contador;

    for(y = 1, contador = 1; valor/y > 9; y *= 10, contador++){

    }

    *digitoDivisivel = y;
    *numeroDigitos = contador;

}

int main(){

    setlocale(LC_ALL, "Portuguese");

    double valor;

    int numeroDigitos, digitoDivisivel;

    printf("Digite um valor: ");
    scanf("%lf", &valor);

    somaDigitos((int)valor, &numeroDigitos, &digitoDivisivel);

    char str[numeroDigitos+3];

    sprintf(str, "%.2lf", valor);

    
    
}