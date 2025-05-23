#include <stdio.h>
#include <Stdlib.h>

int main () {
    int valor;
    int desconto;

printf("digite o valor");
scanf("%i",&valor);

if (valor>=100){
        desconto=valor- valor*0.01;
printf ("desconto de 10% = %i",desconto);

 }
 else {printf ("nao teve desconto");}



 return (0);
}
