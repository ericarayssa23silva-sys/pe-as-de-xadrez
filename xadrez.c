#include <stdio.h>

/*
------------------------------------------------------------
PROGRAMA: Movimentando as Peças do Xadrez
AUTORA: Rayssa Martinez
OBJETIVO:
    Simular o movimento de quatro peças de xadrez:
    - Torre (usando for)
    - Bispo (usando while)
    - Rainha (usando do-while)
    - Cavalo (usando loops aninhados: for + while)
Cada peça se move um número fixo de casas e imprime o
movimento no console.
------------------------------------------------------------
*/

int main() {
    // =====================================================
    // 1️⃣ MOVIMENTO DA TORRE - utilizando o laço "for"
    // =====================================================
    // A Torre se move em linha reta (horizontal ou vertical)
    // Neste caso, 5 casas para a direita
    int casasTorre = 5; // número de casas que a torre irá mover

    printf("=== Movimento da Torre ===\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita %d\n", i);
    }

    // =====================================================
    // 2️⃣ MOVIMENTO DO BISPO - utilizando o laço "while"
    // =====================================================
    // O Bispo se move na diagonal (ex: Cima, Direita)
    // Aqui, ele se moverá 5 casas na diagonal superior direita
    int casasBispo = 5; // número de casas que o bispo irá mover
    int contadorBispo = 1;

    printf("\n=== Movimento do Bispo ===\n");
    while (contadorBispo <= casasBispo) {
        printf("Cima, Direita %d\n", contadorBispo);
        contadorBispo++;
    }

    // =====================================================
    // 3️⃣ MOVIMENTO DA RAINHA - utilizando o laço "do-while"
    // =====================================================
    // A Rainha pode se mover em todas as direções.
    // Aqui, ela se moverá 8 casas para a esquerda.
    int casasRainha = 8; // número de casas que a rainha irá mover
    int contadorRainha = 1;

    printf("\n=== Movimento da Rainha ===\n");
    do {
        printf("Esquerda %d\n", contadorRainha);
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    // =====================================================
    // 4️⃣ MOVIMENTO DO CAVALO - utilizando loops aninhados
    // =====================================================
    // O Cavalo se move em formato de "L":
    // Duas casas em uma direção (para baixo)
    // e uma casa perpendicular (para a esquerda)
    //
    // Usaremos:
    // - Um loop "for" para controlar o movimento para baixo (2 casas)
    // - Um loop "while" para controlar o movimento para a esquerda (1 casa)
    // Cada passo será impresso no console.
    // =====================================================

    int casasBaixo = 2;     // duas casas para baixo
    int casasEsquerda = 1;  // uma casa para a esquerda
    int contadorBaixo, contadorEsquerda;

    printf("\n=== Movimento do Cavalo ===\n");

    // Loop externo: movimento para baixo (usa for)
    for (contadorBaixo = 1; contadorBaixo <= casasBaixo; contadorBaixo++) {
        printf("Baixo %d\n", contadorBaixo);
    }

    // Loop interno: movimento para a esquerda (usa while)
    contadorEsquerda = 1;
    while (contadorEsquerda <= casasEsquerda) {
        printf("Esquerda %d\n", contadorEsquerda);
        contadorEsquerda++;
    }

    // =====================================================
    // Fim do programa
    // =====================================================
    printf("\nFim da simulação das peças do xadrez.\n");

    return 0;
}
