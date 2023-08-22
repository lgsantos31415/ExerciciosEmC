#include <stdio.h>;
#include <locale.h>;

int doubleFactorial(int a){

	if(a == 0 or a == 1){

        a = 1;

    }
    else if(a > 1){

		a *= doubleFactorial(a-2);
		
	}
	else{
		
		a = 0;
		
	}

    return a;

}

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int a;
	
	printf("Escreva um número: ");
	
	scanf("%i", &a);
	
	doubleFactorial(a) != 0 ? printf("%i", doubleFactorial(a)) : printf("Fatorial duplo se aplica somente a números reais!");
	
}