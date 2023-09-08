#include <stdio.h>
#include <locale.h>

int strTamanho(char *str){

	int y = 0;

	while(1){

		if(str[y] == '\0'){

			break;

		}
		else{

			y++;

		}
	} 

	return y;

}

int strCompara(char *str, char *str2){

	int x, y, tamanho = strTamanho(str);

	for(x = 0, y = 0; x < tamanho; x++){

		if(str[x] != str2[x]){

			y = 1;

		}
	}

	return y;

}

void strCopia(char *str, char *str2){

	int x, y = strTamanho(str);

	for(x = 0; x < y; x++){

		str2[x] = str[x];

	}

	str2[x] = '\0';

}

void strRemoveEspaco(char *str){

	int x, y, tamanho = strTamanho(str);

	char str2[tamanho];

	for(x = 0, y = 0; x < tamanho; x++){

		if(str[x] != ' '){

			str2[y] = str[x];
			y++;

		}
		else{

			continue;
			
		}
	}

	strCopia(str, str2);

}

void strInverte(char *str){

	int x, y, tamanho = strTamanho(str);

	char str2[tamanho];

	for(x = 0, y = tamanho-1; x < tamanho; x++, y--){

		str2[x] = str[y];

	}

	str2[x] = '\0';

	strCopia(str2, str);

}

int main(){

	setlocale(LC_ALL, "Portuguese");

	char str[] = "socorram me subi no onibus em marrocos";

	//cria um array de caracteres de nome str

	strRemoveEspaco(str);

	//funcao retira os espacos em branco de um array

	char str2[strTamanho(str)];

	//cria um segundo array de caracteres de nome str2 com mesmo tamanho que o primeiro

	strCopia(str, str2);

	//copia os caracteres do str para o str2

	strInverte(str2);

	//inverte os caracteres

	strCompara(str, str2) == 0 ? printf("É palíndromo") : printf("Não é palíndromo");

	/*
	a função strCompara compara os caracteres do str com os do str2 e retorna 0 para iguais e 1 para diferentes
	ao mesmo tempo que utiliza um operador ternario para apresentar de forma visual ao usuário se são iguais ou não
	*/

}