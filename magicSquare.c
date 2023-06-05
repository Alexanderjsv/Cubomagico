#include <stdio.h>
#include "magicSquare.h"

int cuadradoMagico(int filas, int columnas, int cuadrado[filas][columnas]) {
    int suma = 0;
    for (int j = 0; j < columnas; j++) {
        suma += cuadrado[0][j];
    }
    return suma;
}

int calcularConstanteMagica(int filas, int columnas, int cuadrado[filas][columnas]) {
    int sumfila = 0;
    int sumcolumnas = 0;
    int sumdiagonal1 = 0;
    int sumdiagonal2 = 0;
    int sumaTotal = cuadradoMagico(filas, columnas, cuadrado);

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            sumfila += cuadrado[i][j];
            sumcolumnas += cuadrado[j][i];
        }
        if (sumfila != sumaTotal) {
            return 0;
        } else {
            sumfila = 0;
        }

        if (sumcolumnas != sumaTotal) {
            return 0;
        } else {
            sumcolumnas = 0;
        }
    }

    for (int i = 0; i < filas; i++) {
        sumdiagonal1 += cuadrado[i][i];
        if (sumdiagonal1 != sumaTotal) {
            return 0;
        } else {
            sumdiagonal1 = 0;
        }
    }
    
    int j = columnas - 1;
    for (int i = 0; i < filas; i++) {
        sumdiagonal2 += cuadrado[i][j];
        j--;
        if (sumdiagonal2 != sumaTotal) {
            return 0;
        } else {
            sumdiagonal2 = 0;
        }
    }

    return sumaTotal;
}

void imprimirCuadrado(int filas, int columnas, int cuadrado[filas][columnas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", cuadrado[i][j]);
        }
        printf("\n");
    }
}