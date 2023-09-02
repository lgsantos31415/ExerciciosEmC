#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

void somaDigitos(int valor, int *numeroDigitos, int *digitoDivisivel){

    int y, contador;

    for(y = 1, contador = 1; valor/y > 9; y *= 10, contador++){

    }

    *digitoDivisivel = y;
    *numeroDigitos = contador;

}

void somaPontos(int numeroDigitos, int *numeroPontos){

    for(int y = 0, x = 0; y < numeroDigitos; y++, x++){

        if(x == 3){

        x = 0;

        *numeroPontos += 1;

        }
    }
}

void acrescentaPontos(char *str, int numeroPontos) {

    int x, y, z, tamanho = strlen(str);

    char *v = (char *) malloc(tamanho);
   
    for(y = tamanho-1; y > tamanho-4; y--, x++){
   
        v[x] = str[y];
   
    }
   
    for(y = tamanho-4; y > -1; x++, z++){
   
        if(z != 3){
   
        v[x] = str[y];
        y -= 1;
   
        }
        else if( z == 3){
   
            v[x] = '.';
            z = -1;
   
        }
    }

    v[x] = '\0';

    printf(v);
}

int main(){

    setlocale(LC_ALL, "Portuguese");

    double valor;

    int numeroDigitos, digitoDivisivel, numeroPontos = 0;

    printf("Digite um valor: ");
    scanf("%lf", &valor);

    somaDigitos((int)valor, &numeroDigitos, &digitoDivisivel);
    somaPontos(numeroDigitos, &numeroPontos);

    char str[numeroDigitos+3];

    sprintf(str, "%.2lf", valor);

    acrescentaPontos(str, numeroPontos);
   
}