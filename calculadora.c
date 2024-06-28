#include <stdio.h>
#include <stdlib.h>

int main() {
    char op;
    double n1, n2, res;
    int i;

    printf("Você deseja fazer um cálculo? 1- Sim 2- Não\n");
    scanf("%d", &i);

    if(i == 1) {
        while(i == 1) {
            printf("Digite a operação que deseja fazer: (+, -, /, *)\n");
            scanf(" %c", &op);

            printf("Digite o primeiro número: ");
            scanf("%lf", &n1);

            printf("Digite o segundo número: ");
            scanf("%lf", &n2);

            switch(op) {
                case '+':
                    res = n1 + n2;
                    break;

                case '-':
                    res = n1 - n2;
                    break;

                case '/':
                    if(n2 != 0) {
                        res = n1 / n2;
                    } else {
                        printf("Não é possível realizar divisão por zero\n");
                        continue;
                    }
                    break;

                case '*':
                    res = n1 * n2;
                    break;

                default:
                    printf("Operação inválida\n");
                    continue;
            }
            printf("Resultado: %.2lf\n", res);

            printf("Quer continuar calculando? 1- Sim 2- Não\n");
            scanf("%d", &i);
        }
    } else {
        printf("Até logo!\n");
    }

    return 0;
}