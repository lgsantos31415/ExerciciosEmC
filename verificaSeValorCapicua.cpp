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

int numeroAlgarismos(int valor){
	
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

int invertAlgarismos(int expo, int *vet){
	
	expo--;
	
	int multiplier = potencia(10, expo), soma = 0;
	
	for(int y = 0; y <= expo; y++){
		
		vet[y] = vet[y]*multiplier;
		
		multiplier = multiplier/10;
		
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
	
	int vet[numeroAlgarismos(valor)];

	separaAlgarismos(valor, numeroAlgarismos(valor), vet);
	
	comparador = invertAlgarismos(numeroAlgarismos(valor), vet);
	
	comparaAlgarismos(valor, comparador) == 0 ? printf("É capícua") : printf("Não é capícua");
	
}
