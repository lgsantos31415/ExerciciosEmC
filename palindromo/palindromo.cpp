#include <stdio.h>
#include <locale.h>
#include <string.h>

void strRemoveSpace(char *str){

	char str2[strlen(str)];

	for(int y = 0, counter = 0; y <= strlen(str); y++){

		if(str[y] == ' '){
			continue;
		}
		else{

			str2[counter] = str[y];
			counter += 1;
			printf("\n%c", str2[counter]);
		}
	}
}

void strInverter(char str[], char *str2){
	
	for(int y = strlen(str)-1, counter = 0; y >= -1; y--, counter++){

		str2[counter] = str[y];
		
	}
	
	str2[strlen(str)] = '\0';
	
}

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	char str[] = "Paralelepípedo casual";
	char str2[strlen(str)];

	strInverter(str, str2);

	strRemoveSpace(str2);

}