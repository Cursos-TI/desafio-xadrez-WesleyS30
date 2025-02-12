#include <stdio.h>

int main() {
    int bispo_mov = 5;
    int torre_mov = 5;
    int rainha_mov = 8;

    printf("Movimento do Bispo:\n");
    for (int i = 0; i < bispo_mov; i++) {
        printf("Cima Direita\n");
    }

    printf("Movimento da Torre:\n");
    for (int i = 0; i < torre_mov; i++) {
        printf("Direita\n");
    }

    printf("Movimento da Rainha:\n");
    for (int i = 0; i < rainha_mov; i++) {
        printf("Esquerda\n");
    }

    printf("Movimento do Cavalo:\n");

    
    int passos = 0;
    while (passos < 3) {
        if (passos < 2) {
            printf("Cima\n");
        } else {
            printf("Esquerda\n");
        }
        passos++;
    }

    return 0;
}
