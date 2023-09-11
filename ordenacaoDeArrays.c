#include <stdio.h>

//funcao recebe um ponteiro para um array e o tamanho do array e retorna qual o maior elemento e sua posicao

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

/*
funcao recebe um ponteiro para array1 e o tamanho do array1
cria dinamicamente array2 com mesmo tamanho do array1
armazena no array2 de tras para frente os maiores elementos do array1
em cada verificacao substitui o maior elemento do array1 por zero assim para proxima verificacao pegar outro elemento
e depois de alinhado copia o array2 para o array1 enviando-o de volta no ponteiro dado como argumento
*/

void ordenaArray(int *array, int tamanho){

    int maximo, indice;

    int *array2 = (int *)malloc(tamanho*sizeof(int));

    for(int y = tamanho-1; y > -1; y--){

        max(array, tamanho, &maximo, &indice);

        array2[y] = maximo;

        array[indice] = 0;

    }

    for(int y = 0; y < tamanho; y++){

        array[y] = array2[y];

    }
}

int main(){

    int array[] = {5, 42, 37, 94, 57, 22, 22, 63, 78}, tamanho = sizeof(array)/sizeof(int);

    ordenaArray(array, tamanho);

    for(int y = 0; y < tamanho; y++){

        printf("%i\n", array[y]);

    }
}