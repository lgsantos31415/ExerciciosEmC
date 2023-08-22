#include <stdio.h>
#include <locale.h>

int power(int base, int expo){
	
	int result = 1;
	
	if(expo == 0){
		
	}
	else{
		
		for(int y = 0; y < expo; y++){
		
			result = result*base;
		
		}	
		
	}

	return result;
}

int numAlgarismos(int value){
	
	int result = 0;
	
	for(int y = 1; value/y >= 1; y = y*10){
		
		result++;
		
	}
	
	return result;
	
}

void separAlgarismos(int value, int qnt, int *vet){
	
	qnt--;
	
	int divisor = power(10, qnt), control = qnt;
	
	for(int y = divisor; y > 0; y = y/10){
		
		vet[control] = value/y;
		value = value%y;
		
		control--;
		
	}
}

int invertAlgarismos(int qnt, int *vet){
	
	qnt--;
	
	int multiplier = power(10, qnt), soma = 0;
	
	for(int y = 0; y <= qnt; y++){
		
		vet[y] = vet[y]*multiplier;
		
		multiplier = multiplier/10;
		
	}
	
	for(int y = 0; y <= qnt; y++){
		
		soma = soma + vet[y];
		
	}
	
	return soma;	
	
}

int comparAlgarismos(int value, int comparador){
	
	if(value == comparador){
		
		return 1;
		
	}
	else{
		
		return 0;
		
	}
}

int main(){

	setlocale(LC_ALL, "Portuguese");

	int value, comparador;
	
	printf("Digite um número: ");
	scanf("%i", &value);
	
	int vet[numAlgarismos(value)];
	
	separAlgarismos(value, numAlgarismos(value), vet);
	
	comparador = invertAlgarismos(numAlgarismos(value), vet);
	
	printf("\n%i", comparAlgarismos(value, comparador));
	
}
