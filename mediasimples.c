#include <stdio.h>
#include <stdlib.h>

int main() {
    int nota1, nota2, media;

    printf ("digite a primeira nota: ");
    scanf("%i",&nota1);

    printf ("digite a seguda nota:");
    scanf("%i",&nota2);

    media=(nota1+nota2)/2;


    if (media>= 6) {
        printf("aprovado\n");

    }else {
        printf("reprovado\n");

    }
       return 0;
}
