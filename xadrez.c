#include <stdio.h>

int main() {
    // Movimento da Torre: 5 casas para a direita
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Casa %d: Direita\n", i + 1);
    }

    // Movimento do Bispo: 5 casas na diagonal (Cima, Direita)
    printf("\nMovimento do Bispo:\n");
    int j = 0;
    while (j < 5) {
        printf("Casa %d: Cima, Direita\n", j + 1);
        j++;
    }

    // Movimento da Rainha: 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    int k = 0;
    do {
        printf("Casa %d: Esquerda\n", k + 1);
        k++;
    } while (k < 8);

    return 0;
}
