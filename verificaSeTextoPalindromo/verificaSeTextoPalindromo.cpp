#include <stdio.h>
#include <locale.h>
#include <string.h>

void strRemoveSpace(char *str){

	int counter = 0;

	char str2[strlen(str)];

	for(int y = 0; str[y]; y++){

		if(str[y] == ' '){

			continue;

		}
		else{

			str2[counter] = str[y];
			counter++;

		}
	}

	str2[counter] = '\0';

	for(int y = 0; str2[y]; y++){

		str[y] = str2[y];

	}

	str[counter] = '\0';

}

void strInverter(char str[], char *str2){
	
	strRemoveSpace(str);

	for(int y = strlen(str)-1, counter = 0; y >= -1; y--, counter++){

		str2[counter] = str[y];
		
	}
	
	str2[strlen(str)] = '\0';
	
}

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	char str[] = "socorram me subi no onibus em marrocos";

	char str2[strlen(str)];

	strInverter(str, str2);

	printf("\n%i", strcmp(str, str2));

}