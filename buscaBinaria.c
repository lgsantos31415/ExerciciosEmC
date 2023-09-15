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
	
	int *vetor, tamanho = 0, entrada, contador = 0;
	
	while(1){
		printf("\nEscolha uma das op��es:\n1 - Declarar vetor\n2 - Encontrar elemento\n3 - Sair\n");
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
				printf("\nDeclare um vetor\n\n");
			}
			else{
                contador = 0;

				printf("\nQual elemento voc� deseja encontrar? ");
				scanf("%i", &entrada);
				
				for(int y = 0; y<tamanho; y++){
					if(entrada == vetor[y]){
						printf("\nElemento %i na posi��o %i\n", entrada, y);
						contador += 1;
					}
				}

                if(contador > 0){
                    printf("\nElemento foi encontrado %i vez(es)\n", contador);
                }
                else{
                    printf("\nElemento %i n�o foi encontrado\n", entrada);
                }
			}
		}

		else if(entrada == 3){
			break;
		}

		else if (entrada < 1 || entrada > 3){
			printf("\nDigite uma entrada v�lida\n");
		}
	}
}