#include <stdio.h>
#include "magicSquare.h"

int main() {
    int cuadradoA[3][3] = {
        {2, 7, 6},
        {9, 5, 1},
        {4, 3, 8}
    };

    int cuadradoB[4][4] = {
    {16,  2,  3, 13},
    { 5, 11, 10,  8},
    { 9,  7,  6, 12},
    { 4, 14, 15,  1}
    };

    printf("Cuadrado Mágico A:\n");
    imprimirCuadrado(3,3,cuadradoA);

    if (cuadradoMagico(3,3,cuadradoA)) {
        printf("Este es un cuadrado mágico.\n");
        printf("Constante Mágica: %d\n", calcularConstanteMagica(3,3,cuadradoA));
    } else {
        printf("Este no es un cuadrado mágico.\n");
    }

    printf("Cuadrado Mágico B:\n");
    imprimirCuadrado(4,4,cuadradoB);

    if (cuadradoMagico(4,4,cuadradoB)) {
        printf("Este es un cuadrado mágico.\n");
        printf("Constante Mágica: %d\n", calcularConstanteMagica(4,4,cuadradoB));
    } else {
        printf("Este no es un cuadrado mágico.\n");
    }
    return 0;
}
