#include <stdio.h>
#include <Stdlib.h>

int main(){
    int anoA = 2025; //ano atual
    int mesA = 5;// mes atual
    int diaA = 22;// dia atual
    int anoN;  // ano de nascimento
    int mesN; // mes do nascimento
    int diaN; // dia do nascimento
    int idade;


    printf("digite o ano do seu nascimento:");
    scanf("%i", &anoN); // preenche a variavel do ano do nascimento

    printf("digite o mes do seu nascimento:");
    scanf("%i", &mesN); // preenche a variavel do mes do nascimento

       printf("digite o dia do seu nascimento:");
    scanf("%i", &diaN); // preenche a variavel do dia do nascimento


    idade = anoA - anoN;
    if(mesN > mesA){
        idade = idade - 1;

    }else if(mesN == mesA){
        if(diaN > diaA) {
            idade = idade -1;

        }
    }


    printf("Voce tem %i anos", idade);
    return 0;



}
