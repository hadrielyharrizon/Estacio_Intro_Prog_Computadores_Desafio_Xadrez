#include <stdio.h>

int main() {
    /* Movimento da Torre
    A torre se move em linha reta (horizontal ou vertical).
    Aqui, a torre se move 5 casas para a direita. */
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        // Para cada iteração, a torre move 1 casa para a direita
        printf("Direita\n");
    }

    /* Movimento do Bispo
    O bispo se move na diagonal. 
    Aqui, o bispo se move 5 casas para cima e à direita. */
    printf("\nMovimento do Bispo:\n");
    int bispoMovimento = 0;
    while (bispoMovimento < 5) {
        printf("Cima Direita\n");
        bispoMovimento++;
    }

    /* Movimento da Rainha
    A rainha se move em qualquer direção. Aqui, ela se move 8 casas para a esquerda.*/
    printf("\nMovimento da Rainha:\n");
    int rainhaMovimento = 0;
    do {
        printf("Esquerda\n");
        rainhaMovimento++;
    } while (rainhaMovimento < 8);

    return 0;
}
