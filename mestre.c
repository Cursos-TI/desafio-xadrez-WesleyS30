#include <stdio.h>


void mover_rainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    mover_rainha(passos - 1);
}

int main() {
    int bispo_mov = 5;
    int torre_mov = 5;
    int rainha_mov = 8;

   
    printf("Movimento do Bispo:\n");
    for (int i = 0; i < bispo_mov; i++) {
        for (int j = 0; j < bispo_mov; j++) {
            if (i != j) {
                continue; 
            }
            printf("Cima Direita\n");
        }
    }


    printf("Movimento da Torre:\n");
    int passos_realizados = 0;
    for (int i = 0; i < torre_mov; i++) {
        printf("Direita\n");
        passos_realizados++;
        if (passos_realizados == 5) {
            break; 
        }
    }

 
    printf("Movimento da Rainha:\n");
    mover_rainha(rainha_mov);

    
    printf("Movimento do Cavalo:\n");
    for (int i = 0; i < 3; i++) {
        if (i < 2) {
            printf("Cima\n");
        } else {
            printf("Direita\n");
        }
    }

    return 0;
}

