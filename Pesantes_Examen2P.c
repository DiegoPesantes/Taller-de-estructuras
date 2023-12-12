#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Insumos 5
#define Meses 12

void imprimirDetalle(int numInsumos, int insumos[Insumos][Meses][2]) {
    printf("Ingresos y egresos por insumo y mes:\n");
    for (int i = 0; i < numInsumos; ++i) {
        printf("Insumo %d:\n", i + 1);
        for (int j = 0; j < Meses; ++j) {
            printf("  Mes %d - Ingresos: %d, Egresos: %d\n", j + 1, insumos[i][j][0], insumos[i][j][1]);
        }
    }
}
void calcularTotales(int numInsumos, int insumos[Insumos][Meses][2]) {
    printf("Total de ingresos y egresos por insumo en todo el año:\n");
    for (int i = 0; i < numInsumos; ++i) {
        int totalIngresos = 0;
        int totalEgresos = 0;
        for (int j = 0; j < Meses; ++j) {
            totalIngresos += insumos[i][j][0];
            totalEgresos += insumos[i][j][1];
        }
        printf("Insumo %d - Total Ingresos: %d, Total Egresos: %d\n", i + 1, totalIngresos, totalEgresos);
    }
}