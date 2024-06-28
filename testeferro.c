#include <stdio.h>

int main() {
    float carbono, dureza, resistencia;

    printf("Digite o conteudo de carbono (em %%): ");
    scanf("%f", &carbono);

    printf("Digite a dureza Rokwell: ");
    scanf("%f", &dureza);

    printf("Digite a resistencia a tracao (em psi): ");
    scanf("%f", &resistencia);

    if (carbono < 7 && dureza > 50 && resistencia > 80000) {
        printf("Grau 10 - Passou nos tres testes.\n");
    } else if (carbono < 7 && dureza > 50) {
        printf("Grau 9 - Passou nos testes 1 e 2.\n");
    } else if (carbono < 7) {
        printf("Grau 8 - Passou no teste 1.\n");
    } else {
        printf("Grau 7 - Nao passou nos tres testes.\n");
    }
    return 0;
}