#include <stdio.h>

/*
------------------------------------------------------------
PROGRAMA: Movimentando as Peças do Xadrez (Versão Avançada)
AUTORA: Érica Raissa da Silva
OBJETIVO:
    Simular os movimentos de quatro peças do xadrez utilizando:
      - Recursividade (Torre, Bispo e Rainha)
      - Loops complexos e controle de fluxo (Cavalo)
------------------------------------------------------------
*/

// =========================================================
// FUNÇÃO RECURSIVA - TORRE
// =========================================================
// Move-se em linha reta (horizontal ou vertical).
// Aqui: 5 casas para a direita.
void moverTorre(int casaAtual, int totalCasas) {
    if (casaAtual > totalCasas) {
        return; // condição de parada
    }
    printf("Direita %d\n", casaAtual);
    moverTorre(casaAtual + 1, totalCasas); // chamada recursiva
}

// =========================================================
// FUNÇÃO RECURSIVA + LOOPS ANINHADOS - BISPO
// =========================================================
// Move-se em diagonal. Aqui: 5 casas "Cima, Direita".
// A recursividade controla o número de casas.
// Os loops aninhados representam o deslocamento vertical e horizontal.
void moverBispo(int casaAtual, int totalCasas) {
    if (casaAtual > totalCasas) {
        return; // condição de parada
    }

    // Loop aninhado: vertical (externo) e horizontal (interno)
    for (int vertical = 1; vertical <= 1; vertical++) {
        for (int horizontal = 1; horizontal <= 1; horizontal++) {
            printf("Cima, Direita %d\n", casaAtual);
        }
    }

    moverBispo(casaAtual + 1, totalCasas); // chamada recursiva
}

// =========================================================
// FUNÇÃO RECURSIVA - RAINHA
// =========================================================
// Move-se em todas as direções.
// Aqui: 8 casas para a esquerda.
void moverRainha(int casaAtual, int totalCasas) {
    if (casaAtual > totalCasas) {
        return; // condição de parada
    }
    printf("Esquerda %d\n", casaAtual);
    moverRainha(casaAtual + 1, totalCasas); // chamada recursiva
}

// =========================================================
// LOOPS COMPLEXOS - CAVALO
// =========================================================
// Movimento em "L": duas casas para cima e uma para a direita.
// Usa loops aninhados com múltiplas variáveis e controle de fluxo
// (break e continue) para simular o movimento.
void moverCavalo() {
    int movimentoVertical = 2; // duas casas para cima
    int movimentoHorizontal = 1; // uma casa para a direita

    printf("=== Movimento do Cavalo ===\n");

    for (int i = 1; i <= movimentoVertical; i++) {
        // Se for a primeira casa, apenas imprime e continua
        if (i == 1) {
            printf("Cima %d\n", i);
            continue;
        }

        // Se chegar na última casa vertical, imprime o movimento horizontal
        if (i == movimentoVertical) {
            printf("Cima %d\n", i);

            // Loop interno para o movimento à direita
            for (int j = 1; j <= movimentoHorizontal; j++) {
                if (j == 1) {
                    printf("Direita %d\n", j);
                    break; // interrompe após o movimento final
                }
            }
        }
    }
}

// =========================================================
// FUNÇÃO PRINCIPAL
// =========================================================
int main() {
    printf("=== Movimento da Torre ===\n");
    moverTorre(1, 5);

    printf("\n=== Movimento do Bispo ===\n");
    moverBispo(1, 5);

    printf("\n=== Movimento da Rainha ===\n");
    moverRainha(1, 8);

    printf("\n");
    moverCavalo();

    printf("\nFim da simulação das peças do xadrez.\n");
    return 0;
}

