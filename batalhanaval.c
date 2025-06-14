#include <stdio.h>
#include <stdbool.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3
#define AGUA 0
#define NAVIO 3

// Função para inicializar o tabuleiro com água (0)
void inicializarTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }
}

// Função para verificar se uma posição está dentro do tabuleiro
bool posicaoValida(int linha, int coluna) {
    return linha >= 0 && linha < TAMANHO_TABULEIRO && 
           coluna >= 0 && coluna < TAMANHO_TABULEIRO;
}

// Função para verificar sobreposição de navios
bool podePosicionar(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha, int coluna) {
    return posicaoValida(linha, coluna) && tabuleiro[linha][coluna] == AGUA;
}

// Função para posicionar navio horizontal
bool posicionarHorizontal(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha, int coluna) {
    // Verifica se todas as posições estão válidas e livres
    for (int j = coluna; j < coluna + TAMANHO_NAVIO; j++) {
        if (!podePosicionar(tabuleiro, linha, j)) {
            return false;
        }
    }
    
    // Posiciona o navio
    for (int j = coluna; j < coluna + TAMANHO_NAVIO; j++) {
        tabuleiro[linha][j] = NAVIO;
    }
    return true;
}

// Função para posicionar navio vertical
bool posicionarVertical(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha, int coluna) {
    // Verifica se todas as posições estão válidas e livres
    for (int i = linha; i < linha + TAMANHO_NAVIO; i++) {
        if (!podePosicionar(tabuleiro, i, coluna)) {
            return false;
        }
    }
    
    // Posiciona o navio
    for (int i = linha; i < linha + TAMANHO_NAVIO; i++) {
        tabuleiro[i][coluna] = NAVIO;
    }
    return true;
}

// Função para posicionar navio diagonal (direita)
bool posicionarDiagonalDireita(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha, int coluna) {
    // Verifica se todas as posições estão válidas e livres
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        if (!podePosicionar(tabuleiro, linha + i, coluna + i)) {
            return false;
        }
    }
    
    // Posiciona o navio
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linha + i][coluna + i] = NAVIO;
    }
    return true;
}

// Função para posicionar navio diagonal (esquerda)
bool posicionarDiagonalEsquerda(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha, int coluna) {
    // Verifica se todas as posições estão válidas e livres
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        if (!podePosicionar(tabuleiro, linha + i, coluna - i)) {
            return false;
        }
    }
    
    // Posiciona o navio
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linha + i][coluna - i] = NAVIO;
    }
    return true;
}

// Função para exibir o tabuleiro
void exibirTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    printf("\nTabuleiro de Batalha Naval:\n");
    printf("   ");
    for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
        printf("%2d ", j); // Cabeçalho das colunas
    }
    printf("\n");
    
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        printf("%2d ", i); // Cabeçalho das linhas
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%2d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];
    
    // Inicializa o tabuleiro com água
    inicializarTabuleiro(tabuleiro);
    
    // Posiciona os navios (2 retos e 2 diagonais)
    // Navio horizontal na linha 2, começando na coluna 3
    if (!posicionarHorizontal(tabuleiro, 2, 3)) {
        printf("Erro ao posicionar navio horizontal 1\n");
        return 1;
    }
    
    // Navio vertical na coluna 7, começando na linha 5
    if (!posicionarVertical(tabuleiro, 5, 7)) {
        printf("Erro ao posicionar navio vertical 1\n");
        return 1;
    }
    
    // Navio diagonal para direita começando em (1,1)
    if (!posicionarDiagonalDireita(tabuleiro, 1, 1)) {
        printf("Erro ao posicionar navio diagonal direita\n");
        return 1;
    }
    
    // Navio diagonal para esquerda começando em (4,8)
    if (!posicionarDiagonalEsquerda(tabuleiro, 4, 8)) {
        printf("Erro ao posicionar navio diagonal esquerda\n");
        return 1;
    }
    
    // Exibe o tabuleiro com os navios posicionados
    exibirTabuleiro(tabuleiro);
    
    return 0;
}