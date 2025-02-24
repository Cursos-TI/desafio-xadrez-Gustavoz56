
#include <stdio.h>

// Função recursiva para mover a Torre para a direita
void mover_torre_direita(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    mover_torre_direita(casas - 1);
}

// Função recursiva para mover o Bispo diagonalmente para cima e à direita
void mover_bispo(int casas) {
    if (casas == 0) return;
    printf("Cima\n");
    printf("Direita\n");
    mover_bispo(casas - 1);
}

// Função recursiva para mover a Rainha (em todas as direções)
void mover_rainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    mover_rainha(casas - 1);
}

// Função para o movimento do Cavalo (dois para cima e um para a direita em "L")
void mover_cavalo() {
    for (int i = 0; i < 2; i++) { // Movimento vertical (Cima)
        printf("Cima\n");
    }
    for (int j = 0; j < 1; j++) { // Movimento horizontal (Direita)
        printf("Direita\n");
    }
}

int main() {
    int casas = 5;

    printf("*****  movimentacao das peças de xadrez  ****\n");//titulo do jogo

    // Movimento da Torre
    printf("Movimento da Torre:\n");
    mover_torre_direita(casas);
    printf("\n");

    // Movimento do Bispo
    printf("Movimento do Bispo:\n");
    mover_bispo(casas);
    printf("\n");

    // Movimento da Rainha
    printf("Movimento da Rainha:\n");
    mover_rainha(8); // Rainha movendo-se 8 casas para a esquerda
    printf("\n");

    // Movimento do Cavalo
    printf("Movimento do Cavalo:\n");
    mover_cavalo();

    return 0;
}






