#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

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
    
    setlocale(LC_ALL, "Portuguese");

    int entrada;

    while(1){

        printf("\nSelecione uma das opções:\n1 - Declarar um vetor\n2 - Ordenar um vetor\n3 - Sair\n");
        scanf("%i", &entrada);

        if(entrada == 1){
            
        }

        else if(entrada == 2){

        }

        else if(entrada == 3){
            break;
        }

        else if(entrada < 1 || entrada > 3){
            printf("\nDigite uma entrada válida!\n");
        }
    }
}