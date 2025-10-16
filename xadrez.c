#include <stdio.h>


// ===============================
// CONSTANTES GLOBAIS DE MOVIMENTO
// ===============================
const int MOVIMENTOS_TORRE = 5;
const int MOVIMENTOS_BISPO = 5;
const int MOVIMENTOS_RAINHA = 8;
const int MOVIMENTOS_CAVALO = 1; // TOTAL DE MOVIMENTOS COMPLETOS DO CAVALO


// ==================
// FUNÇÕES RECURSIVAS
// ==================
// MOVIMENTAÇÃO TORRE
void moverTorre(int passo, int limite) {
    if (passo > limite) return;
    printf("Movimento %d:\n", passo);
    printf("Direita\n\n");
    moverTorre(passo + 1, limite);
}


// MOVIMENTAÇÃO RAINHA
void moverRainha (int passo, int limite) {
    if (passo > limite) return;
    printf("Movimento: %d\n", passo);
    printf("Esquerda\n");
    moverRainha(passo + 1, limite);
}


// MOVIMENTAÇÃO BISPO
void moverBispo (int passo, int limite) {
    if (passo > limite) return;
    printf("Movimento: %d\n", passo);

    for (int v = 1; v <= 1; v++) { //Movimentação vertical
        printf("Cima\n");

        for (int h = 1; h <= 1; h++) { //Movimentação horizontal
            printf("Direita\n");
        }
    }
    printf("\n");
    moverBispo(passo + 1, limite);
}


// ==========================
// FUNÇÃO COM LOOPS COMPLEXOS
// ==========================
// MOVIMENTAÇÃO CAVALO
void moverCavalo() {
    for (int v = 1; v <= 3; v++) {
        if (v == 3) {
            for (int h = 1; h <= 1; h++) {
                if (h == 1) {
                    printf("Direita\n");
                    break;
                }
            }
        } else {
            printf("Cima\n");
            continue;
        }
    }
    printf("\n");
}


// ================
// FUNÇÃO PRINCIPAL
// ================
int main() {

    // CHAMADA PARA MOVER A TORRE
    printf("\n=== MOVIMENTOS DA TORRE ===\n");
    moverTorre(1, MOVIMENTOS_TORRE);

    // CHAMADA PARA MOVER O BISPO
    printf("\n=== MOVIMENTOS DO BISPO ===\n");
    moverBispo(1, MOVIMENTOS_BISPO);

    // CHAMADA PARA MOVER A RAINHA
    printf("\n=== MOVIMENTOS DA RAINHA ===\n");
    moverRainha(1, MOVIMENTOS_RAINHA);

    // CHAMADA PARA MOVER O CAVALO
    printf("\n=== MOVIMENTOS DO CAVALO ===\n");
    moverCavalo();

    // FIM DOS MOVIMENTOS
    printf("=== FIM DOS MOVIMENTOS ===\n");
    return 0;
}