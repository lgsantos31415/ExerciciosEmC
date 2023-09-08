#include <stdio.h>
#include <locale.h>

int potencia(int base, int expoente){
	
	int resultado = 1;
	
	if(expoente == 0){
		
	}
	else{
		
		for(int y = 0; y < expoente; y++){
		
			resultado = resultado*base;
		
		}	
		
	}

	return resultado;
}

int numeroDigitos(int valor){
	
	int resultado = 0;
	
	for(int y = 1; valor/y >= 1; y = y*10){
		
		resultado++;
		
	}
	
	return resultado;
	
}

void separaAlgarismos(int valor, int expo, int *vet){
	
	expo--;
	
	int divisor = potencia(10, expo), control = expo;
	
	for(int y = divisor; y > 0; y = y/10){
		
		vet[control] = valor/y;
		valor = valor%y;
		
		control--;
		
	}
}

int inveterAlgarismos(int expo, int *vet){
	
	expo--;
	
	int multiplicador = potencia(10, expo), soma = 0;
	
	for(int y = 0; y <= expo; y++){
		
		vet[y] = vet[y]*multiplicador;
		
		multiplicador = multiplicador/10;
		
	}
	
	for(int y = 0; y <= expo; y++){
		
		soma = soma + vet[y];
		
	}
	
	return soma;	
	
}

int comparaAlgarismos(int valor, int comparador){
	
	if(valor == comparador){
		
		return 0;
		
	}
	else{
		
		return 1;
		
	}
}

int main(){

	setlocale(LC_ALL, "Portuguese");

	int valor, comparador;
	
	printf("Digite um número: ");
	scanf("%i", &valor);
	
	int vet[numeroDigitos(valor)];

	//cria um vetor com o numero de digitos

	separaAlgarismos(valor, numeroDigitos(valor), vet);
	
	//separa em um dado vetor o valor a ser separado e quantos digitos ele possue

	comparador = inveterAlgarismos(numeroDigitos(valor), vet);
	
	//atribui ao comparar os valores invertidos da entrada

	comparaAlgarismos(valor, comparador) == 0 ? printf("É capícua") : printf("Não é capícua");
	
	/*
	a funcao caomparaAlgarismo retorna 0 se forem iguais e 1 se forem diferentes
	ao mesmo tempo que utiliza de um operador ternário para apresentar ao usuário se trata-se de um valor capícua
	*/

}
