#include <stdio.h>

void max(int *array, int tamanho, int *maximo, int *indice){

    *maximo = array[0];
    *indice = 0;

    for(int y = 0; y < tamanho; y++){

        if(array[y] > *maximo){

            *maximo = array[y];
            *indice = y;

        }
    }
}

int main(){

    int array[] = {5, 42, 37}, tamanho = sizeof(array)/sizeof(int), maximo, indice;

    max(array, tamanho, &maximo, &indice);

    printf("%i %i %i", tamanho, maximo, indice);

}