#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int verificaAnoBissexto(int yyyy){

    if(yyyy%4 == 0 && yyyy%100 != 0 ){

        return 1;

    }
    else if(yyyy%4 == 0  || yyyy%400 == 0){

        return 1;

    }
    else{

        return 0;

    }
}

int somaDias(int mm, int bissexto){
	
    int soma = 0;

	for(int y = 1; y <= mm-1; y++){
    	
    	switch(y){
		
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			soma += 31;
			break;
		
		case 2:

            if(bissexto == 1){

			    soma += 29;
			    break;

            }
            else{

                soma += 28;
                break;

            }
		
		case 4: case 6: case 9: case 11:
			soma += 30;
			break;
		
		}
	}	

    return soma;

}

int diferenca(int dd1, int dd2){

    if(dd1 > dd2){

        dd1 = dd1-dd2;

    }
    else{

        dd1 = dd2-dd1;

    }

    return dd1;    

}

int main(){

    setlocale(LC_ALL, "Portuguese");

    int dd1, mm1, yyyy, dd2, mm2;
    char date[11], a;

    printf("%s", "Digite a primeira data no formato dd/mm/yyyy: ");
    fgets(date, 11, stdin);
	
	sscanf(date, "%d/%d/%d", &dd1, &mm1, &yyyy);
	
    while((a = getchar()) != '\n' && a != EOF) {}

    //limpa o buffer de entrada

    printf("%s", "Digite a segunda data no formato dd/mm/yyyy: ");
    fgets(date, 11, stdin);

	sscanf(date, "%d/%d/%*d", &dd2, &mm2);

	dd1 = (somaDias(mm1, verificaAnoBissexto(yyyy))) + dd1;

    dd2 = (somaDias(mm2, verificaAnoBissexto(yyyy))) + dd2;

    printf("%i", diferenca(dd1, dd2));

}