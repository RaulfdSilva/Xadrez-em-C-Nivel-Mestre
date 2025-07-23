#include <stdio.h>

void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

void moverBispo(int casas, int limite) {
    if (casas > limite) return;
    for (int linha = 0; linha < 1; linha++) {
        for (int coluna = 0; coluna < 1; coluna++) {
            printf("Cima ");
            printf("Direita\n");
        }
    }
    moverBispo(casas + 1, limite);
}

void moverCavalo() {
    for (int vertical = 0; vertical < 2; vertical++) {
        if (vertical == 1) continue;
        printf("Cima\n");
    }

    int direita = 0;
    while (1) {
        printf("Direita\n");
        direita++;
        if (direita >= 1) break;
    }
}

int main() {
    
    const int passosBispo = 5;
    const int passosTorre = 5;
    const int passosRainha = 8;

    printf("Movimento do Bispo\n");
    moverBispo(1, passosBispo);

    printf("\nMovimento da Torre\n");
    moverTorre(passosTorre);

    printf("\nMovimento da Rainha\n");
    moverRainha(passosRainha);

    printf("\nMovimento do Cavalo\n");
    moverCavalo();

    return 0;
}
