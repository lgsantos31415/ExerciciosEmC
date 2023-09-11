#include <stdio.h>
#include <stdlib.h>

int somaDigitos(int valor){

	int x, y;

	for(x = 1, y = 1; valor/y > 9; x++, y*=10){

	}

	return x;

}

//funcao soma quantos digitos tem um dado valor inteiro

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

//funcao conta quantos elementos um array de caracteres possui sem utilizar a biblioteca string

void substituiPonto(char *str){

	for(int y = 0; y < strlen(str); y++){

		if(str[y] == '.'){

			str[y] = ',';

		}
	}
}

//funcao encontra ponto em um array de caracteres e substitui por virgula

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

//dado um array de caracteres, inverte ele e atribui no mesmo a inversão dos caracteres

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

//funcao calcula quantos pontos serao necessario um numero ter

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

	printf("Digite um valor (utilize \'.\' para separador de decimais): ");
	scanf("%lf", &valor);

	int numDigitos = somaDigitos((int)valor);

	//atribui a variavel numDigitos o numero de digitos

	char str[numDigitos+3];

	//cria um array de caracteres com o numero de digitos e soma 3 para acrescentar o espaco para virgula e duas casas decimais

	sprintf(str, "%.2f", valor);

	//atribui ao array de caracteres str o valor digitado com duas casas decimais

	substituiPonto(str);

	//substitui o ponto por virgula do array str

	int numPonto = somaPonto(numDigitos);

	//atribui a variavel numPonto quantos pontos serao necessarios um dado valor ter para ser formatado corretamente

	int tamanho = strlen(str) + numPonto;

	//atribui a variavel tamanho o numero de elementos que sera necessario um array possuir considerando o ponto

	char *str2 = (char *)malloc(tamanho);

	/*
	cria um array dinamicamente com o numero de elementos necessarios
	por conta do tamanho do tipo char ser 1 byte não se faz necessário multiplicar pelo numero de elementos
	*/

	atribuiPonto(str, str2, tamanho);

	/*
	formata o valor da primeira string e atribui para a segunda string utilizando ponteiros para enviar o array a ser formatado
	e retornar o segundo array com formatação correta
	*/

	printf("R$%s", str2);

}