#include<stdio.h>
#include<stdlib.h>

int main(){
    float n1, n2;
    char op;
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);

    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    printf("Digite a operacao: ");
    scanf("%s", &op);

    switch(op){
        case '+':
            printf("%.2f + %.2f = %.2f", n1, n2, n1+n2);
        break;
        case '-':
            printf("%.2f - %.2f = %.2f", n1, n2, n1-n2);
        break;
        case '*':
            printf("%.2f * %.2f = %.2f", n1, n2, n1*n2);
        break;
        case '/':
            printf("%.2f / %.2f = %.2f", n1, n2, n1/n2);
        break;
        default:
            printf("Operacao inavalida");
    }
    return 0;
}
