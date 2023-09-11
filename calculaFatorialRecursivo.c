#include <stdio.h>
#include <locale.h>

long long fatorial(long long a){

	if(a == 0 || a == 1){

        a = 1;

    }
    else if(a > 1){

		a *= fatorial(a-1);
		
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
	
	fatorial(a) == 0 ? printf("Fatorial se aplica somente a números reais!") : printf("%lld", fatorial(a));
	
}