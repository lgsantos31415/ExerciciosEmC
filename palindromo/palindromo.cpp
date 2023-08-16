#include <stdio.h>;
#include <locale.h>;
#include <string.h>;

void strRemoveSpace(char *str){
	
	int len = strlen(str);
	
	for(int y = 0; y <= len; y++){

		str2[counter] = str[y];
		
	}
}

void strInverter(char str[], char *str2){
	
	int len = strlen(str);
	
	for(int y = len-1, counter = 0; y >= -1; y--, counter++){

		str2[counter] = str[y];
		
	}
	
	str2[len] = '\0';
	
}

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	char str[] = "Paralelepípedo";
	
	char str2[] = "Paralelepípedo";
	
}