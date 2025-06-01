#include <stdio.h>

// Função recursiva para simular movimento da Torre (direita)
void moveTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moveTorre(casas - 1);
}

// Função recursiva para simular movimento do Bispo (cima, direita)
void moveBispoRec(int casas) {
    if (casas <= 0) return;
    printf("Cima, Direita\n");
    moveBispoRec(casas - 1);
}

// Função recursiva para simular movimento da Rainha (esquerda)
void moveRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moveRainha(casas - 1);
}

int main() {
    // Simulação do movimento da Torre (recursão)
    printf("Movimento da Torre:\n");
    moveTorre(5);
    printf("\n");

    // Simulação do movimento do Bispo com recursão
    printf("Movimento do Bispo (recursão):\n");
    moveBispoRec(5);
    printf("\n");

    // Simulação do movimento do Bispo com loops aninhados
    printf("Movimento do Bispo (loops aninhados):\n");
    int casas_bispo = 5;
    for (int i = 0; i < casas_bispo; i++) {
        for (int j = 0; j < 1; j++) { // loop interno só para demonstrar aninhamento
            printf("Cima, Direita\n");
        }
    }
    printf("\n");

    // Simulação do movimento da Rainha (recursão)
    printf("Movimento da Rainha:\n");
    moveRainha(8);
    printf("\n");

    // Simulação do movimento do Cavalo (cima, cima, direita)
    printf("Movimento do Cavalo:\n");
    int cima = 2, direita = 1;
    for (int i = 0; i < cima; i++) {
        printf("Cima\n");
        for (int j = 0; j < direita; j++) {
            if (i == cima - 1) { // só imprime "Direita" na última iteração do "Cima"
                printf("Direita\n");
                break; // evita repetição desnecessária
            }
        }
    }
    printf("\n");

    return 0;
}
