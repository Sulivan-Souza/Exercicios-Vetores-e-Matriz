#include <stdio.h>
#define MaxA 5
#define MaxB 6

int main() {

    int matriz1[MaxA], matriz2[MaxB], matriz3[MaxA + MaxB], valor;

    for (valor = 0; valor < MaxA; valor++) {
        printf("\n digite o valor da matriz A: ");
        scanf("%d", &matriz1[valor]);
        matriz3[valor] = matriz1[valor];

    }
    for (valor = 0; valor < MaxB; valor++) {
        printf("\n digite o valor da matriz B: ");
        scanf("%d", &matriz2[valor]);
        matriz3[valor + MaxA] = matriz2[valor];
    }
    for (valor = 0; valor < MaxA + MaxB; valor++) printf("\n Os valores das matrizes A e B sao: %d \n\t", matriz3[valor]);
}
