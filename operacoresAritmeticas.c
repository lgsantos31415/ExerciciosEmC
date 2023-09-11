#include <stdio.h>
#include <locale.h>

float soma(float a, float b){

    return a+b;

}

float subtracao(float a, float b){

    if(a > b) return a-b;
    else return b-a;

}

float multiplicacao(float a, float b){

    return a*b;

}

float divisao(float a, float b){

    return a/b;

}

float potencia(float a, float b){

    float resultado = 1;

    for(int y = 0; y < b; y++){

        resultado *= a;

    }

    return resultado;

}

int main(){

    setlocale(LC_ALL, "Portuguese");

    float a, b;

    int c;

    printf("Digite o primeiro valor: ");

    scanf("%f", &a);

    printf("Digite o segundo valor: ");

    scanf("%f", &b);

    while(1){

        printf("Escolha a operação:\n1 - Soma\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n5 - Potência\n");
        scanf("%i", &c);

        if(c > 0 && c < 6){

            break;

        }
        else{

            printf("Digite um valor válido!\n");

        }
    }

    switch (c)
    {
    case 1:
        printf("O resultado da soma é: %.2f", soma(a, b));
        break;
    case 2:
        printf("O resultado da subtração é: %.2f", subtracao(a, b));
        break;    
    case 3:
        printf("O resultado da multiplicação é: %.2f", multiplicacao(a, b));
        break;
    case 4:
        printf("O resultado da divisão é: %.2f", divisao(a, b));
        break;
    case 5:
        printf("O resultado da potência do primeiro valor elavado ao segundo ã: %.2f", potencia(a, b));
        break;
    default:
        break;
    }
}