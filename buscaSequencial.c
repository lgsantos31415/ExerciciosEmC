#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void declaraArray(int** array, int tamanho){
	
	(*array) = (int*)malloc(sizeof(int)*tamanho);
	
}

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int *array, tamanho = 0, entrada, contador = 0;
	
	while(1){
		printf("Escolha uma das opções:\n1 - Declarar Vetor\n2 - Encontrar elemento\n3 - Sair\n");
		scanf("%i", &entrada);
		
		if(entrada < 1 || entrada > 3){
			printf("\nDigite uma entrada válida\n\n");
		}
		
		else if(entrada == 1){
			
			contador = 0;
			
			printf("\nDigite o tamanho do vetor: ");
			
			scanf("%i", &tamanho);
			
			declaraArray(&array, tamanho);
			
			printf("\nDigite os elementos do vetor:\n\n");
			
			while(1){
				if(contador == tamanho){
					break;
				}
				else{
					scanf("%i", &entrada);
					array[contador] = entrada;
					contador += 1;
				}
			}
		}
		
		else if(entrada == 2){
			
			contador = 0;
			
			if(tamanho == 0){
				printf("\nDeclare um vetor\n\n");
			}
			else{
				
				printf("\nQual elemento você deseja encontrar?\n");
				
				scanf("%i", &entrada);
				
				for(int y = 0; y<tamanho; y++){
					if(entrada == array[y]){
						printf("\nElemento %i na posição %i\n", entrada, y);
						contador += 1;
					}
				}

                if(contador > 0){
                    printf("\nElemento foi encontrado %i vez(es)\n\n", contador);
                }
                else{
                    printf("\nElemento %i não foi encontrado\n\n", entrada);
                }
			}
		}
		else if(entrada == 3){
			break;
		}
	}
}
