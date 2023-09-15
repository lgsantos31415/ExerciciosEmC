#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void declaraVetor(int **vetor, int tamanho){
    (*vetor) = (int*)malloc(sizeof(int)*tamanho);
}

void ordenarLista(int *vetor, int tamanho){
    int temporario;

    for(int x = 0; x < tamanho; x++){
        for(int y = 0; y < tamanho-1; y++){
            if(vetor[y] > vetor[y+1]){
                temporario = vetor[y];
                vetor[y] = vetor[y+1];
                vetor[y+1] = temporario;
            }
            else{
                continue;
            }
        }
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    int *vetor, entrada, tamanho = 0;

    while(1){

        printf("\nSelecione uma das opções:\n1 - Declarar um vetor\n2 - Ordenar um vetor\n3 - Sair\n");
        scanf("%i", &entrada);

        if(entrada == 1){
            tamanho = 0;

            printf("Digite o tamanho do vetor: ");
            scanf("%i", &tamanho);

            declaraVetor(&vetor, tamanho);

            printf("\nDigite os elementos do vetor:\n");

            for(int y = 0; y < tamanho; y++){
                scanf("%i", &entrada);
                vetor[y] = entrada;
            }
        }

        else if(entrada == 2){
            if(tamanho == 0){
                printf("\nDeclare um vetor\n");
            }
            else{
                ordenarLista(vetor, tamanho);

                printf("\n");

                for(int y = 0; y < tamanho; y++){
                    printf("%i\n", vetor[y]);
                }
            }
        }

        else if(entrada == 3){
            break;
        }

        else if(entrada < 1 || entrada > 3){
            printf("\nDigite uma entrada válida!\n");
        }
    }
}