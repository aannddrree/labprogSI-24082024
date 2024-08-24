#include <stdio.h>
#include <stdlib.h>  // Necessário para usar srand() e rand()
#include <time.h>    // Necessário para usar time()

int main() {
    int numero_secreto, palpite, tentativas = 0;

    // Inicializa o gerador de números aleatórios
    srand(time(0));  // Usa a hora atual como seed para o gerador de números aleatórios
    numero_secreto = rand() % 100 + 1;  // Gera um número aleatório entre 1 e 100

    printf("Bem-vindo ao Jogo da Adivinhação!\n");
    printf("Eu pensei em um número entre 1 e 100.\n");

    // Loop principal do jogo
    do {
        printf("Digite o seu palpite: ");
        scanf("%d", &palpite);
        tentativas++;

        if (palpite > numero_secreto) {
            printf("Muito alto! Tente um número menor.\n");
        } else if (palpite < numero_secreto) {
            printf("Muito baixo! Tente um número maior.\n");
        } else {
            printf("Parabéns! Você adivinhou o número em %d tentativas.\n", tentativas);
        }
    } while (palpite != numero_secreto);

    return 0;
}