#include <stdio.h>
#include <locale.h>

long long fatorial(long long valor){

    if(valor == 0 || valor == 1){

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

    long long valor;

    printf("Digite um número: ");

    scanf("%lld", &valor);

    fatorial(valor) == 0 ? printf("Fatorial se aplica somente a números reais!") : printf("%lld", fatorial(valor));

}