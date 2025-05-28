#include <stdio.h>
#include <stdlib.h>

int main() {
    float preco = 100;
    float desconto;
    float preco_final;
    int opcao;

    printf("Escolha uma opção de desconto (1-5):\n");
    printf("1. 10%%\n");
    printf("2. 20%%\n");
    printf("3. 30%%\n");
    printf("4. 40%%\n");
    printf("5. 50%%\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            desconto = 0.1;
            break;
        case 2:
            desconto = 0.2;
            break;
        case 3:
            desconto = 0.3;
            break;
        case 4:
            desconto = 0.4;
            break;
        case 5:
            desconto = 0.5;
            break;
        default:
            printf("Opção inválida.\n");
            return 1;
    }

    preco_final = preco - (preco * desconto);

    printf("O preço final é: \$%.2f\n", preco_final);

    return 0;
}
