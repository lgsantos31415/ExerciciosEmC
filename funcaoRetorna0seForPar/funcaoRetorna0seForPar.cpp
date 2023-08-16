#include <stdio.h>
#include <locale.h>

int paridade(int a){
	
	if(a%2 == 0) return 0;
	else return 1;

}

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int a;
	
	printf("Escreva um número: ");
	scanf("\n%i", &a);
	
	paridade(a) == 0 ? printf("Par") : printf("Impar");
	
}