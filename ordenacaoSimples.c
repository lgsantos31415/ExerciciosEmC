#include <stdio.h>
#include <stdlib.h>

void ordenarLista(int *array, int tamanho){

    int temporario;

    for(int x = 0; x < tamanho; x++){
        for(int y = 0; y < tamanho; y++){
            if(array[y] > array[y+1]){
                temporario = array[y+1];
                array[y+1] = array[y];
                array[y] = temporario;
            }
            else{
                continue;
            }
        }
    }

    for(int y = 0; y < tamanho; y++){
        printf("%i\n", array[y]);
    }
}

int main(){
    
    int entrada;

    while(1){

        printf("Selecione uma das opções:\n1 - Declarar um vetor\n2 - Ordenar um vetor\n3 - Sair");
        scanf("%i", entrada);

        if(entrada == 1){
            
        }

    }
}