
#include <stdio.h>

int main() {
    float num1, num2;
    char operacao;

    printf("Insira o primeiro n�mero: ");
    scanf("%f", &num1);

    printf("Insira a opera��o (+, -, *, /): ");
    scanf(" %c", &operacao);

    printf("Insira o segundo n�mero: ");
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
                printf("Divis�o por zero n�o � permitida.\n");
            }
            break;
        default:
            printf("Opera��o inv�lida.\n");
    }

    return 0;
}
