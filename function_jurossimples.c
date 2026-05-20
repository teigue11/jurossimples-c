#include <stdio.h>

int calcular_juros(int capital, int taxa, int tempo) {
    // dividindo por 100 no final para aplicar a porcentagem
    int juros = (capital * taxa * tempo) / 100;
    return juros;
}