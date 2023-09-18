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

void buscaBinaria(int *vetor, int *inicio, int *meio, int *fim, int *contador, int entrada){
	while(vetor[*meio] != entrada){
		if(entrada > vetor[*meio]){
			*inicio = *meio;
		}
		else if(entrada < vetor[*meio]){
			*fim = *meio;
		}
		*meio = (*inicio + *fim)/2;
		*contador += 1;
	}
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int *vetor, tamanho = 0, entrada, contador = 0;
	
	while(1){
		printf("\nEscolha uma das opções:\n1 - Declarar vetor\n2 - Encontrar elemento\n3 - Sair\n");
		scanf("%i", &entrada);
		
		if(entrada == 1){
				
			printf("\nDigite o tamanho do vetor: ");
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
				contador = 0;

                int inicio = 0, fim = tamanho, meio = (inicio + fim)/2;

				ordenarLista(vetor, tamanho);

				printf("\nO vetor foi ordenado:\n");

				for(int y = 0; y < tamanho; y++){
					printf("Indice: %i elemento: %i\n", y, vetor[y]);
				}

				printf("\nQual elemento você deseja encontrar?\n");
				scanf("%i", &entrada);

				buscaBinaria(vetor, &inicio, &meio, &fim, &contador, entrada);

				printf("A busca foi executada %i vez(es) para encontrar o elemento %i no indice: %i", contador, entrada, meio);
			}
		}

		else if(entrada == 3){
			break;
		}

		else{
			printf("\nDigite uma entrada válida\n");
		}
	}
}