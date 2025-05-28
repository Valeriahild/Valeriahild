#include <stdio.h>
#include <stdlib.h>

int main() {
  float num1, num2;
  char operacao;

printf("Escolha uma operação (+ para soma): ");
  scanf(" %c", &operacao);

   printf("Digite o primeiro número: ");
  scanf("%f", &num1);

  printf("Digite o segundo número: ");
  scanf("%f", &num2);

  switch(operacao) {
    case '+':
      printf("Resultado da soma: %.2f\n", num1 + num2);
      break;
    case '-':
      printf("Resultado da subtração: %.2f\n", num1 - num2);
      break;
    default:
      printf("Operação inválida!\n");
      break;
  }

  return 0;
}
