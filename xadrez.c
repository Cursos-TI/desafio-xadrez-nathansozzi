#include <stdio.h>


int main() {

    // CONSTANTES DE MOVIMENTOS
    const int MOVIMENTOS_TORRE = 5;
    const int MOVIMENTOS_BISPO = 5;
    const int MOVIMENTOS_RAINHA = 8;


    //MOVIMENTAÇÃO TORRE
    // 5 casas para a direita
    printf("\n=== MOVIMENTOS DA TORRE ===\n");
    int t = 1;
    while (t <= MOVIMENTOS_TORRE) {
        printf("Movimento %d:\n", t);
        printf("Direita\n");
        printf("\n");
        t++;
    }

    //MOVIMENTAÇÃO BISPO
    // 5 casas na diagonal superior direita
    printf("\n=== MOVIMENTOS DO BISPO ===\n");
    for (int b = 1;b<=MOVIMENTOS_BISPO;b++) {
        printf("Movimento %d:\n", b);
        printf("Cima\n");
        printf("Direita\n");
        printf("\n");
    }

    //MOVIMENTAÇÃO RAINHA
    // 8 casas para a esquerda
    printf("\n=== MOVIMENTOS DA RAINHA ===\n");
    int r = 1;
    do {
        printf("Movimento %d:\n", r);
        printf("Esquerda\n");
        printf("\n");
        r++;
    } while (r<=MOVIMENTOS_RAINHA);


    return 0;
}
