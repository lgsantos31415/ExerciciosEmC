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

        printf("Escolha a opera��o:\n1 - Soma\n2 - Subtra��o\n3 - Multiplica��o\n4 - Divis�o\n5 - Pot�ncia\n");
        scanf("%i", &c);

        if(c > 0 && c < 6){

            break;

        }
        else{

            printf("Digite um valor v�lido!\n");

        }
    }

    switch (c)
    {
    case 1:
        printf("O resultado da soma �: %.2f", soma(a, b));
        break;
    case 2:
        printf("O resultado da subtra��o �: %.2f", subtracao(a, b));
        break;    
    case 3:
        printf("O resultado da multiplica��o �: %.2f", multiplicacao(a, b));
        break;
    case 4:
        printf("O resultado da divis�o �: %.2f", divisao(a, b));
        break;
    case 5:
        printf("O resultado da pot�ncia do primeiro valor elavado ao segundo �: %.2f", potencia(a, b));
        break;
    default:
        break;
    }
}