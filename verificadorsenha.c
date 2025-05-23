#include <stdio.h>
#include <stdlib.h>

int main() {
    int senha = 1234;
    int senhausuario;

    printf ("digite a senha");
    scanf ("%s", &senhausuario);

    if ( senha == senhausuario) {
        printf ("senha correta");
    }
    else {
        printf ("senha incorreta");
    }
   return (0);
}
