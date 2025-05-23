
#include <stdio.h>

int main() {
    float num1, num2;
    char operacao;

    printf("Insira o primeiro número: ");
    scanf("%f", &num1);

    printf("Insira a operação (+, -, *, /): ");
    scanf(" %c", &operacao);

    printf("Insira o segundo número: ");
    scanf("%f", &num2);
 switch (operacao) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            } else {
                printf("Divisão por zero não é permitida.\n");
            }
            break;
        default:
            printf("Operação inválida.\n");
    }

    return 0;
}
