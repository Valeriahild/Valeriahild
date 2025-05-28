#include <stdio.h>
#include <stdlib.h>

int main (){
    float valorcompra, valorpago, troco;

    int x;

    printf ("digite o valor da compra:");
    scanf ("%f", &valorcompra );

     printf ("digite o valor pago:");
    scanf ("%f", &valorpago);

   troco = valorpago - valorcompra;

   if (troco >=100){
        x=troco/100;
        troco=troco-(x*100);
        printf("%i 100 ",x);

        }
       if (troco >=50){
        x=troco/50;
        troco=troco-(x*50);
        printf("%i 50 ",x);

      }

    if (troco >=20){
        x=troco/20;
        troco=troco-(x*20);
        printf("%i 20 ",x);

   }

    if (troco >=10){
        x=troco/10;
        troco=troco-(x*10);
        printf("%i 10 ",x);

    }

     if (troco >=5){
        x=troco/5;
        troco=troco-(x*5);
        printf("%i 5 ",x);

     }
     if (troco >=1){
        x=troco/1;
        troco=troco-(x*1);
        printf("%i 1 ",x);
   }
       if (troco >=0.5){
        x=troco/0.5;
        troco=troco-(x*0.5);
        printf("%i 0.5 ",x);
       }
return 0;


   }






