#include <stdio.h>
#include <string.h>

// Constantes para o número de movimentos
#define MOVES_TORRE 4
#define MOVES_BISPO 4
#define MOVES_CAVALO 8
#define MOVES_RAINHA 8

// Função recursiva para mover a Torre
void moverTorre(int casas) {
    if (casas <= 0) return;
    
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para mover o Bispo
void moverBispo(int casas) {
    if (casas <= 0) return;
    
    printf("Diagonal superior direita\n");
    moverBispo(casas - 1);
}

// Função recursiva para mover a Rainha
void moverRainha(int casas) {
    if (casas <= 0) return;
    
    printf("Rainha: Todas as direções\n");
    moverRainha(casas - 1);
}

// Função para mover o Cavalo com loops complexos
void moverCavalo() {
    // Movimento em L: 2 casas para cima, 1 para direita
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 1; j++) {
            if (i == 0 && j == 0) {
                printf("Primeiro movimento do cavalo\n");
                continue;
            }
            printf("Cima\n");
        }
        printf("Direita\n");
    }
}

// Função para mover o Bispo com loops aninhados
void moverBispoLoopsAninhados() {
    // Loop externo para vertical (cima/baixo)
    for (int vertical = 0; vertical < 2; vertical++) {
        // Loop interno para horizontal (esquerda/direita)
        for (int horizontal = 0; horizontal < 2; horizontal++) {
            if (vertical == 0 && horizontal == 0) {
                printf("Diagonal superior direita\n");
            } else if (vertical == 0 && horizontal == 1) {
                printf("Diagonal superior esquerda\n");
            } else if (vertical == 1 && horizontal == 0) {
                printf("Diagonal inferior direita\n");
            } else {
                printf("Diagonal inferior esquerda\n");
            }
        }
    }
}

int main() {
    printf("Movimentos da Torre (recursivo):\n");
    moverTorre(MOVES_TORRE);
    printf("\n");
    
    printf("Movimentos do Bispo (recursivo):\n");
    moverBispo(MOVES_BISPO);
    printf("\n");
    
    printf("Movimentos da Rainha (recursivo):\n");
    moverRainha(MOVES_RAINHA);
    printf("\n");
    
    printf("Movimentos do Cavalo (loops complexos):\n");
    moverCavalo();
    printf("\n");
    
    printf("Movimentos do Bispo (loops aninhados):\n");
    moverBispoLoopsAninhados();
    printf("\n");
    
    return 0;
}