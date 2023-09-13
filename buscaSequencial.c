#include <stdio.h>
#include <stdlib.h>

void buscaSequencial(int *array, int tamanho, int *maior){

    *maior = array[0];

    //atribui para a variavel maior o primeiro elemento do array

    for(int x = 0; x < tamanho; x++){
        if(array[x] > *maior){
            *maior = array[x];
        }
    }

    //recebe o maior elemento do array
}

int main() {
    int array[] = {5, 7, 22, 22, 6, 94, 67, 82, 94, 37}, tamanho = sizeof(array)/sizeof(int), maior;

    //declara um array, calcula seu tamanho e uma variavel maior que ira receber o maior elemento do array

    buscaSequencial(array, tamanho, &maior);

    for(int x = 0; x < tamanho; x++){

        if(array[x] == maior){
            printf("indice: %i elemento: %i\n", x, array[x]);
        }
    }

    //apresenta na tela o maior elemento e seu indice

}
