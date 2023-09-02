
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

void somaPontos(int numeroDigitos, int *numeroPontos){

    int y, x;

    for(y = 1, x = 1; y < numeroDigitos; y++, x++){

        if(x == 3){

            x = 1;
            *numeroPontos += 1;

        }
    }
}

void acrescentaPonto(int numeroDigitos){

    for(int y = numeroDigitos-1; y > -1 ; y--){

        //printf("\n%c", str[y]);

    }

}

int main(){

    setlocale(LC_ALL, "Portuguese");

    double valor;

    int numeroDigitos, digitoDivisivel, numeroPontos = 0;

    printf("Digite um valor:");
    scanf("%lf", &valor);

    somaDigitos((int)valor, &numeroDigitos, &digitoDivisivel);
    somaPontos(numeroDigitos, &numeroPontos);

    //char str[numeroDigitos+3];

    //sprintf(str, "%.2lf", valor);

    printf("\n%i", numeroPontos);
    
}