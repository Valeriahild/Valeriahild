#include <stdio.h>
#include <stdlib.h>

int main () {
int x = 0, i = 0; // i variavel de controle

while (x<= 100) {
    x = x + 2;
    i = i + 1;
    printf ("Interacao %i: %i \n", i, x );

}
return 0;

}
