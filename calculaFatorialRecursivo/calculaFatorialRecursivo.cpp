#include <stdio.h>;
#include <locale.h>;

int factorial(int a){

	if(a == 0 or a == 1){

        a = 1;

    }
    else if(a > 1){

		a *= factorial(a-1);
		
	}
	else{
		
		a = 0;
		
	}

    return a;

}

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int a;
	
	printf("Escreva um número: ");
	
	scanf("%i", &a);
	
	printf("\n%i", factorial(a));
	
}