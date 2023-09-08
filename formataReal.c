#include <stdio.h>
#include <stdlib.h>

int somaDigitos(int valor){

	int x, y;

	for(x = 1, y = 1; valor/y > 9; x++, y*=10){

	}

	return x;

}

int strlen(char *str){

	int contador = 0;

	while(1){

		if(str[contador] == '\0'){

			break;

		}
		else{

			contador += 1;

		}
	}

	return contador;

}

//funcao conta quantos elementos um array de caracteres possui

void substituiPonto(char *str){

	for(int y = 0; y < strlen(str); y++){

		if(str[y] == '.'){

			str[y] = ',';

		}
	}
}

void inverteStr(char *str){

	char str2[strlen(str)];

	int x, y;

	for(x = 0, y = strlen(str)-1; y > -1; x++, y--){

		str2[x] = str[y];

	}

	for(y = 0; y < strlen(str); y++){

		str[y] = str2[y];

	}
}

int somaPonto(int numDigitos){

	int x, y, z;

	for(x = 0, y = 0, z = 0; x < numDigitos; x++, y++){

		if(y == 3){

			y = 0;
			z += 1;

		}
	}

	return z;

}

void atribuiPonto(char *str, char *str2, int tamanho){

	int x, y, z;

	inverteStr(str);

	//inverte a str para poder adicionar o ponto ao lugar correto

	for(x = 0; x < 3; x++){

		str2[x] = str[x];

	}

	//atribui as duas casas decimais e a virgula ao segundo array

	for(x = 3, y = 0, z = 3; x < tamanho; x++, y++){

		if(y == 3){

			y = -1;
			str2[x] = '.';

		}
		else{

			str2[x] = str[z];
			z++;

		}
	}

	str2[x] = '\0';

	//atribui o ponto a segunda string

	inverteStr(str2);

	//inverte a segunda string

}

int main(){

	double valor;

	printf("Digite um valor: ");
	scanf("%lf", &valor);

	int numDigitos = somaDigitos((int)valor);

	//atribui a variavel numDigitos o numero de digitos

	char str[numDigitos+3];

	//soma 3 para acrescentar o espaco para virgula e duas casas decimais

	sprintf(str, "%.2f", valor);

	//atribui ao array de caracteres str o valor digitado com duas casas decimais

	substituiPonto(str);

	//substitui o ponto por virgula

	int numPonto = somaPonto(numDigitos);

	//soma quantos pontos serao necessarios para acrescentar ao numero de elementos de um array

	int tamanho = strlen(str) + numPonto;

	//atribui a variavel tamanho o numero de elementos que sera necessario um array possuir considerando o ponto

	char *str2;

	str2 = (char *)malloc(tamanho);

	//cria um array dinamicamente com o numero de elementos necessarios

	atribuiPonto(str, str2, tamanho);

	//formata o valor da primeira string e atribui para a segunda string

	printf(str2);

}