#include <stdio.h>
#include <stdlib.h>

int main() {
  float num1, num2;
  char operacao;

printf("Escolha uma opera��o (+ para soma): ");
  scanf(" %c", &operacao);

   printf("Digite o primeiro n�mero: ");
  scanf("%f", &num1);

  printf("Digite o segundo n�mero: ");
  scanf("%f", &num2);

  switch(operacao) {
    case '+':
      printf("Resultado da soma: %.2f\n", num1 + num2);
      break;
    case '-':
      printf("Resultado da subtra��o: %.2f\n", num1 - num2);
      break;
    default:
      printf("Opera��o inv�lida!\n");
      break;
  }

  return 0;
}
