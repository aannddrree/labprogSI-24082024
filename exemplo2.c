#include <stdio.h>

int main() {
    int num, i;
    unsigned long long fatorial = 1;  // Usamos unsigned long long para suportar números grandes

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    // Verifica se o número é positivo
    if (num < 0) {
        printf("Fatorial não é definido para números negativos.\n");
    } else {
        // Calcula o fatorial usando um loop
        for (i = 1; i <= num; ++i) {
            fatorial *= i;
        }

        printf("O fatorial de %d é: %llu\n", num, fatorial);
    }

    return 0;
}
