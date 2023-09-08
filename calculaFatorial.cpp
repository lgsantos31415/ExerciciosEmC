#include <stdio.h>
#include <locale.h>

long long int fatorial(long long int valor){

    if(valor == 0 or valor == 1){

        valor = 1;

    }
    else if(valor > 1){

        for(int y = valor-1; y > 0; y--){

        valor = valor*y;


        }
    }
    else{

        valor = 0;

    }

    return valor;

}

int main(){

    setlocale(LC_ALL, "Portuguese");

    long long int valor;

    printf("Digite um número: ");

    scanf("%llu", &valor);

    fatorial(valor) == 0 ? printf("Fatorial se aplica somente a números reais!") : printf("%llu", fatorial(valor));

}