#include <stdio.h>
#include <locale.h>

int verifAnoBissexto(int yyyy){

    if(yyyy%4 == 0){

        return 1;

    }
    else{

        return 0;

    }
}

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil");

    int dd1, mm1, yyyy, dd2, mm2;

    //printf("Digite a primeira data no formato dd/mm/yyyy: ");
    //scanf("%i%*c%i%*c%i", &dd1, &mm1, &yyyy);

    //printf("Digite a segunda data no formato dd/mm/yyyy: ");
    //scanf("%i%*c%i%*c%*i", &dd2, &mm2);

    printf("Tá louco");

}