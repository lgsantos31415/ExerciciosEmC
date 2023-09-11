#include <stdio.h>
#include <locale.h>

long long fatorialDuplo(long long a){

	if(a == 0 || a == 1){

        a = 1;

    }
	else if(a > 1){

		a *= fatorialDuplo(a-2);

	}
	else{
		
		a = 0;
		
	}

    return a;

}

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	long long a;
	
	printf("Escreva um número: ");
	
	scanf("%lld", &a);
	
	fatorialDuplo(a) == 0 ? printf("Fatorial duplo se aplica somente a números reais!") : printf("%lld", fatorialDuplo(a));

}